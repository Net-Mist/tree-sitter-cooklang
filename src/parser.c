#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 1
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

enum {
  aux_sym_metadata_key_token1 = 1,
  aux_sym_metadata_value_token1 = 2,
  anon_sym_GT_GT = 3,
  anon_sym_COLON = 4,
  anon_sym_LF = 5,
  aux_sym__empty_line_token1 = 6,
  anon_sym_AT = 7,
  anon_sym_POUND = 8,
  anon_sym_TILDE = 9,
  anon_sym_LBRACE = 10,
  anon_sym_PERCENT = 11,
  anon_sym_RBRACE = 12,
  sym_quantity = 13,
  sym_unit = 14,
  sym__word = 15,
  sym_comment_block = 16,
  sym_comment_line = 17,
  sym_recipe = 18,
  sym_metadata_key = 19,
  sym_metadata_value = 20,
  sym_metadata = 21,
  sym__empty_line = 22,
  sym_step = 23,
  sym_ingredient = 24,
  sym_cookware = 25,
  sym_timer = 26,
  sym__amount = 27,
  sym__component = 28,
  sym_text = 29,
  aux_sym_recipe_repeat1 = 30,
  aux_sym_metadata_key_repeat1 = 31,
  aux_sym_metadata_value_repeat1 = 32,
  aux_sym_step_repeat1 = 33,
  aux_sym_text_repeat1 = 34,
  alias_sym_name = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_metadata_key_token1] = "metadata_key_token1",
  [aux_sym_metadata_value_token1] = "metadata_value_token1",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_COLON] = ":",
  [anon_sym_LF] = "\n",
  [aux_sym__empty_line_token1] = "_empty_line_token1",
  [anon_sym_AT] = "@",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [anon_sym_LBRACE] = "{",
  [anon_sym_PERCENT] = "%",
  [anon_sym_RBRACE] = "}",
  [sym_quantity] = "quantity",
  [sym_unit] = "unit",
  [sym__word] = "_word",
  [sym_comment_block] = "comment_block",
  [sym_comment_line] = "comment_line",
  [sym_recipe] = "recipe",
  [sym_metadata_key] = "metadata_key",
  [sym_metadata_value] = "metadata_value",
  [sym_metadata] = "metadata",
  [sym__empty_line] = "_empty_line",
  [sym_step] = "step",
  [sym_ingredient] = "ingredient",
  [sym_cookware] = "cookware",
  [sym_timer] = "timer",
  [sym__amount] = "_amount",
  [sym__component] = "_component",
  [sym_text] = "text",
  [aux_sym_recipe_repeat1] = "recipe_repeat1",
  [aux_sym_metadata_key_repeat1] = "metadata_key_repeat1",
  [aux_sym_metadata_value_repeat1] = "metadata_value_repeat1",
  [aux_sym_step_repeat1] = "step_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [alias_sym_name] = "name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_metadata_key_token1] = aux_sym_metadata_key_token1,
  [aux_sym_metadata_value_token1] = aux_sym_metadata_value_token1,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym__empty_line_token1] = aux_sym__empty_line_token1,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_quantity] = sym_quantity,
  [sym_unit] = sym_unit,
  [sym__word] = sym__word,
  [sym_comment_block] = sym_comment_block,
  [sym_comment_line] = sym_comment_line,
  [sym_recipe] = sym_recipe,
  [sym_metadata_key] = sym_metadata_key,
  [sym_metadata_value] = sym_metadata_value,
  [sym_metadata] = sym_metadata,
  [sym__empty_line] = sym__empty_line,
  [sym_step] = sym_step,
  [sym_ingredient] = sym_ingredient,
  [sym_cookware] = sym_cookware,
  [sym_timer] = sym_timer,
  [sym__amount] = sym__amount,
  [sym__component] = sym__component,
  [sym_text] = sym_text,
  [aux_sym_recipe_repeat1] = aux_sym_recipe_repeat1,
  [aux_sym_metadata_key_repeat1] = aux_sym_metadata_key_repeat1,
  [aux_sym_metadata_value_repeat1] = aux_sym_metadata_value_repeat1,
  [aux_sym_step_repeat1] = aux_sym_step_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [alias_sym_name] = alias_sym_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_metadata_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__empty_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_block] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_line] = {
    .visible = true,
    .named = true,
  },
  [sym_recipe] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_key] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_value] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym__empty_line] = {
    .visible = false,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [sym_ingredient] = {
    .visible = true,
    .named = true,
  },
  [sym_cookware] = {
    .visible = true,
    .named = true,
  },
  [sym_timer] = {
    .visible = true,
    .named = true,
  },
  [sym__amount] = {
    .visible = false,
    .named = true,
  },
  [sym__component] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_recipe_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_step_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_key = 1,
  field_name = 2,
  field_quantity = 3,
  field_unit = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_quantity] = "quantity",
  [field_unit] = "unit",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 1},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1, .inherited = true},
    {field_quantity, 1, .inherited = true},
    {field_unit, 1, .inherited = true},
  [4] =
    {field_quantity, 1, .inherited = true},
    {field_unit, 1, .inherited = true},
  [6] =
    {field_name, 0},
    {field_quantity, 1, .inherited = true},
    {field_unit, 1, .inherited = true},
  [9] =
    {field_quantity, 1},
  [10] =
    {field_key, 1},
    {field_value, 3},
  [12] =
    {field_quantity, 1},
    {field_unit, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_name,
  },
  [4] = {
    [0] = alias_sym_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_text, 2,
    sym_text,
    alias_sym_name,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
};

