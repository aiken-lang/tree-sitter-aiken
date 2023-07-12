#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_use = 1,
  anon_sym_DOT = 2,
  anon_sym_as = 3,
  anon_sym_SLASH = 4,
  anon_sym_LBRACE = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACE = 7,
  anon_sym_alias = 8,
  anon_sym_EQ = 9,
  anon_sym_LT = 10,
  anon_sym_GT = 11,
  sym_module_comment = 12,
  sym_definition_comment = 13,
  sym_comment = 14,
  sym__discard_name = 15,
  sym__name = 16,
  sym__upname = 17,
  sym_source_file = 18,
  sym__definition = 19,
  sym_import = 20,
  sym_module = 21,
  sym_unqualified_imports = 22,
  sym_unqualified_import = 23,
  sym_alias = 24,
  sym_type_definition = 25,
  sym_type_argument = 26,
  sym_identifier = 27,
  sym_type_identifier = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_module_repeat1 = 30,
  aux_sym_unqualified_imports_repeat1 = 31,
  aux_sym_type_definition_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_use] = "use",
  [anon_sym_DOT] = ".",
  [anon_sym_as] = "as",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_alias] = "alias",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_module_comment] = "module_comment",
  [sym_definition_comment] = "definition_comment",
  [sym_comment] = "comment",
  [sym__discard_name] = "_discard_name",
  [sym__name] = "_name",
  [sym__upname] = "_upname",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_import] = "import",
  [sym_module] = "module",
  [sym_unqualified_imports] = "unqualified_imports",
  [sym_unqualified_import] = "unqualified_import",
  [sym_alias] = "alias",
  [sym_type_definition] = "type_definition",
  [sym_type_argument] = "type_argument",
  [sym_identifier] = "identifier",
  [sym_type_identifier] = "type_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_unqualified_imports_repeat1] = "unqualified_imports_repeat1",
  [aux_sym_type_definition_repeat1] = "type_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_module_comment] = sym_module_comment,
  [sym_definition_comment] = sym_definition_comment,
  [sym_comment] = sym_comment,
  [sym__discard_name] = sym__discard_name,
  [sym__name] = sym__name,
  [sym__upname] = sym__upname,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_import] = sym_import,
  [sym_module] = sym_module,
  [sym_unqualified_imports] = sym_unqualified_imports,
  [sym_unqualified_import] = sym_unqualified_import,
  [sym_alias] = sym_alias,
  [sym_type_definition] = sym_type_definition,
  [sym_type_argument] = sym_type_argument,
  [sym_identifier] = sym_identifier,
  [sym_type_identifier] = sym_type_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_unqualified_imports_repeat1] = aux_sym_unqualified_imports_repeat1,
  [aux_sym_type_definition_repeat1] = aux_sym_type_definition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_module_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_definition_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__discard_name] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym__upname] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_unqualified_imports] = {
    .visible = true,
    .named = true,
  },
  [sym_unqualified_import] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unqualified_imports_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_module = 2,
  field_name = 3,
  field_type_argument = 4,
  field_unqualified = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_module] = "module",
  [field_name] = "name",
  [field_type_argument] = "type_argument",
  [field_unqualified] = "unqualified",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_module, 1},
  [1] =
    {field_module, 1},
    {field_unqualified, 3},
  [3] =
    {field_alias, 3},
    {field_module, 1},
  [5] =
    {field_type_argument, 0},
  [6] =
    {field_name, 0},
  [7] =
    {field_alias, 5},
    {field_module, 1},
    {field_unqualified, 3},
  [10] =
    {field_alias, 2},
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_module_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_definition_comment);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_definition_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__discard_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__upname);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_module_comment] = ACTIONS(1),
    [sym_definition_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__discard_name] = ACTIONS(1),
    [sym__upname] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym__definition] = STATE(4),
    [sym_import] = STATE(4),
    [sym_alias] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(5),
    [anon_sym_alias] = ACTIONS(7),
    [sym_module_comment] = ACTIONS(9),
    [sym_definition_comment] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(15), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(13), 10,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      sym_module_comment,
  [17] = 3,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_COMMA,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_GT,
      sym_module_comment,
  [34] = 6,
    ACTIONS(5), 1,
      anon_sym_use,
    ACTIONS(7), 1,
      anon_sym_alias,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_module_comment,
    ACTIONS(27), 2,
      sym_definition_comment,
      sym_comment,
    STATE(7), 4,
      sym__definition,
      sym_import,
      sym_alias,
      aux_sym_source_file_repeat1,
  [57] = 4,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    STATE(8), 1,
      aux_sym_module_repeat1,
    ACTIONS(33), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_alias,
      sym_module_comment,
  [76] = 2,
    ACTIONS(37), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(35), 8,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_alias,
      anon_sym_GT,
      sym_module_comment,
  [91] = 6,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_use,
    ACTIONS(44), 1,
      anon_sym_alias,
    ACTIONS(47), 1,
      sym_module_comment,
    ACTIONS(50), 2,
      sym_definition_comment,
      sym_comment,
    STATE(7), 4,
      sym__definition,
      sym_import,
      sym_alias,
      aux_sym_source_file_repeat1,
  [114] = 4,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    STATE(9), 1,
      aux_sym_module_repeat1,
    ACTIONS(55), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_alias,
      sym_module_comment,
  [133] = 4,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    STATE(9), 1,
      aux_sym_module_repeat1,
    ACTIONS(62), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_alias,
      sym_module_comment,
  [152] = 2,
    ACTIONS(66), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_COMMA,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_GT,
      sym_module_comment,
  [166] = 2,
    ACTIONS(70), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(68), 7,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_COMMA,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_GT,
      sym_module_comment,
  [180] = 2,
    ACTIONS(74), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(72), 7,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_COMMA,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_GT,
      sym_module_comment,
  [194] = 2,
    ACTIONS(62), 3,
      anon_sym_SLASH,
      sym_definition_comment,
      sym_comment,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_alias,
      sym_module_comment,
  [208] = 4,
    ACTIONS(78), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      anon_sym_as,
    ACTIONS(82), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_alias,
      sym_module_comment,
  [225] = 2,
    ACTIONS(86), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      anon_sym_alias,
      sym_module_comment,
  [237] = 6,
    ACTIONS(88), 1,
      anon_sym_GT,
    ACTIONS(90), 1,
      sym__name,
    ACTIONS(92), 1,
      sym__upname,
    STATE(3), 1,
      sym_type_identifier,
    STATE(42), 1,
      sym_type_argument,
    STATE(48), 2,
      sym_type_definition,
      sym_identifier,
  [257] = 2,
    ACTIONS(96), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      anon_sym_alias,
      sym_module_comment,
  [269] = 6,
    ACTIONS(90), 1,
      sym__name,
    ACTIONS(92), 1,
      sym__upname,
    ACTIONS(98), 1,
      anon_sym_GT,
    STATE(3), 1,
      sym_type_identifier,
    STATE(42), 1,
      sym_type_argument,
    STATE(48), 2,
      sym_type_definition,
      sym_identifier,
  [289] = 2,
    ACTIONS(102), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      anon_sym_alias,
      sym_module_comment,
  [301] = 2,
    ACTIONS(106), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      anon_sym_alias,
      sym_module_comment,
  [313] = 3,
    ACTIONS(110), 1,
      anon_sym_as,
    ACTIONS(112), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_alias,
      sym_module_comment,
  [327] = 6,
    ACTIONS(90), 1,
      sym__name,
    ACTIONS(92), 1,
      sym__upname,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_unqualified_import,
    STATE(33), 1,
      sym_identifier,
    STATE(34), 1,
      sym_type_identifier,
  [346] = 2,
    ACTIONS(118), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_alias,
      sym_module_comment,
  [357] = 2,
    ACTIONS(122), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_alias,
      sym_module_comment,
  [368] = 6,
    ACTIONS(90), 1,
      sym__name,
    ACTIONS(92), 1,
      sym__upname,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_identifier,
    STATE(34), 1,
      sym_type_identifier,
    STATE(46), 1,
      sym_unqualified_import,
  [387] = 5,
    ACTIONS(90), 1,
      sym__name,
    ACTIONS(92), 1,
      sym__upname,
    STATE(3), 1,
      sym_type_identifier,
    STATE(31), 1,
      sym_type_argument,
    STATE(48), 2,
      sym_type_definition,
      sym_identifier,
  [404] = 6,
    ACTIONS(90), 1,
      sym__name,
    ACTIONS(92), 1,
      sym__upname,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_identifier,
    STATE(34), 1,
      sym_type_identifier,
    STATE(46), 1,
      sym_unqualified_import,
  [423] = 2,
    ACTIONS(130), 2,
      sym_definition_comment,
      sym_comment,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_alias,
      sym_module_comment,
  [434] = 5,
    ACTIONS(90), 1,
      sym__name,
    ACTIONS(92), 1,
      sym__upname,
    STATE(3), 1,
      sym_type_identifier,
    STATE(42), 1,
      sym_type_argument,
    STATE(48), 2,
      sym_type_definition,
      sym_identifier,
  [451] = 5,
    ACTIONS(90), 1,
      sym__name,
    ACTIONS(92), 1,
      sym__upname,
    STATE(33), 1,
      sym_identifier,
    STATE(34), 1,
      sym_type_identifier,
    STATE(46), 1,
      sym_unqualified_import,
  [467] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_GT,
    STATE(36), 1,
      aux_sym_type_definition_repeat1,
  [477] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_unqualified_imports_repeat1,
  [487] = 2,
    ACTIONS(140), 1,
      anon_sym_as,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [495] = 2,
    ACTIONS(144), 1,
      anon_sym_as,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [503] = 3,
    ACTIONS(92), 1,
      sym__upname,
    STATE(3), 1,
      sym_type_identifier,
    STATE(24), 1,
      sym_type_definition,
  [513] = 3,
    ACTIONS(98), 1,
      anon_sym_GT,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_type_definition_repeat1,
  [523] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_unqualified_imports_repeat1,
  [533] = 3,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_unqualified_imports_repeat1,
  [543] = 3,
    ACTIONS(92), 1,
      sym__upname,
    STATE(3), 1,
      sym_type_identifier,
    STATE(52), 1,
      sym_type_definition,
  [553] = 3,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_GT,
    STATE(40), 1,
      aux_sym_type_definition_repeat1,
  [563] = 2,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_unqualified_imports,
  [570] = 1,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [575] = 2,
    ACTIONS(92), 1,
      sym__upname,
    STATE(49), 1,
      sym_type_identifier,
  [582] = 2,
    ACTIONS(90), 1,
      sym__name,
    STATE(28), 1,
      sym_identifier,
  [589] = 2,
    ACTIONS(90), 1,
      sym__name,
    STATE(49), 1,
      sym_identifier,
  [596] = 1,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [601] = 2,
    ACTIONS(162), 1,
      sym__name,
    STATE(14), 1,
      sym_module,
  [608] = 1,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [613] = 1,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [618] = 2,
    ACTIONS(90), 1,
      sym__name,
    STATE(23), 1,
      sym_identifier,
  [625] = 1,
    ACTIONS(168), 1,
      sym__name,
  [629] = 1,
    ACTIONS(170), 1,
      anon_sym_EQ,
  [633] = 1,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 91,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 133,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 166,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 208,
  [SMALL_STATE(15)] = 225,
  [SMALL_STATE(16)] = 237,
  [SMALL_STATE(17)] = 257,
  [SMALL_STATE(18)] = 269,
  [SMALL_STATE(19)] = 289,
  [SMALL_STATE(20)] = 301,
  [SMALL_STATE(21)] = 313,
  [SMALL_STATE(22)] = 327,
  [SMALL_STATE(23)] = 346,
  [SMALL_STATE(24)] = 357,
  [SMALL_STATE(25)] = 368,
  [SMALL_STATE(26)] = 387,
  [SMALL_STATE(27)] = 404,
  [SMALL_STATE(28)] = 423,
  [SMALL_STATE(29)] = 434,
  [SMALL_STATE(30)] = 451,
  [SMALL_STATE(31)] = 467,
  [SMALL_STATE(32)] = 477,
  [SMALL_STATE(33)] = 487,
  [SMALL_STATE(34)] = 495,
  [SMALL_STATE(35)] = 503,
  [SMALL_STATE(36)] = 513,
  [SMALL_STATE(37)] = 523,
  [SMALL_STATE(38)] = 533,
  [SMALL_STATE(39)] = 543,
  [SMALL_STATE(40)] = 553,
  [SMALL_STATE(41)] = 563,
  [SMALL_STATE(42)] = 570,
  [SMALL_STATE(43)] = 575,
  [SMALL_STATE(44)] = 582,
  [SMALL_STATE(45)] = 589,
  [SMALL_STATE(46)] = 596,
  [SMALL_STATE(47)] = 601,
  [SMALL_STATE(48)] = 608,
  [SMALL_STATE(49)] = 613,
  [SMALL_STATE(50)] = 618,
  [SMALL_STATE(51)] = 625,
  [SMALL_STATE(52)] = 629,
  [SMALL_STATE(53)] = 633,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_identifier, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(51),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 6),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 6),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 5),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_definition, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 5),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_imports, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_imports, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_imports, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_imports, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 4, .production_id = 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 4, .production_id = 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, .production_id = 6),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 6, .production_id = 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_import, 1, .production_id = 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unqualified_imports_repeat1, 2), SHIFT_REPEAT(30),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unqualified_imports_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2), SHIFT_REPEAT(29),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_definition_repeat1, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_argument, 1, .production_id = 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_import, 3, .production_id = 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [172] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_aiken(void) {
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
