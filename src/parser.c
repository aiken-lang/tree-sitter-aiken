#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_use = 1,
  anon_sym_DOT = 2,
  anon_sym_as = 3,
  anon_sym_SLASH = 4,
  anon_sym_LBRACE = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACE = 7,
  sym_module_comment = 8,
  sym_statement_comment = 9,
  sym_comment = 10,
  sym__discard_name = 11,
  sym__name = 12,
  sym__upname = 13,
  sym_source_file = 14,
  sym__definition = 15,
  sym_import = 16,
  sym_module = 17,
  sym_unqualified_imports = 18,
  sym_unqualified_import = 19,
  sym_identifier = 20,
  sym_type_identifier = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_module_repeat1 = 23,
  aux_sym_unqualified_imports_repeat1 = 24,
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
  [sym_module_comment] = "module_comment",
  [sym_statement_comment] = "statement_comment",
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
  [sym_identifier] = "identifier",
  [sym_type_identifier] = "type_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_unqualified_imports_repeat1] = "unqualified_imports_repeat1",
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
  [sym_module_comment] = sym_module_comment,
  [sym_statement_comment] = sym_statement_comment,
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
  [sym_identifier] = sym_identifier,
  [sym_type_identifier] = sym_type_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_unqualified_imports_repeat1] = aux_sym_unqualified_imports_repeat1,
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
  [sym_module_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_comment] = {
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
};

enum {
  field_alias = 1,
  field_module = 2,
  field_name = 3,
  field_unqualified = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_module] = "module",
  [field_name] = "name",
  [field_unqualified] = "unqualified",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 2},
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
    {field_name, 0},
  [6] =
    {field_alias, 5},
    {field_module, 1},
    {field_unqualified, 3},
  [9] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'u') ADVANCE(3);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 's') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'u') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_module_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_statement_comment);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_statement_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__discard_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__upname);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
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
    [sym_module_comment] = ACTIONS(1),
    [sym_statement_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__discard_name] = ACTIONS(1),
    [sym__upname] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym__definition] = STATE(9),
    [sym_import] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      sym__name,
    ACTIONS(11), 1,
      sym__upname,
    STATE(20), 1,
      sym_unqualified_import,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_type_identifier,
  [19] = 6,
    ACTIONS(9), 1,
      sym__name,
    ACTIONS(11), 1,
      sym__upname,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_type_identifier,
    STATE(31), 1,
      sym_unqualified_import,
  [38] = 3,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    STATE(6), 1,
      aux_sym_module_repeat1,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
  [51] = 6,
    ACTIONS(9), 1,
      sym__name,
    ACTIONS(11), 1,
      sym__upname,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_type_identifier,
    STATE(31), 1,
      sym_unqualified_import,
  [70] = 3,
    ACTIONS(17), 1,
      anon_sym_SLASH,
    STATE(7), 1,
      aux_sym_module_repeat1,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
  [83] = 3,
    ACTIONS(25), 1,
      anon_sym_SLASH,
    STATE(7), 1,
      aux_sym_module_repeat1,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
  [96] = 5,
    ACTIONS(9), 1,
      sym__name,
    ACTIONS(11), 1,
      sym__upname,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_type_identifier,
    STATE(31), 1,
      sym_unqualified_import,
  [112] = 3,
    ACTIONS(5), 1,
      anon_sym_use,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(10), 3,
      sym__definition,
      sym_import,
      aux_sym_source_file_repeat1,
  [124] = 3,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_use,
    STATE(10), 3,
      sym__definition,
      sym_import,
      aux_sym_source_file_repeat1,
  [136] = 1,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [144] = 1,
    ACTIONS(23), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_SLASH,
  [152] = 3,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(41), 1,
      anon_sym_as,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_use,
  [163] = 1,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
  [169] = 1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
  [175] = 1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
  [181] = 2,
    ACTIONS(51), 1,
      anon_sym_as,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_use,
  [189] = 3,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_unqualified_imports_repeat1,
  [199] = 1,
    ACTIONS(58), 3,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [205] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_unqualified_imports_repeat1,
  [215] = 2,
    ACTIONS(64), 1,
      anon_sym_as,
    ACTIONS(66), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [223] = 2,
    ACTIONS(68), 1,
      anon_sym_as,
    ACTIONS(66), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [231] = 1,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
  [237] = 3,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_unqualified_imports_repeat1,
  [247] = 2,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_unqualified_imports,
  [254] = 2,
    ACTIONS(76), 1,
      sym__name,
    STATE(13), 1,
      sym_module,
  [261] = 2,
    ACTIONS(9), 1,
      sym__name,
    STATE(33), 1,
      sym_identifier,
  [268] = 2,
    ACTIONS(11), 1,
      sym__upname,
    STATE(33), 1,
      sym_type_identifier,
  [275] = 1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_use,
  [280] = 2,
    ACTIONS(9), 1,
      sym__name,
    STATE(29), 1,
      sym_identifier,
  [287] = 1,
    ACTIONS(56), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [292] = 1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_use,
  [297] = 1,
    ACTIONS(82), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [302] = 2,
    ACTIONS(9), 1,
      sym__name,
    STATE(32), 1,
      sym_identifier,
  [309] = 1,
    ACTIONS(84), 1,
      sym__name,
  [313] = 1,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 112,
  [SMALL_STATE(10)] = 124,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 144,
  [SMALL_STATE(13)] = 152,
  [SMALL_STATE(14)] = 163,
  [SMALL_STATE(15)] = 169,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 181,
  [SMALL_STATE(18)] = 189,
  [SMALL_STATE(19)] = 199,
  [SMALL_STATE(20)] = 205,
  [SMALL_STATE(21)] = 215,
  [SMALL_STATE(22)] = 223,
  [SMALL_STATE(23)] = 231,
  [SMALL_STATE(24)] = 237,
  [SMALL_STATE(25)] = 247,
  [SMALL_STATE(26)] = 254,
  [SMALL_STATE(27)] = 261,
  [SMALL_STATE(28)] = 268,
  [SMALL_STATE(29)] = 275,
  [SMALL_STATE(30)] = 280,
  [SMALL_STATE(31)] = 287,
  [SMALL_STATE(32)] = 292,
  [SMALL_STATE(33)] = 297,
  [SMALL_STATE(34)] = 302,
  [SMALL_STATE(35)] = 309,
  [SMALL_STATE(36)] = 313,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(35),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unqualified_imports_repeat1, 2), SHIFT_REPEAT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unqualified_imports_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_import, 1, .production_id = 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, .production_id = 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_import, 3, .production_id = 6),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [86] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