static inline bool sym__word_character_set_1(int32_t c) {
  return (c < '@'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= ' ' || (c < '%'
        ? c == '#'
        : c <= '%')))
    : (c <= '@' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || (c >= '}' && c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '%') ADVANCE(39);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '~') ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(48);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(48);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(48);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == ']') ADVANCE(47);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '~') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '[') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(43);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '~') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(46);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_metadata_key_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_metadata_key_token1);
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_metadata_key_token1);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_metadata_key_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(22);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_metadata_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '-') ADVANCE(17);
      if (!sym__word_character_set_1(lookahead)) ADVANCE(46);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__empty_line_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '}') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '[') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '}') ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '>') ADVANCE(31);
      if (!sym__word_character_set_1(lookahead)) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '-') ADVANCE(17);
      if (!sym__word_character_set_1(lookahead)) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment_block);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym__empty_line_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(3),
  },
  [1] = {
    [sym_recipe] = STATE(31),
    [sym_metadata] = STATE(2),
    [sym__empty_line] = STATE(2),
    [sym_step] = STATE(2),
    [sym_ingredient] = STATE(5),
    [sym_cookware] = STATE(5),
    [sym_timer] = STATE(5),
    [sym_text] = STATE(5),
    [aux_sym_recipe_repeat1] = STATE(2),
    [aux_sym_step_repeat1] = STATE(5),
    [aux_sym_text_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_GT_GT] = ACTIONS(7),
    [aux_sym__empty_line_token1] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [sym__word] = ACTIONS(17),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(3),
  },
  [2] = {
    [sym_metadata] = STATE(3),
    [sym__empty_line] = STATE(3),
    [sym_step] = STATE(3),
    [sym_ingredient] = STATE(5),
    [sym_cookware] = STATE(5),
    [sym_timer] = STATE(5),
    [sym_text] = STATE(5),
    [aux_sym_recipe_repeat1] = STATE(3),
    [aux_sym_step_repeat1] = STATE(5),
    [aux_sym_text_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_GT_GT] = ACTIONS(7),
    [aux_sym__empty_line_token1] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_TILDE] = ACTIONS(15),
    [sym__word] = ACTIONS(17),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(3),
  },
  [3] = {
    [sym_metadata] = STATE(3),
    [sym__empty_line] = STATE(3),
    [sym_step] = STATE(3),
    [sym_ingredient] = STATE(5),
    [sym_cookware] = STATE(5),
    [sym_timer] = STATE(5),
    [sym_text] = STATE(5),
    [aux_sym_recipe_repeat1] = STATE(3),
    [aux_sym_step_repeat1] = STATE(5),
    [aux_sym_text_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(25),
    [aux_sym__empty_line_token1] = ACTIONS(28),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(34),
    [anon_sym_TILDE] = ACTIONS(37),
    [sym__word] = ACTIONS(40),
    [sym_comment_block] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(43), 1,
      aux_sym__empty_line_token1,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(48), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_TILDE,
    ACTIONS(54), 1,
      sym__word,
    STATE(9), 1,
      aux_sym_text_repeat1,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    STATE(4), 5,
      sym_ingredient,
      sym_cookware,
      sym_timer,
      sym_text,
      aux_sym_step_repeat1,
  [30] = 8,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_TILDE,
    ACTIONS(57), 1,
      aux_sym__empty_line_token1,
    ACTIONS(59), 1,
      sym__word,
    STATE(9), 1,
      aux_sym_text_repeat1,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    STATE(4), 5,
      sym_ingredient,
      sym_cookware,
      sym_timer,
      sym_text,
      aux_sym_step_repeat1,
  [60] = 3,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(63), 2,
      anon_sym_GT_GT,
      sym__word,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      aux_sym__empty_line_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [76] = 4,
    ACTIONS(67), 1,
      sym__word,
    STATE(7), 1,
      aux_sym_text_repeat1,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(65), 5,
      aux_sym__empty_line_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LBRACE,
  [94] = 3,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(72), 2,
      anon_sym_GT_GT,
      sym__word,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      aux_sym__empty_line_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [110] = 4,
    ACTIONS(76), 1,
      sym__word,
    STATE(7), 1,
      aux_sym_text_repeat1,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(74), 5,
      aux_sym__empty_line_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      anon_sym_LBRACE,
  [128] = 4,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      sym__word,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(78), 4,
      aux_sym__empty_line_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
  [145] = 7,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      sym__word,
    STATE(9), 1,
      aux_sym_text_repeat1,
    STATE(12), 1,
      sym__component,
    STATE(15), 1,
      sym__amount,
    STATE(28), 1,
      sym_text,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [168] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(89), 5,
      aux_sym__empty_line_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__word,
  [180] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(91), 5,
      aux_sym__empty_line_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__word,
  [192] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(93), 5,
      aux_sym__empty_line_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__word,
  [204] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(95), 5,
      aux_sym__empty_line_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__word,
  [216] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(97), 5,
      aux_sym__empty_line_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__word,
  [228] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(99), 5,
      aux_sym__empty_line_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__word,
  [240] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(101), 5,
      aux_sym__empty_line_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__word,
  [252] = 2,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
    ACTIONS(103), 5,
      aux_sym__empty_line_token1,
      anon_sym_AT,
      anon_sym_POUND,
      anon_sym_TILDE,
      sym__word,
  [264] = 5,
    ACTIONS(87), 1,
      sym__word,
    STATE(9), 1,
      aux_sym_text_repeat1,
    STATE(14), 1,
      sym__component,
    STATE(28), 1,
      sym_text,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [281] = 5,
    ACTIONS(87), 1,
      sym__word,
    STATE(9), 1,
      aux_sym_text_repeat1,
    STATE(19), 1,
      sym__component,
    STATE(28), 1,
      sym_text,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [298] = 4,
    ACTIONS(105), 1,
      aux_sym_metadata_value_token1,
    STATE(24), 1,
      aux_sym_metadata_value_repeat1,
    STATE(33), 1,
      sym_metadata_value,
    ACTIONS(107), 2,
      sym_comment_block,
      sym_comment_line,
  [312] = 4,
    ACTIONS(109), 1,
      aux_sym_metadata_key_token1,
    ACTIONS(112), 1,
      anon_sym_COLON,
    STATE(23), 1,
      aux_sym_metadata_key_repeat1,
    ACTIONS(107), 2,
      sym_comment_block,
      sym_comment_line,
  [326] = 4,
    ACTIONS(114), 1,
      aux_sym_metadata_value_token1,
    ACTIONS(116), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_metadata_value_repeat1,
    ACTIONS(107), 2,
      sym_comment_block,
      sym_comment_line,
  [340] = 4,
    ACTIONS(118), 1,
      aux_sym_metadata_key_token1,
    ACTIONS(120), 1,
      anon_sym_COLON,
    STATE(23), 1,
      aux_sym_metadata_key_repeat1,
    ACTIONS(107), 2,
      sym_comment_block,
      sym_comment_line,
  [354] = 4,
    ACTIONS(122), 1,
      aux_sym_metadata_key_token1,
    STATE(25), 1,
      aux_sym_metadata_key_repeat1,
    STATE(32), 1,
      sym_metadata_key,
    ACTIONS(107), 2,
      sym_comment_block,
      sym_comment_line,
  [368] = 4,
    ACTIONS(124), 1,
      aux_sym_metadata_value_token1,
    ACTIONS(127), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_metadata_value_repeat1,
    ACTIONS(107), 2,
      sym_comment_block,
      sym_comment_line,
  [382] = 3,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym__amount,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [393] = 3,
    ACTIONS(129), 1,
      anon_sym_PERCENT,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [404] = 3,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      sym_quantity,
    ACTIONS(107), 2,
      sym_comment_block,
      sym_comment_line,
  [415] = 2,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [423] = 2,
    ACTIONS(139), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [431] = 2,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
  [439] = 2,
    ACTIONS(143), 1,
      sym_unit,
    ACTIONS(107), 2,
      sym_comment_block,
      sym_comment_line,
  [447] = 2,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_comment_block,
      sym_comment_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 30,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 110,
  [SMALL_STATE(10)] = 128,
  [SMALL_STATE(11)] = 145,
  [SMALL_STATE(12)] = 168,
  [SMALL_STATE(13)] = 180,
  [SMALL_STATE(14)] = 192,
  [SMALL_STATE(15)] = 204,
  [SMALL_STATE(16)] = 216,
  [SMALL_STATE(17)] = 228,
  [SMALL_STATE(18)] = 240,
  [SMALL_STATE(19)] = 252,
  [SMALL_STATE(20)] = 264,
  [SMALL_STATE(21)] = 281,
  [SMALL_STATE(22)] = 298,
  [SMALL_STATE(23)] = 312,
  [SMALL_STATE(24)] = 326,
  [SMALL_STATE(25)] = 340,
  [SMALL_STATE(26)] = 354,
  [SMALL_STATE(27)] = 368,
  [SMALL_STATE(28)] = 382,
  [SMALL_STATE(29)] = 393,
  [SMALL_STATE(30)] = 404,
  [SMALL_STATE(31)] = 415,
  [SMALL_STATE(32)] = 423,
  [SMALL_STATE(33)] = 431,
  [SMALL_STATE(34)] = 439,
  [SMALL_STATE(35)] = 447,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(26),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(3),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(21),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(20),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(11),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(21),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(20),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(11),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_repeat1, 2), SHIFT_REPEAT(9),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 5, .production_id = 6),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 5, .production_id = 6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 1, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 1),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__component, 1, .production_id = 1), REDUCE(aux_sym_text_repeat1, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 2, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__amount, 5, .production_id = 7),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookware, 2, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 2, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__amount, 3, .production_id = 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__amount, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__component, 2, .production_id = 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ingredient, 2, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_key_repeat1, 2), SHIFT_REPEAT(23),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_key_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_value, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_key, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_value_repeat1, 2), SHIFT_REPEAT(27),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_value_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cooklang(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
