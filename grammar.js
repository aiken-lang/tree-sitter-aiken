/** @type {import('tree-sitter-cli/dsl')}  */

module.exports = grammar({
  name: "aiken",
  rules: {
    source_file: ($) =>
      repeat(
        choice($._definition, $.module_comment, $.definition_comment, $.comment)
      ),
    extras: ($) => choice($.type_struct_inner, $.any_comment),
    _definition: ($) =>
      choice(
        $.import,
        $.type_alias,
        $.type_struct,
        $.type_enum,
        $.constant,
        $.function,
        $.validator,
        $.test
      ),

    // Handles import definitions
    // use foo
    // use foo/bar
    // use foo/bar.{buzz, Fizz as Fuzz} as foo
    import: ($) =>
      seq(
        "use",
        field("module", $.module),
        optional(seq(".", field("unqualified", $.unqualified_imports))),
        optional(seq("as", field("alias", $.identifier)))
      ),
    module: ($) => seq($._name, repeat(seq("/", $._name))),
    unqualified_imports: ($) =>
      seq("{", optional(repeat_separated_by($.unqualified_import, ",")), "}"),
    unqualified_import: ($) =>
      choice(
        seq(
          field("name", $.identifier),
          optional(seq("as", field("alias", $.identifier)))
        ),
        seq(
          field("name", $.type_identifier),
          optional(seq("as", field("alias", $.type_identifier)))
        )
      ),

    // Handles type aliasing definitions
    type_alias: ($) =>
      seq(
        optional("pub"),
        optional("opaque"),
        "type",
        $.type_definition,
        "=",
        $.type_definition
      ),

    // Handle enum type definitions
    type_enum: ($) =>
      seq(
        optional("pub"),
        optional("opaque"),
        "type",
        $.type_definition,
        block(repeat1(choice($.any_comment, $.type_enum_variant)))
      ),
    type_enum_variant: ($) =>
      choice(
        // Foo
        $.type_identifier,
        // Foo(Foo)
        // Foo(a, b)
        seq(
          $.type_identifier,
          seq("(", repeat_separated_by($.type_argument, ","), ")")
        ),
        // Foo { bar: Baz }
        $.type_struct_inner
      ),

    // Handle struct type definitions (syntax sugar for enumerations with only one element)
    type_struct: ($) =>
      seq(optional("pub"), optional("opaque"), "type", $.type_struct_inner),
    type_struct_inner: ($) =>
      seq($.type_definition, block($.type_struct_fields)),
    type_struct_fields: ($) => repeat1($.type_struct_field),
    type_struct_field: ($) =>
      seq($.identifier, ":", $.type_argument, optional(",")),

    type_definition: ($) =>
      prec(
        2,
        seq(
          $.type_identifier,
          optional(seq("<", repeat_separated_by($.type_argument, ","), ">"))
        )
      ),
    type_argument: ($) =>
      field("type_argument", choice($.identifier, $.type_definition, $.tuple)),
    /*pair_type: ($) => prec(2, seq(
        "Pair",
        "<",
        $.type_argument,
        ",",
        $.type_argument,
        ">"
      )),*/

    validator: ($) =>
      seq(
        "validator",
        // optional($.identifier),
        optional($.function_arguments),
        optional(seq("->", $.type_definition)),
        block(repeat($.function))
      ),

    // Tests are basically functions with the 'test' keyword
    test: ($) =>
      seq(
        optional("pub"),
        "test",
        optional($.identifier),
        $.function_arguments,
        optional(seq("->", $.type_definition)),
        block(repeat($.expression))
      ),

    // Functions
    function: ($) =>
      seq(
        optional("pub"),
        "fn",
        optional($.identifier),
        $.function_arguments,
        optional(
          seq("->", choice($.type_definition, $.expression, $.function_type))
        ),
        block(repeat($.expression))
      ),

    function_arguments: ($) =>
      seq("(", optional(repeat_separated_by($.function_argument, ",")), ")"),
    function_argument: ($) =>
      // Allowing for "key $.identifier" and "value $.identifier" breaks fn (foo, value) -> Baz
      //   unless we allow it with ($.identifier $.identifier). This is a bit of a hack.
      seq(
        choice(
          $.identifier,
          seq($.identifier, $.identifier),
          $.type_definition
        ),
        optional(
          seq(":", choice($.expression, $.type_definition, $.function_type))
        )
      ),

    function_type: ($) =>
      prec(
        1,
        seq(
          "fn",
          $.function_arguments,
          "->",
          choice($.type_definition, $.identifier)
        )
      ),

    // Not all of these are technically expressions, but they all go in the same block.
    // Probably good to break this into multiple rules later.
    expression: ($) =>
      prec.right(
        seq(
          choice(
            seq($.any_comment, optional($.expression)),
            $.identifier,
            $.match_pattern,
            $.field_access,
            $.int,
            $.string,
            $.bool,
            $.function,
            $.list,
            $.call,
            prec(1, $.bin_op),
            $.bytes,
            $.bytearray_literal,
            // $.curvepoint - Add this later.
            $.pipeline,
            $.assignment,
            $.trace,
            $.trace_if_false,
            $.todo,
            $.when,
            $.if,
            $.tuple,
            $.pair,
            $.error_term,
            prec(2, $.unary_op),
            $.unary_expect,
            $.logical_op_chain,
            $.todo
          ),
          optional(seq("as ", $.identifier))
        )
      ),

    error_term: ($) => prec.right(seq("fail", optional($.string))),
    tuple: ($) =>
      seq(
        "(",
        repeat_separated_by(choice($.type_definition, $.expression), ","),
        ")"
      ),
    pair: ($) =>
      seq(
        "Pair",
        choice("(", "<"),
        $.expression,
        ",",
        $.expression,
        choice(")", ">")
      ),

    if: ($) =>
      seq(
        "if",
        choice($.expression, $.soft_cast),
        block(repeat($.expression)),
        optional(seq("else", choice($.if, block(repeat($.expression)))))
      ),
    // Soft-Casting
    // if identifier is type_definition { ... } else { ...}
    soft_cast: ($) =>
      seq(
        "if",
        $.identifier,
        "is",
        $.type_definition,
        block(repeat($.expression)),
        optional(seq("else", choice($.if, block(repeat($.expression)))))
      ),
    when: ($) => seq("when", $.expression, "is", block(repeat1($.when_case))),
    when_case: ($) =>
      prec.right(
        seq(
          choice($.expression, $.discard),
          // $.match_pattern, $.list, $.tuple, $.pair, $.discard),
          "->",
          choice($.expression, block(repeat($.expression)))
        )
      ),

    logical_op_chain: ($) => choice($.and_chain, $.or_chain),
    and_chain: ($) => seq("and", block(repeat_separated_by($.expression, ","))),
    or_chain: ($) => seq("or", block(repeat_separated_by($.expression, ","))),

    todo: (_$) => "todo",

    unary_op: ($) => prec.right(seq($.unary_operator, $.expression)),
    unary_operator: (_$) => choice("!", "-"),
    bin_op: ($) =>
      prec.left(1, seq($.expression, $.binary_operator, $.expression)),
    // prec.right(seq($.expression, $.binary_operator, $.expression)),
    binary_operator: ($) =>
      prec(
        1,
        choice(
          "+",
          "-",
          "*",
          "/",
          "%",
          "==",
          "!=",
          "<",
          "<=",
          ">",
          ">=",
          "&&",
          "||"
        )
      ),

    unary_expect: ($) => prec.right(seq("expect", $.expression)),
    assignment: ($) =>
      choice($.let_assignment, $.expect_assignment, $.backpass_assignment),

    backpass_assignment: ($) =>
      prec.right(
        seq(
          choice("let", "expect"),
          choice(
            repeat_separated_by(choice($.identifier, $.discard), ","),
            $.match_pattern,
            $.list,
            $.tuple,
            $.pair,
            $.identifier,
            $.discard
          ),
          "<-",
          $.expression
        )
      ),

    let_assignment: ($) =>
      prec.right(
        seq(
          "let",
          choice(
            repeat_separated_by(choice($.identifier, $.discard), ","),
            $.match_pattern,
            $.list,
            $.tuple,
            $.pair,
            $.identifier,
            $.discard
          ),
          optional(seq(":", $.type_definition)),
          "=",
          $.expression
        )
      ),
    expect_assignment: ($) =>
      prec.right(
        seq(
          "expect",
          choice(
            repeat_separated_by(choice($.identifier, $.discard), ","),
            $.match_pattern,
            $.list,
            $.tuple,
            $.pair,
            $.identifier,
            $.discard
          ),
          optional(seq(":", $.type_definition)),
          "=",
          $.expression
        )
      ),
    field_capture_element: ($) =>
      choice($.identifier, seq($.identifier, ":", $.expression)),

    // Patterns for case and expect
    match_pattern: ($) =>
      prec.right(
        seq(
          $.type_identifier,
          optional(
            choice(
              seq(
                "(",
                repeat_separated_by(
                  choice($.match_pattern_argument, ".."),
                  ","
                ),
                ")"
              ),
              seq(
                "{",
                optional(
                  repeat_separated_by(
                    choice($.field_capture_element, ".."),
                    ","
                  )
                ),
                "}"
              )
            )
          )
        )
      ),
    match_pattern_argument: ($) => choice($.expression, $.discard),

    list: ($) =>
      choice(
        "[]",
        seq(
          "[",
          repeat_separated_by(choice($.expression, $.discard), ","),
          "]"
        ),
        seq(
          "[",
          repeat_separated_by(choice($.expression, $.discard), ","),
          "..",
          optional(choice($.expression, $.discard)),
          "]"
        )
      ),

    call: ($) => seq(choice($.identifier, $.field_access), $.call_arguments),
    call_arguments: ($) =>
      seq("(", optional(repeat_separated_by($.call_argument, ",")), ")"),
    call_argument: ($) =>
      choice(
        choice($.expression, block(repeat($.expression))),
        seq($.identifier, ":", $.expression)
      ),
    field_access: ($) =>
      seq($.identifier, ".", choice($.field_identifier, $.field_access)),
    pipeline: ($) => prec.left(seq($.expression, "|>", $.expression)),

    // Constants
    constant: ($) =>
      seq(
        optional("pub"),
        "const",
        $.identifier,
        optional(seq(":", choice($.type_definition, $.tuple, $.pair, $.list))),
        "=",
        $.constant_value
      ),
    constant_value: ($) =>
      choice(
        $.int,
        $.string,
        $.bytes,
        $.bytearray_literal,
        $.bool,
        $.list,
        $.tuple,
        $.pair
        // $.curvepoint - Add this later.
      ),

    // Trace
    trace: ($) => prec.left(seq("trace", $.expression)),
    trace_if_false: ($) => seq($.expression, "?"),

    base10: (_$) => token(/[0-9]+/),
    base10_underscore: (_$) => token(/[0-9]+(_[0-9]+)+/),
    base16: (_$) => token(/0x[0-9a-fA-F]+/),
    int: ($) => choice($.base10, $.base10_underscore, $.base16), // seq("-", choice($.base10, $.base10_underscore, $.base16))),

    bool: (_$) => choice("True", "False"),

    string: ($) => seq("@", $.string_inner),
    bytes: ($) => seq(optional("#"), $.string_inner),
    bytearray_literal: ($) => seq("#", $.list),
    string_inner: ($) =>
      prec.right(seq('"', repeat(choice(/[^\\"]/, $.escape)), '"')),
    escape: (_$) => token(/\\./),

    //  Comments
    any_comment: ($) =>
      choice($.module_comment, $.definition_comment, $.comment),
    module_comment: (_$) => token(seq("////", /.*/)),
    definition_comment: (_$) => token(seq("///", /.*/)),
    comment: (_$) => token(seq("//", /.*/)),

    // convenient
    field_identifier: ($) => $._field_name,
    identifier: ($) => $._name,
    label: ($) => $._name,
    discard: ($) => $._discard_name,
    type_identifier: ($) => $._upname,

    _field_name: (_$) => /[_0-9a-z]+/,
    _discard_name: (_$) => /_[_0-9a-z]*/,
    _name: (_$) => /[_a-z][_0-9a-z]*/,
    _upname: (_$) => /[A-Z][_0-9a-zA-Z]*/,
  },
});

// Aiken itself took this from tree-sitter-gleam. We renamed it to
// `repeat_separated_by` and added some types.
// Shamelessly stolen "sep1" from tree-sitter-elixir, renamed to match a similar
// function in the Gleam parser.
// https://github.com/elixir-lang/tree-sitter-elixir/blob/de3ec57591aebf451e710fc9c984cf601258baf5/grammar.js#L817-L819
function repeat_separated_by(
  /** @type {RuleOrLiteral}  */
  rule,
  /** @type {RuleOrLiteral}  */
  separator
) {
  return seq(rule, repeat(seq(separator, rule)), optional(separator));
}

function block(rule, start_sep = "{", end_sep = "}") {
  return seq(start_sep, rule, end_sep);
}
