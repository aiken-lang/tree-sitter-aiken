/** @type {import('tree-sitter-cli/dsl')}  */

module.exports = grammar({
  name: "aiken",
  rules: {
    source_file: ($) => repeat(choice(
      $._definition,
      $.module_comment,
      $.definition_comment,
      $.comment,
      $.alias
    )),
    _definition: ($) => choice($.import),

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

    alias: ($) =>
      seq("alias", $.type_definition, "=", $.type_definition),

    type_definition: ($) =>
      seq($.type_identifier, optional(seq("<", repeat_separated_by($.type_argument, ","), ">"))),
    type_argument: ($) => field("type_argument", choice($.identifier, $.type_definition)),

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
