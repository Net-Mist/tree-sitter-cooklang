module.exports = grammar({
  name: "cooklang",

  extras: ($) => [$.comment_block, $.comment_line, " ", "\t"],

  conflicts: ($) => [[$._component, $.text]],

  rules: {
    recipe: ($) => repeat(choice($.metadata, $._empty_line, $.step)),

    metadata_key: ($) => repeat1(/[^:]/),
    metadata_value: ($) => repeat1(/[^\n]/),
    metadata: ($) =>
      seq(
        ">>",
        field("key", $.metadata_key),
        ":",
        field("value", $.metadata_value),
        "\n",
      ),

    _empty_line: ($) => /\n/,

    step: ($) =>
      seq(repeat1(choice($.ingredient, $.text, $.timer, $.cookware)), /\n/),
    ingredient: ($) => seq("@", $._component),
    cookware: ($) => seq("#", $._component),
    timer: ($) => seq("~", choice($._component, $._amount)),

    _amount: ($) =>
      seq(
        "{",
        optional(
          seq(
            field("quantity", $.quantity),
            optional(seq("%", field("unit", $.unit))),
          ),
        ),
        "}",
      ),
    _component: ($) =>
      choice(alias($._word, $.name), seq(alias($.text, $.name), $._amount)),
    quantity: ($) => /([^\n}%\[\-]|-[^-]|\[[^-])+/,
    unit: ($) => /([^\n}\[\-]|-[^\-]|\[[^-])+/,
    text: ($) => prec.right(repeat1($._word)),
    _word: ($) => /([^ \t\n@#%~\-\[\]\{\}]|-[^-])+/,

    // comments
    comment_block: ($) => token(seq("[-", /([^-]|-[^\]])*/, "-]")),
    comment_line: (_) => token(seq("--", /.*/)),
  },
});
