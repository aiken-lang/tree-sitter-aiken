/** @type {import('tree-sitter-cli/dsl')}  */

module.exports = grammar({
  name: "aiken",
  conflicts: ($) => [
    [$._type_annotation, $.expression],
    [$.expression, $.when],
    [$._expression_or_fields, $.pipeline],
    [$._expression_or_fields, $.trace_if_false],
    [$.pipeline, $.trace],
    [$.trace, $.trace_if_false],
  ],
  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $._definition,
          $.decorator,
          $.module_comment,
          $.definition_comment,
          $.comment,
        ),
      ),
    _definition: ($) =>
      choice(
        $.import,
        $.type_alias,
        $.type_struct,
        $.type_enum,
        $.constant,
        $.function,
        $.validator,
        $.test,
        $.benchmark,
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
        optional(seq("as", field("alias", $.identifier))),
      ),
    module: ($) => seq($._name, repeat(seq("/", $._name))),
    unqualified_imports: ($) =>
      seq("{", optional(repeat_separated_by($.unqualified_import, ",")), "}"),
    unqualified_import: ($) =>
      choice(
        seq(
          field("name", $.identifier),
          optional(seq("as", field("alias", $.identifier))),
        ),
        seq(
          field("name", $.type_identifier),
          optional(seq("as", field("alias", $.type_identifier))),
        ),
      ),

    // Handles type aliasing definitions
    type_alias: ($) =>
      seq(
        optional("pub"),
        optional("opaque"),
        "type",
        $.type_definition,
        "=",
        $._type_annotation,
      ),

    // Handle enum type definitions
    type_enum: ($) =>
      seq(
        optional("pub"),
        optional("opaque"),
        "type",
        $.type_definition,
        block(
          repeat1(choice($.any_comment, $.decorator, $.type_enum_variant)),
        ),
      ),
    type_enum_variant: ($) =>
      choice(
        // Foo
        $.type_identifier,
        // Foo(Foo)
        // Foo(a, b)
        seq(
          $.type_identifier,
          seq("(", repeat_separated_by($.type_argument, ","), ")"),
        ),
        // Foo { bar: Baz }
        $.type_struct_inner,
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
          optional(seq("<", repeat_separated_by($.type_argument, ","), ">")),
        ),
      ),
    type_argument: ($) =>
      field(
        "type_argument",
        choice($.identifier, $.type_definition, $.tuple, $.function_type),
      ),
    _type_annotation: ($) =>
      choice($.type_definition, $.function_type, $.identifier, $.tuple),

    // Decorators: @tag(117), @list
    decorator: ($) =>
      seq(
        "@",
        $.identifier,
        optional(
          seq(
            "(",
            optional(repeat_separated_by($.decorator_argument, ",")),
            ")",
          ),
        ),
      ),
    decorator_argument: ($) =>
      choice($.int, $.string, $.bytes, $.identifier, $.bool),

    validator: ($) =>
      seq(
        "validator",
        seq(optional($.identifier), optional($.function_arguments)),
        block(
          seq(
            repeat(choice($.function, $.validator_hook, $.any_comment)),
            optional($.validator_fallback),
          ),
        ),
      ),

    validator_hook: ($) =>
      seq(
        $.identifier,
        $.function_arguments,
        optional(seq("->", $._type_annotation)),
        block(repeat($._expression_or_fields)),
      ),

    validator_fallback: ($) =>
      seq(
        "else",
        $.function_arguments,
        optional(seq("->", $._type_annotation)),
        block(repeat($._expression_or_fields)),
      ),

    // Tests with optional fail/fail once modifier
    test: ($) =>
      seq(
        optional("pub"),
        "test",
        $.identifier,
        $.function_arguments,
        optional(seq("->", $._type_annotation)),
        optional(seq("fail", optional("once"))),
        block(repeat($._expression_or_fields)),
      ),

    // Benchmarks: bench name(arg via fuzzer) { ... }
    benchmark: ($) =>
      seq(
        "bench",
        $.identifier,
        $.function_arguments,
        optional(seq("->", $._type_annotation)),
        block(repeat($._expression_or_fields)),
      ),

    // Functions
    function: ($) =>
      seq(
        optional("pub"),
        "fn",
        optional($.identifier),
        $.function_arguments,
        optional(seq("->", $._type_annotation)),
        block(repeat($._expression_or_fields)),
      ),

    function_arguments: ($) =>
      seq("(", optional(repeat_separated_by($.function_argument, ",")), ")"),
    function_argument: ($) =>
      choice(
        prec(
          1,
          seq(choice($.identifier, $.discard), "via", $.expression),
        ),
        seq(
          choice(
            $.identifier,
            $.discard,
            seq($.identifier, $.identifier),
            seq($.identifier, $.discard),
            $.type_definition,
            $.function_type,
            $.match_pattern,
            $.match_pattern_fields,
          ),
          optional(seq(":", choice($.expression, $._type_annotation))),
        ),
      ),

    function_type: ($) =>
      prec(1, seq("fn", $.function_arguments, "->", $._type_annotation)),

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
          ),
          optional(seq("as", $.identifier)),
        ),
      ),

    // Expression that also allows match_pattern_fields — used in delimited contexts
    // (blocks, lists, tuples, call args, assignment RHS) where { can't be confused with a block start.
    _expression_or_fields: ($) =>
      choice($.match_pattern_fields, $.expression),

    error_term: ($) =>
      prec.right(seq(choice("fail", "error"), optional($.expression))),
    tuple: ($) =>
      seq(
        "(",
        repeat_separated_by(
          choice($.type_definition, $._expression_or_fields),
          ",",
        ),
        ")",
      ),
    pair: ($) =>
      seq(
        "Pair",
        choice("(", "<"),
        $.expression,
        ",",
        $.expression,
        choice(")", ">"),
      ),

    if: ($) =>
      seq(
        "if",
        choice($.soft_cast, $.expression),
        block(repeat($._expression_or_fields)),
        optional(
          seq("else", choice($.if, block(repeat($._expression_or_fields)))),
        ),
      ),
    // Soft-Casting: if expr is Pattern { ... } else { ... }
    soft_cast: ($) =>
      seq(
        $.expression,
        "is",
        choice($.match_pattern, $.type_definition),
        optional(seq(":", $.type_definition)),
      ),
    when: ($) =>
      seq(
        "when",
        $.expression,
        "is",
        block(repeat1(choice($.when_case, $.any_comment))),
      ),
    when_case: ($) =>
      prec.right(
        seq(
          choice($._expression_or_fields, $.discard),
          repeat(
            seq("|", choice($._expression_or_fields, $.discard)),
          ),
          "->",
          choice(
            $._expression_or_fields,
            block(repeat($._expression_or_fields)),
          ),
        ),
      ),

    logical_op_chain: ($) => choice($.and_chain, $.or_chain),
    and_chain: ($) =>
      seq("and", block(repeat_separated_by($._expression_or_fields, ","))),
    or_chain: ($) =>
      seq("or", block(repeat_separated_by($._expression_or_fields, ","))),

    todo: ($) => prec.right(seq("todo", optional($.expression))),

    unary_op: ($) => prec.right(seq($.unary_operator, $.expression)),
    unary_operator: (_$) => choice("!", "-"),
    bin_op: ($) =>
      prec.left(1, seq($.expression, $.binary_operator, $.expression)),
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
          "||",
        ),
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
            $.match_pattern_fields,
            $.list,
            $.tuple,
            $.pair,
          ),
          "<-",
          $._expression_or_fields,
        ),
      ),

    let_assignment: ($) =>
      prec.right(
        seq(
          "let",
          choice(
            repeat_separated_by(choice($.identifier, $.discard), ","),
            $.match_pattern,
            $.match_pattern_fields,
            $.list,
            $.tuple,
            $.pair,
          ),
          optional(seq("as", $.identifier)),
          optional(seq(":", $.type_definition)),
          "=",
          $._expression_or_fields,
        ),
      ),
    expect_assignment: ($) =>
      prec.right(
        seq(
          "expect",
          choice(
            repeat_separated_by(choice($.identifier, $.discard), ","),
            $.match_pattern,
            $.match_pattern_fields,
            $.list,
            $.tuple,
            $.pair,
          ),
          optional(seq("as", $.identifier)),
          optional(seq(":", $.type_definition)),
          "=",
          $._expression_or_fields,
        ),
      ),
    field_capture_element: ($) =>
      choice($.identifier, seq($.identifier, ":", $._expression_or_fields)),

    // Patterns for case and expect
    match_pattern: ($) =>
      prec.right(
        seq(
          $.type_identifier,
          optional(
            seq(
              "(",
              repeat_separated_by(
                choice($.match_pattern_argument, ".."),
                ",",
              ),
              ")",
            ),
          ),
        ),
      ),
    match_pattern_fields: ($) =>
      prec.right(
        seq(
          $.type_identifier,
          "{",
          optional(
            repeat_separated_by(
              choice(
                seq("..", optional($.expression)),
                $.field_capture_element,
              ),
              ",",
            ),
          ),
          "}",
        ),
      ),
    match_pattern_argument: ($) => choice($.expression, $.discard),

    list: ($) =>
      choice(
        "[]",
        seq(
          "[",
          repeat_separated_by(
            choice($._expression_or_fields, $.discard),
            ",",
          ),
          "]",
        ),
        seq(
          "[",
          repeat_separated_by(
            choice($._expression_or_fields, $.discard),
            ",",
          ),
          "..",
          optional(choice($.expression, $.discard)),
          "]",
        ),
      ),

    call: ($) => seq(choice($.identifier, $.field_access), $.call_arguments),
    call_arguments: ($) =>
      seq("(", optional(repeat_separated_by($.call_argument, ",")), ")"),
    call_argument: ($) =>
      choice(
        $._expression_or_fields,
        block(repeat($._expression_or_fields)),
        seq($.identifier, ":", $._expression_or_fields),
      ),
    field_access: ($) =>
      seq(choice($.identifier, $.call), repeat1(seq(".", $.field_identifier))),
    pipeline: ($) => prec.left(seq($.expression, "|>", $.expression)),

    // Constants
    constant: ($) =>
      seq(
        optional("pub"),
        "const",
        $.identifier,
        optional(seq(":", choice($.type_definition, $.tuple, $.pair, $.list))),
        "=",
        $.constant_value,
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
        $.pair,
        $.match_pattern,
        $.match_pattern_fields,
        $.identifier,
      ),

    // Trace: trace expr, trace label: arg1, arg2, ...
    trace: ($) =>
      prec.right(
        seq(
          "trace",
          $.expression,
          optional(seq(":", repeat_separated_by($.expression, ","))),
        ),
      ),
    trace_if_false: ($) => seq($.expression, "?"),

    base10: (_$) => token(/[0-9]+/),
    base10_underscore: (_$) => token(/[0-9]+(_[0-9]+)+/),
    base16: (_$) => token(/0x[0-9a-fA-F]+/),
    base2: (_$) => token(/0b[01]+/),
    base8: (_$) => token(/0o[0-7]+/),
    int: ($) =>
      choice($.base10_underscore, $.base16, $.base2, $.base8, $.base10),

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
  separator,
) {
  return seq(rule, repeat(seq(separator, rule)), optional(separator));
}

function block(rule, start_sep = "{", end_sep = "}") {
  return seq(start_sep, rule, end_sep);
}
