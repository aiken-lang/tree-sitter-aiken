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
      if (eof) ADVANCE(5);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'u') ADVANCE(3);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 's') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(20);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_module_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_statement_comment);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_statement_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__discard_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__upname);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
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
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
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
    [sym_source_file] = STATE(35),
    [sym__definition] = STATE(7),
    [sym_import] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(5),
    [sym_module_comment] = ACTIONS(7),
    [sym_statement_comment] = ACTIONS(9),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    STATE(4), 1,
      aux_sym_module_repeat1,
    ACTIONS(15), 2,
      sym_statement_comment,
      sym_comment,
    ACTIONS(11), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
      sym_module_comment,
  [18] = 4,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    STATE(3), 1,
      aux_sym_module_repeat1,
    ACTIONS(22), 2,
      sym_statement_comment,
      sym_comment,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
      sym_module_comment,
  [36] = 4,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    STATE(3), 1,
      aux_sym_module_repeat1,
    ACTIONS(26), 2,
      sym_statement_comment,
      sym_comment,
    ACTIONS(24), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
      sym_module_comment,
  [54] = 2,
    ACTIONS(22), 3,
      anon_sym_SLASH,
      sym_statement_comment,
      sym_comment,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
      sym_module_comment,
  [67] = 2,
    ACTIONS(30), 2,
      sym_statement_comment,
      sym_comment,
    ACTIONS(28), 6,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_module_comment,
  [80] = 5,
    ACTIONS(5), 1,
      anon_sym_use,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      sym_module_comment,
    ACTIONS(36), 2,
      sym_statement_comment,
      sym_comment,
    STATE(8), 3,
      sym__definition,
      sym_import,
      aux_sym_source_file_repeat1,
  [99] = 5,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_use,
    ACTIONS(43), 1,
      sym_module_comment,
    ACTIONS(46), 2,
      sym_statement_comment,
      sym_comment,
    STATE(8), 3,
      sym__definition,
      sym_import,
      aux_sym_source_file_repeat1,
  [118] = 4,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_as,
    ACTIONS(55), 2,
      sym_statement_comment,
      sym_comment,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      sym_module_comment,
  [134] = 2,
    ACTIONS(59), 2,
      sym_statement_comment,
      sym_comment,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      sym_module_comment,
  [145] = 6,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      sym__name,
    ACTIONS(65), 1,
      sym__upname,
    STATE(23), 1,
      sym_identifier,
    STATE(24), 1,
      sym_type_identifier,
    STATE(32), 1,
      sym_unqualified_import,
  [164] = 2,
    ACTIONS(69), 2,
      sym_statement_comment,
      sym_comment,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      sym_module_comment,
  [175] = 6,
    ACTIONS(63), 1,
      sym__name,
    ACTIONS(65), 1,
      sym__upname,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_identifier,
    STATE(24), 1,
      sym_type_identifier,
    STATE(32), 1,
      sym_unqualified_import,
  [194] = 6,
    ACTIONS(63), 1,
      sym__name,
    ACTIONS(65), 1,
      sym__upname,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_unqualified_import,
    STATE(23), 1,
      sym_identifier,
    STATE(24), 1,
      sym_type_identifier,
  [213] = 3,
    ACTIONS(77), 1,
      anon_sym_as,
    ACTIONS(79), 2,
      sym_statement_comment,
      sym_comment,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      sym_module_comment,
  [226] = 2,
    ACTIONS(83), 2,
      sym_statement_comment,
      sym_comment,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      sym_module_comment,
  [237] = 2,
    ACTIONS(87), 2,
      sym_statement_comment,
      sym_comment,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      sym_module_comment,
  [248] = 2,
    ACTIONS(91), 2,
      sym_statement_comment,
      sym_comment,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      sym_module_comment,
  [258] = 2,
    ACTIONS(95), 2,
      sym_statement_comment,
      sym_comment,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      sym_module_comment,
  [268] = 5,
    ACTIONS(63), 1,
      sym__name,
    ACTIONS(65), 1,
      sym__upname,
    STATE(23), 1,
      sym_identifier,
    STATE(24), 1,
      sym_type_identifier,
    STATE(32), 1,
      sym_unqualified_import,
  [284] = 1,
    ACTIONS(97), 3,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [290] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_unqualified_imports_repeat1,
  [300] = 2,
    ACTIONS(103), 1,
      anon_sym_as,
    ACTIONS(105), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [308] = 2,
    ACTIONS(107), 1,
      anon_sym_as,
    ACTIONS(105), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [316] = 3,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_unqualified_imports_repeat1,
  [326] = 3,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_unqualified_imports_repeat1,
  [336] = 2,
    ACTIONS(63), 1,
      sym__name,
    STATE(18), 1,
      sym_identifier,
  [343] = 2,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_unqualified_imports,
  [350] = 2,
    ACTIONS(63), 1,
      sym__name,
    STATE(33), 1,
      sym_identifier,
  [357] = 2,
    ACTIONS(65), 1,
      sym__upname,
    STATE(33), 1,
      sym_type_identifier,
  [364] = 2,
    ACTIONS(63), 1,
      sym__name,
    STATE(19), 1,
      sym_identifier,
  [371] = 1,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [376] = 1,
    ACTIONS(118), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [381] = 2,
    ACTIONS(120), 1,
      sym__name,
    STATE(9), 1,
      sym_module,
  [388] = 1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [392] = 1,
    ACTIONS(124), 1,
      sym__name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 67,
  [SMALL_STATE(7)] = 80,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 118,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 145,
  [SMALL_STATE(12)] = 164,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 194,
  [SMALL_STATE(15)] = 213,
  [SMALL_STATE(16)] = 226,
  [SMALL_STATE(17)] = 237,
  [SMALL_STATE(18)] = 248,
  [SMALL_STATE(19)] = 258,
  [SMALL_STATE(20)] = 268,
  [SMALL_STATE(21)] = 284,
  [SMALL_STATE(22)] = 290,
  [SMALL_STATE(23)] = 300,
  [SMALL_STATE(24)] = 308,
  [SMALL_STATE(25)] = 316,
  [SMALL_STATE(26)] = 326,
  [SMALL_STATE(27)] = 336,
  [SMALL_STATE(28)] = 343,
  [SMALL_STATE(29)] = 350,
  [SMALL_STATE(30)] = 357,
  [SMALL_STATE(31)] = 364,
  [SMALL_STATE(32)] = 371,
  [SMALL_STATE(33)] = 376,
  [SMALL_STATE(34)] = 381,
  [SMALL_STATE(35)] = 388,
  [SMALL_STATE(36)] = 392,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(36),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_imports, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 5),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_imports, 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 4, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_imports, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unqualified_imports, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, .production_id = 5),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 6, .production_id = 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 4, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_import, 1, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unqualified_imports_repeat1, 2), SHIFT_REPEAT(20),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unqualified_imports_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_import, 3, .production_id = 6),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
