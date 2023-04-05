#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum {
  anon_sym_use = 1,
  anon_sym_DOT = 2,
  anon_sym_as = 3,
  anon_sym_SLASH = 4,
  anon_sym_LBRACE = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACE = 7,
  anon_sym_LT = 8,
  anon_sym_GT = 9,
  anon_sym_COLON = 10,
  anon_sym_type = 11,
  sym_module_comment = 12,
  sym_statement_comment = 13,
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
  sym__declaration_statement = 24,
  sym__type = 25,
  sym_field_declaration_list = 26,
  sym_type_arguments = 27,
  sym_field_declaration = 28,
  sym_type_declaration = 29,
  sym_identifier = 30,
  sym_type_identifier = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_module_repeat1 = 33,
  aux_sym_unqualified_imports_repeat1 = 34,
  aux_sym_field_declaration_list_repeat1 = 35,
  aux_sym_type_arguments_repeat1 = 36,
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
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COLON] = ":",
  [anon_sym_type] = "type",
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
  [sym__declaration_statement] = "_declaration_statement",
  [sym__type] = "_type",
  [sym_field_declaration_list] = "field_declaration_list",
  [sym_type_arguments] = "type_arguments",
  [sym_field_declaration] = "field_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_identifier] = "identifier",
  [sym_type_identifier] = "type_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_unqualified_imports_repeat1] = "unqualified_imports_repeat1",
  [aux_sym_field_declaration_list_repeat1] = "field_declaration_list_repeat1",
  [aux_sym_type_arguments_repeat1] = "type_arguments_repeat1",
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
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_type] = anon_sym_type,
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
  [sym__declaration_statement] = sym__declaration_statement,
  [sym__type] = sym__type,
  [sym_field_declaration_list] = sym_field_declaration_list,
  [sym_type_arguments] = sym_type_arguments,
  [sym_field_declaration] = sym_field_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym_identifier] = sym_identifier,
  [sym_type_identifier] = sym_type_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_unqualified_imports_repeat1] = aux_sym_unqualified_imports_repeat1,
  [aux_sym_field_declaration_list_repeat1] = aux_sym_field_declaration_list_repeat1,
  [aux_sym_type_arguments_repeat1] = aux_sym_type_arguments_repeat1,
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
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
  [sym__declaration_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_field_declaration_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
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
  [aux_sym_field_declaration_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_body = 2,
  field_module = 3,
  field_name = 4,
  field_type_arguments = 5,
  field_unqualified = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_module] = "module",
  [field_name] = "name",
  [field_type_arguments] = "type_arguments",
  [field_unqualified] = "unqualified",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_module, 1},
  [1] =
    {field_body, 2},
    {field_name, 1},
  [3] =
    {field_module, 1},
    {field_unqualified, 3},
  [5] =
    {field_alias, 3},
    {field_module, 1},
  [7] =
    {field_name, 0},
  [8] =
    {field_alias, 5},
    {field_module, 1},
    {field_unqualified, 3},
  [11] =
    {field_alias, 2},
    {field_name, 0},
  [13] =
    {field_name, 0},
    {field_type_arguments, 3},
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == 'y') ADVANCE(5);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_module_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_statement_comment);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_statement_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__discard_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__name);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__upname);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
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
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
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
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [sym_module_comment] = ACTIONS(1),
    [sym_statement_comment] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__discard_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym__definition] = STATE(3),
    [sym_import] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym_type_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(5),
    [anon_sym_type] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(14), 1,
      anon_sym_type,
    STATE(2), 5,
      sym__definition,
      sym_import,
      sym__declaration_statement,
      sym_type_declaration,
      aux_sym_source_file_repeat1,
  [17] = 4,
    ACTIONS(5), 1,
      anon_sym_use,
    ACTIONS(7), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(2), 5,
      sym__definition,
      sym_import,
      sym__declaration_statement,
      sym_type_declaration,
      aux_sym_source_file_repeat1,
  [34] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    STATE(7), 1,
      aux_sym_module_repeat1,
    ACTIONS(19), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_type,
  [48] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    STATE(4), 1,
      aux_sym_module_repeat1,
    ACTIONS(23), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_type,
  [62] = 1,
    ACTIONS(25), 7,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_type,
  [72] = 3,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    STATE(7), 1,
      aux_sym_module_repeat1,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_type,
  [86] = 1,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_type,
  [95] = 1,
    ACTIONS(32), 6,
      anon_sym_as,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
  [104] = 6,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      sym__name,
    ACTIONS(38), 1,
      sym__upname,
    STATE(29), 1,
      sym_identifier,
    STATE(30), 1,
      sym_type_identifier,
    STATE(52), 1,
      sym_unqualified_import,
  [123] = 6,
    ACTIONS(36), 1,
      sym__name,
    ACTIONS(38), 1,
      sym__upname,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_identifier,
    STATE(30), 1,
      sym_type_identifier,
    STATE(52), 1,
      sym_unqualified_import,
  [142] = 6,
    ACTIONS(36), 1,
      sym__name,
    ACTIONS(38), 1,
      sym__upname,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_unqualified_import,
    STATE(29), 1,
      sym_identifier,
    STATE(30), 1,
      sym_type_identifier,
  [161] = 5,
    ACTIONS(36), 1,
      sym__name,
    ACTIONS(38), 1,
      sym__upname,
    STATE(29), 1,
      sym_identifier,
    STATE(30), 1,
      sym_type_identifier,
    STATE(52), 1,
      sym_unqualified_import,
  [177] = 3,
    ACTIONS(46), 1,
      anon_sym_DOT,
    ACTIONS(48), 1,
      anon_sym_as,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_type,
  [189] = 5,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      sym__name,
    STATE(34), 1,
      sym_field_declaration,
    STATE(65), 1,
      sym_identifier,
  [205] = 1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      anon_sym_type,
  [212] = 3,
    ACTIONS(58), 1,
      anon_sym_GT,
    ACTIONS(60), 1,
      sym__upname,
    STATE(60), 2,
      sym__type,
      sym_type_identifier,
  [223] = 4,
    ACTIONS(54), 1,
      sym__name,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_field_declaration,
    STATE(65), 1,
      sym_identifier,
  [236] = 3,
    ACTIONS(66), 1,
      anon_sym_LT,
    STATE(55), 1,
      sym_type_arguments,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [247] = 2,
    ACTIONS(70), 1,
      anon_sym_as,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_type,
  [256] = 1,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      anon_sym_type,
  [263] = 1,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      anon_sym_type,
  [270] = 1,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_as,
      anon_sym_type,
  [277] = 3,
    ACTIONS(60), 1,
      sym__upname,
    ACTIONS(78), 1,
      anon_sym_GT,
    STATE(60), 2,
      sym__type,
      sym_type_identifier,
  [288] = 4,
    ACTIONS(54), 1,
      sym__name,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_field_declaration,
    STATE(65), 1,
      sym_identifier,
  [301] = 3,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_field_declaration_list_repeat1,
  [311] = 3,
    ACTIONS(58), 1,
      anon_sym_GT,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_type_arguments_repeat1,
  [321] = 3,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_unqualified_imports_repeat1,
  [331] = 2,
    ACTIONS(90), 1,
      anon_sym_as,
    ACTIONS(92), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [339] = 2,
    ACTIONS(94), 1,
      anon_sym_as,
    ACTIONS(92), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [347] = 2,
    ACTIONS(60), 1,
      sym__upname,
    STATE(60), 2,
      sym__type,
      sym_type_identifier,
  [355] = 1,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_type,
  [361] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_GT,
    STATE(33), 1,
      aux_sym_type_arguments_repeat1,
  [371] = 3,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_field_declaration_list_repeat1,
  [381] = 2,
    ACTIONS(60), 1,
      sym__upname,
    STATE(19), 2,
      sym__type,
      sym_type_identifier,
  [389] = 1,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_type,
  [395] = 3,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_unqualified_imports_repeat1,
  [405] = 3,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_unqualified_imports_repeat1,
  [415] = 3,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_GT,
    STATE(27), 1,
      aux_sym_type_arguments_repeat1,
  [425] = 2,
    ACTIONS(60), 1,
      sym__upname,
    STATE(39), 2,
      sym__type,
      sym_type_identifier,
  [433] = 1,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_type,
  [439] = 1,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_type,
  [445] = 3,
    ACTIONS(54), 1,
      sym__name,
    STATE(54), 1,
      sym_field_declaration,
    STATE(65), 1,
      sym_identifier,
  [455] = 1,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_type,
  [461] = 3,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_field_declaration_list_repeat1,
  [471] = 1,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_type,
  [477] = 1,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_use,
      anon_sym_type,
  [483] = 2,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_field_declaration_list,
  [490] = 2,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_unqualified_imports,
  [497] = 2,
    ACTIONS(54), 1,
      sym__name,
    STATE(41), 1,
      sym_identifier,
  [504] = 1,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [509] = 1,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [514] = 2,
    ACTIONS(54), 1,
      sym__name,
    STATE(44), 1,
      sym_identifier,
  [521] = 1,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [526] = 1,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [531] = 2,
    ACTIONS(60), 1,
      sym__upname,
    STATE(51), 1,
      sym_type_identifier,
  [538] = 1,
    ACTIONS(143), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [543] = 2,
    ACTIONS(54), 1,
      sym__name,
    STATE(51), 1,
      sym_identifier,
  [550] = 1,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [555] = 1,
    ACTIONS(101), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [560] = 2,
    ACTIONS(60), 1,
      sym__upname,
    STATE(48), 1,
      sym_type_identifier,
  [567] = 1,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [572] = 2,
    ACTIONS(149), 1,
      sym__name,
    STATE(14), 1,
      sym_module,
  [579] = 1,
    ACTIONS(151), 1,
      sym__name,
  [583] = 1,
    ACTIONS(153), 1,
      anon_sym_COLON,
  [587] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [591] = 1,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 72,
  [SMALL_STATE(8)] = 86,
  [SMALL_STATE(9)] = 95,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 142,
  [SMALL_STATE(13)] = 161,
  [SMALL_STATE(14)] = 177,
  [SMALL_STATE(15)] = 189,
  [SMALL_STATE(16)] = 205,
  [SMALL_STATE(17)] = 212,
  [SMALL_STATE(18)] = 223,
  [SMALL_STATE(19)] = 236,
  [SMALL_STATE(20)] = 247,
  [SMALL_STATE(21)] = 256,
  [SMALL_STATE(22)] = 263,
  [SMALL_STATE(23)] = 270,
  [SMALL_STATE(24)] = 277,
  [SMALL_STATE(25)] = 288,
  [SMALL_STATE(26)] = 301,
  [SMALL_STATE(27)] = 311,
  [SMALL_STATE(28)] = 321,
  [SMALL_STATE(29)] = 331,
  [SMALL_STATE(30)] = 339,
  [SMALL_STATE(31)] = 347,
  [SMALL_STATE(32)] = 355,
  [SMALL_STATE(33)] = 361,
  [SMALL_STATE(34)] = 371,
  [SMALL_STATE(35)] = 381,
  [SMALL_STATE(36)] = 389,
  [SMALL_STATE(37)] = 395,
  [SMALL_STATE(38)] = 405,
  [SMALL_STATE(39)] = 415,
  [SMALL_STATE(40)] = 425,
  [SMALL_STATE(41)] = 433,
  [SMALL_STATE(42)] = 439,
  [SMALL_STATE(43)] = 445,
  [SMALL_STATE(44)] = 455,
  [SMALL_STATE(45)] = 461,
  [SMALL_STATE(46)] = 471,
  [SMALL_STATE(47)] = 477,
  [SMALL_STATE(48)] = 483,
  [SMALL_STATE(49)] = 490,
  [SMALL_STATE(50)] = 497,
  [SMALL_STATE(51)] = 504,
  [SMALL_STATE(52)] = 509,
  [SMALL_STATE(53)] = 514,
  [SMALL_STATE(54)] = 521,
  [SMALL_STATE(55)] = 526,
  [SMALL_STATE(56)] = 531,
  [SMALL_STATE(57)] = 538,
  [SMALL_STATE(58)] = 543,
  [SMALL_STATE(59)] = 550,
  [SMALL_STATE(60)] = 555,
  [SMALL_STATE(61)] = 560,
  [SMALL_STATE(62)] = 567,
  [SMALL_STATE(63)] = 572,
  [SMALL_STATE(64)] = 579,
  [SMALL_STATE(65)] = 583,
  [SMALL_STATE(66)] = 587,
  [SMALL_STATE(67)] = 591,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(64),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_import, 1, .production_id = 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(31),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unqualified_imports_repeat1, 2), SHIFT_REPEAT(13),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unqualified_imports_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, .production_id = 6),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 4),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(43),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_import, 3, .production_id = 7),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, .production_id = 8),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
