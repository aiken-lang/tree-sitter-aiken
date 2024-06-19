/** @type {import('tree-sitter-cli/dsl')}  */

module.exports = grammar({
  name: "aiken",
  rules: {
    source_file: ($) =>
      repeat(
        choice($._definition, $.module_comment, $.definition_comment, $.comment)
      ),
    extras: ($) => choice($.type_struct_inner),
    _definition: ($) =>
      choice($.import, $.type_alias, $.type_struct, $.type_enum, $.constant),

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
    type_alias: ($) => seq("type", $.type_definition, "=", $.type_definition),

    // Handle enum type definitions
    type_enum: ($) =>
      seq("type", $.type_definition, block(repeat1($.type_enum_variant))),
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
    type_struct: ($) => seq("type", $.type_struct_inner),
    type_struct_inner: ($) =>
      seq($.type_definition, block($.type_struct_fields)),
    type_struct_fields: ($) => repeat1($.type_struct_field),
    type_struct_field: ($) => seq($.identifier, ":", $.type_argument),

    type_definition: ($) =>
      seq(
        $.type_identifier,
        optional(seq("<", repeat_separated_by($.type_argument, ","), ">"))
      ),
    type_argument: ($) =>
      field("type_argument", choice($.identifier, $.type_definition)),

    // Constants
    constant: ($) =>
      seq(
        "const",
        $.identifier,
        optional(seq(":", $.type_definition)),
        "=",
        $.constant_value
      ),
    constant_value: ($) =>
      choice(
        $.int,
        $.string,
        $.bytes
        // $.curvepoint - Should this be here?
      ),

    base10: (_$) => token(/[0-9]+/),
    base10_underscore: (_$) => token(/[0-9]+(_[0-9]+)+/),
    base16: (_$) => token(/0x[0-9a-fA-F]+/),
    int: ($) => choice($.base10, $.base10_underscore, $.base16),

    string: ($) => seq("@", $.string_inner),
    bytes: ($) => seq(optional("#"), $.string_inner),
    string_inner: ($) => seq('"', repeat(choice(/[^\\"]/, $.escape)), '"'),
    escape: ($) => token(/\\./),

    //  Comments
    module_comment: (_$) => token(seq("////", /.*/)),
    definition_comment: (_$) => token(seq("///", /.*/)),
    comment: (_$) => token(seq("//", /.*/)),

    // convenient
    identifier: ($) => $._name,
    label: ($) => $._name,
    discard: ($) => $._discard_name,
    type_identifier: ($) => $._upname,

    _discard_name: (_$) => /_[_0-9a-z]*/,
    _name: (_$) => /[_a-z][_0-9a-z]*/,
    _upname: (_$) => /[A-Z][0-9a-zA-Z]*/,
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
