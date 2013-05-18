/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "parser/grammar.y"


#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include "parser/nodes.h"
#include "parser/syntax.h"
#include "parser/syntax_parser.h"
#include "function_nodes.h"

extern int curr_lineno;
int num_errors = 0;

extern syntax_parser* grammar_syntax_parser;

void yyerror(const char *s)
{
    extern int curr_lineno;

    std::cerr << "error in line " << curr_lineno << ": " 
              << s << std::endl;
}

extern "C"
{
        int yyparse(); 
        int yylex();  
        int yywrap()
        {
                return 1;
        }
}



/* Line 268 of yacc.c  */
#line 108 "parser/grammar-output"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TEMPLATE = 258,
     BLOCK = 262,
     TEMPLATES = 261,
     COMPOUND_BLOCK = 263,
     VAR_BLOCK = 264,
     COMPOUND_BITFIELD = 267,
     BITFIELD = 268,
     STR_BLOCK = 269,
     CHOICE_FIELD = 270,
     IDENTIFIER = 259,
     STR_CONST = 265,
     INT_CONST = 260
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 40 "parser/grammar.y"

    grammar::field_node* ast_field;
    grammar::filler_node* ast_filler;
    grammar::value_node* ast_value_node;
    grammar::script* ast_script;
    grammar::template_def_node* ast_template_def;
    std::vector<grammar::field_node*> *ast_fields;
    uint64_t int_val;
    std::string *symbol;
    const char *error_msg;



/* Line 293 of yacc.c  */
#line 172 "parser/grammar-output"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 197 "parser/grammar-output"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   215

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNRULES -- Number of states.  */
#define YYNSTATES  146

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   271

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      21,    22,    18,    15,    23,    16,     2,    17,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    14,
      12,    27,    13,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    19,     2,    20,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,    24,
      26,     5,     4,     6,     7,    25,     2,     8,     9,    10,
      11,     2
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    12,    15,    17,    23,    25,    28,
      30,    32,    34,    36,    38,    40,    43,    52,    59,    67,
      73,    78,    84,    95,   104,   114,   122,   128,   135,   141,
     148,   154,   161,   163,   166,   175,   182,   190,   196,   206,
     214,   220,   222,   224,   226,   231,   233,   235,   239,   243,
     247,   251,   255,   260
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      29,     0,    -1,     5,    19,    30,    20,    14,    32,    -1,
      32,    -1,    30,    31,    -1,    31,    -1,    24,    19,    32,
      20,    14,    -1,    33,    -1,    32,    33,    -1,    34,    -1,
      36,    -1,    35,    -1,    41,    -1,    37,    -1,    38,    -1,
       1,    14,    -1,     4,    12,    26,    13,    24,    27,    42,
      14,    -1,     4,    12,    26,    13,    24,    14,    -1,     4,
      12,    26,    13,    27,    42,    14,    -1,     4,    12,    26,
      13,    14,    -1,    10,    27,    25,    14,    -1,    10,    24,
      27,    25,    14,    -1,     7,    12,    26,    23,    26,    13,
      24,    27,    42,    14,    -1,     7,    12,    26,    23,    26,
      13,    24,    14,    -1,     7,    12,    26,    23,    26,    13,
      27,    42,    14,    -1,     7,    12,    26,    23,    26,    13,
      14,    -1,     6,    19,    32,    20,    14,    -1,     6,    24,
      19,    32,    20,    14,    -1,     8,    19,    39,    20,    14,
      -1,     8,    24,    19,    39,    20,    14,    -1,    11,    19,
      32,    20,    14,    -1,    11,    24,    19,    32,    20,    14,
      -1,    40,    -1,    39,    40,    -1,     9,    12,    26,    13,
      24,    27,    44,    14,    -1,     9,    12,    26,    13,    24,
      14,    -1,     9,    12,    26,    13,    27,    44,    14,    -1,
       9,    12,    26,    13,    14,    -1,     3,    12,    24,    23,
      26,    23,    26,    13,    14,    -1,     3,    12,    24,    23,
      26,    13,    14,    -1,     3,    12,    24,    13,    14,    -1,
      44,    -1,    43,    -1,    25,    -1,    24,    21,    24,    22,
      -1,    26,    -1,    24,    -1,    21,    44,    22,    -1,    45,
      15,    45,    -1,    45,    16,    45,    -1,    45,    17,    45,
      -1,    45,    18,    45,    -1,    24,    21,    24,    22,    -1,
      44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    84,    95,    99,   105,   112,   118,   125,
     127,   129,   131,   133,   135,   137,   141,   145,   149,   153,
     157,   164,   174,   178,   182,   186,   192,   196,   202,   206,
     212,   216,   223,   228,   234,   238,   242,   246,   252,   256,
     260,   266,   270,   274,   280,   290,   294,   298,   302,   306,
     310,   314,   320,   328
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TEMPLATE", "BLOCK", "TEMPLATES",
  "COMPOUND_BLOCK", "VAR_BLOCK", "COMPOUND_BITFIELD", "BITFIELD",
  "STR_BLOCK", "CHOICE_FIELD", "'<'", "'>'", "';'", "'+'", "'-'", "'/'",
  "'*'", "'{'", "'}'", "'('", "')'", "','", "IDENTIFIER", "STR_CONST",
  "INT_CONST", "'='", "$accept", "script", "templates", "template_def",
  "fields", "field", "block_field", "var_block", "compound_field",
  "compound_bitfield", "choice_field", "bitfields", "bitfield",
  "template_field", "filler", "filler_function", "expression",
  "expression_func", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   271,   258,   262,   261,   263,   264,   267,   268,
     269,   270,    60,    62,    59,    43,    45,    47,    42,   123,
     125,    40,    41,    44,   259,   265,   260,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    28,    29,    29,    30,    30,    31,    32,    32,    33,
      33,    33,    33,    33,    33,    33,    34,    34,    34,    34,
      34,    34,    35,    35,    35,    35,    36,    36,    37,    37,
      38,    38,    39,    39,    40,    40,    40,    40,    41,    41,
      41,    42,    42,    42,    43,    44,    44,    44,    44,    44,
      44,    44,    45,    45
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     1,     2,     1,     5,     1,     2,     1,
       1,     1,     1,     1,     1,     2,     8,     6,     7,     5,
       4,     5,    10,     8,     9,     7,     5,     6,     5,     6,
       5,     6,     1,     2,     8,     6,     7,     5,     9,     7,
       5,     1,     1,     1,     4,     1,     1,     3,     3,     3,
       3,     3,     4,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     9,    11,    10,    13,    14,    12,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     8,     0,     0,     0,     0,     5,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,    33,     0,     0,    20,     0,     0,    40,     0,    19,
       0,     0,     0,     0,    26,     0,     0,     0,    28,     0,
      21,    30,     0,     0,     0,    17,     0,     0,    46,    43,
      45,     0,    42,    53,     0,     0,     0,    27,     0,     0,
      29,    31,    39,     0,     0,    46,    53,     0,    18,     0,
       0,     0,     0,     6,    25,     0,     0,    37,     0,     0,
       0,    16,     0,    47,     0,    53,    48,    49,    50,    51,
      23,     0,     0,    35,     0,    53,    38,     0,    52,     0,
      24,    53,    36,    52,    22,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    10,    37,    38,    11,    12,    13,    14,    15,    16,
      17,    43,    44,    18,    91,    92,    93,    94
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -78
static const yytype_int16 yypact[] =
{
     145,     1,    -9,    12,    11,    28,    27,    40,    48,    63,
      58,   122,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
      44,    68,    74,   156,    82,    83,   103,   100,    93,    99,
     156,   102,   -78,   -78,    30,   118,   117,   -15,   -78,    59,
     156,   116,   131,    20,   -78,   103,   129,   133,    70,   156,
     147,   132,   -10,   156,   166,   -78,   167,    85,   158,   159,
     168,   -78,    29,   169,   -78,   172,    96,   -78,    31,   -78,
      -7,   144,   107,   156,   -78,   173,   175,   176,   -78,   177,
     -78,   -78,   178,   179,   164,   -78,   144,    24,   150,   -78,
     -78,   180,   -78,   181,   157,   182,   134,   -78,    -8,    -2,
     -78,   -78,   -78,   184,   185,   183,   186,   174,   -78,    24,
      24,    24,    24,   -78,   -78,    -1,   144,   -78,     9,    24,
     187,   -78,   188,   -78,   189,   -78,    66,    66,   -78,   -78,
     -78,   144,   191,   -78,    24,   192,   -78,   193,   195,   196,
     -78,   199,   -78,   -78,   -78,   -78
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -78,   -78,   -78,   163,   -22,   -11,   -78,   -78,   -78,   -78,
     -78,   162,   -41,   -78,   -75,   -78,   -77,    67
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -45
static const yytype_int16 yytable[] =
{
      33,    39,    61,    20,    69,    54,   114,    85,    48,    36,
     106,   104,   117,   130,    70,    19,   115,    71,    57,   116,
      86,    61,   118,   133,    21,   119,   131,    66,    33,    42,
      22,    72,   125,   125,   125,   125,   134,    33,    42,    25,
      60,   132,   135,    50,    83,    87,    33,    23,   105,    79,
      90,    96,    24,    51,    84,    33,   139,   141,    32,    26,
       1,    33,     2,     3,    27,     5,     6,     7,    34,     8,
       9,     1,    28,     2,     3,    29,     5,     6,     7,    56,
       8,     9,    30,   111,   112,    33,     1,    31,     2,     3,
      65,     5,     6,     7,    35,     8,     9,     1,    36,     2,
       3,    40,     5,     6,     7,    75,     8,     9,     1,    41,
       2,     3,    42,     5,     6,     7,    82,     8,     9,    45,
      46,    49,    -3,     1,    47,     2,     3,    95,     5,     6,
       7,    52,     8,     9,    -2,     1,    53,     2,     3,    58,
       5,     6,     7,    59,     8,     9,     1,    64,     2,     3,
       4,     5,     6,     7,    63,     8,     9,     1,    68,     2,
       3,    67,     5,     6,     7,    87,     8,     9,    88,    89,
      90,   107,   109,   110,   111,   112,   126,   127,   128,   129,
      73,    74,    78,    80,    76,    77,    81,    97,    98,    99,
     103,   100,   101,   102,   108,   -41,   113,   120,   124,   121,
      55,   136,     0,     0,   122,   140,   142,    62,   123,   -44,
     144,   138,   137,   145,     0,   143
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-78))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      11,    23,    43,    12,    14,    20,    14,    14,    30,    24,
      87,    86,    14,    14,    24,    14,    24,    27,    40,    27,
      27,    62,    24,    14,    12,    27,    27,    49,    39,     9,
      19,    53,   109,   110,   111,   112,    27,    48,     9,    12,
      20,   116,   119,    13,    13,    21,    57,    19,    24,    20,
      26,    73,    24,    23,    23,    66,   131,   134,     0,    19,
       1,    72,     3,     4,    24,     6,     7,     8,    24,    10,
      11,     1,    24,     3,     4,    27,     6,     7,     8,    20,
      10,    11,    19,    17,    18,    96,     1,    24,     3,     4,
      20,     6,     7,     8,    26,    10,    11,     1,    24,     3,
       4,    19,     6,     7,     8,    20,    10,    11,     1,    26,
       3,     4,     9,     6,     7,     8,    20,    10,    11,    19,
      27,    19,     0,     1,    25,     3,     4,    20,     6,     7,
       8,    13,    10,    11,     0,     1,    19,     3,     4,    23,
       6,     7,     8,    12,    10,    11,     1,    14,     3,     4,
       5,     6,     7,     8,    25,    10,    11,     1,    26,     3,
       4,    14,     6,     7,     8,    21,    10,    11,    24,    25,
      26,    21,    15,    16,    17,    18,   109,   110,   111,   112,
      14,    14,    14,    14,    26,    26,    14,    14,    13,    13,
      26,    14,    14,    14,    14,    14,    14,    13,    24,    14,
      37,    14,    -1,    -1,    21,    14,    14,    45,    22,    14,
      14,    22,    24,    14,    -1,    22
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,    10,    11,
      29,    32,    33,    34,    35,    36,    37,    38,    41,    14,
      12,    12,    19,    19,    24,    12,    19,    24,    24,    27,
      19,    24,     0,    33,    24,    26,    24,    30,    31,    32,
      19,    26,     9,    39,    40,    19,    27,    25,    32,    19,
      13,    23,    13,    19,    20,    31,    20,    32,    23,    12,
      20,    40,    39,    25,    14,    20,    32,    14,    26,    14,
      24,    27,    32,    14,    14,    20,    26,    26,    14,    20,
      14,    14,    20,    13,    23,    14,    27,    21,    24,    25,
      26,    42,    43,    44,    45,    20,    32,    14,    13,    13,
      14,    14,    14,    26,    42,    24,    44,    21,    14,    15,
      16,    17,    18,    14,    14,    24,    27,    14,    24,    27,
      13,    14,    21,    22,    24,    44,    45,    45,    45,    45,
      14,    27,    42,    14,    27,    44,    14,    24,    22,    42,
      14,    44,    14,    22,    14,    14
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 75 "parser/grammar.y"
    {
        if(num_errors == 0) {
            auto s = grammar_syntax_parser->make_script(); 
            for(auto &i : *(yyvsp[(6) - (6)].ast_fields)) 
                s->add_field_node(std::move(i)); 
            grammar_syntax_parser->set_script(s); 
        }
    }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 84 "parser/grammar.y"
    { 
        if(num_errors == 0) {
            auto s = grammar_syntax_parser->make_script(); 
            for(auto &i : *(yyvsp[(1) - (1)].ast_fields)) 
                s->add_field_node(std::move(i)); 
            grammar_syntax_parser->set_script(s);  
        }
    }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 95 "parser/grammar.y"
    {
        (yyval.ast_fields) = nullptr;
    }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 99 "parser/grammar.y"
    {
        (yyval.ast_fields) = nullptr;
    }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 105 "parser/grammar.y"
    {
        (yyval.ast_template_def) = grammar_syntax_parser->make_template_def_node((yyvsp[(3) - (5)].ast_fields));
        grammar_syntax_parser->add_template(*(yyvsp[(1) - (5)].symbol), (yyval.ast_template_def));
    }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 112 "parser/grammar.y"
    {
        (yyval.ast_fields) = grammar_syntax_parser->make_fields_list();
        if((yyvsp[(1) - (1)].ast_field))
            (yyval.ast_fields)->push_back((yyvsp[(1) - (1)].ast_field));
    }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 118 "parser/grammar.y"
    {
        if((yyvsp[(2) - (2)].ast_field))
            (yyvsp[(1) - (2)].ast_fields)->push_back((yyvsp[(2) - (2)].ast_field));
    }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 125 "parser/grammar.y"
    { (yyval.ast_field) = (yyvsp[(1) - (1)].ast_field); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 127 "parser/grammar.y"
    { (yyval.ast_field) = (yyvsp[(1) - (1)].ast_field); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 129 "parser/grammar.y"
    { (yyval.ast_field) = (yyvsp[(1) - (1)].ast_field); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 131 "parser/grammar.y"
    { (yyval.ast_field) = (yyvsp[(1) - (1)].ast_field); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 133 "parser/grammar.y"
    { (yyval.ast_field) = (yyvsp[(1) - (1)].ast_field); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 135 "parser/grammar.y"
    { (yyval.ast_field) = (yyvsp[(1) - (1)].ast_field); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 137 "parser/grammar.y"
    { num_errors++; yyerrok; }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 141 "parser/grammar.y"
    { 
        (yyval.ast_field) = grammar_syntax_parser->make_block_node((yyvsp[(7) - (8)].ast_filler), (yyvsp[(3) - (8)].int_val), *(yyvsp[(5) - (8)].symbol));  
    }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 145 "parser/grammar.y"
    { 
        (yyval.ast_field) = grammar_syntax_parser->make_block_node(nullptr, (yyvsp[(3) - (6)].int_val), *(yyvsp[(5) - (6)].symbol)); 
    }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 149 "parser/grammar.y"
    { 
        (yyval.ast_field) = grammar_syntax_parser->make_block_node((yyvsp[(6) - (7)].ast_filler), (yyvsp[(3) - (7)].int_val));
    }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 153 "parser/grammar.y"
    { 
        (yyval.ast_field) = grammar_syntax_parser->make_block_node(nullptr, (yyvsp[(3) - (5)].int_val)); 
    }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 157 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_block_node(
            grammar_syntax_parser->make_const_string_node(*(yyvsp[(3) - (4)].symbol)), 
            (yyvsp[(3) - (4)].symbol)->size()
        );
    }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 164 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_block_node(
            grammar_syntax_parser->make_const_string_node(*(yyvsp[(4) - (5)].symbol)), 
            (yyvsp[(4) - (5)].symbol)->size(),
            *(yyvsp[(2) - (5)].symbol)
        );
    }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 174 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_variable_block_node((yyvsp[(9) - (10)].ast_filler), (yyvsp[(3) - (10)].int_val), (yyvsp[(5) - (10)].int_val), *(yyvsp[(7) - (10)].symbol)); 
    }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 178 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_variable_block_node(nullptr, (yyvsp[(3) - (8)].int_val), (yyvsp[(5) - (8)].int_val), *(yyvsp[(7) - (8)].symbol)); 
    }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 182 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_variable_block_node((yyvsp[(8) - (9)].ast_filler), (yyvsp[(3) - (9)].int_val), (yyvsp[(5) - (9)].int_val)); 
    }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 186 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_variable_block_node(nullptr, (yyvsp[(3) - (7)].int_val), (yyvsp[(5) - (7)].int_val)); 
    }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 192 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_compound_field_node((yyvsp[(3) - (5)].ast_fields));
    }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 196 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_compound_field_node((yyvsp[(4) - (6)].ast_fields), *(yyvsp[(2) - (6)].symbol));
    }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 202 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_compound_bitfield_node((yyvsp[(3) - (5)].ast_fields));
    }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 206 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_compound_bitfield_node((yyvsp[(4) - (6)].ast_fields), *(yyvsp[(2) - (6)].symbol));
    }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 212 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_choice_field_node((yyvsp[(3) - (5)].ast_fields));
    }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 216 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_choice_field_node((yyvsp[(4) - (6)].ast_fields), *(yyvsp[(2) - (6)].symbol));
    }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 223 "parser/grammar.y"
    {
        (yyval.ast_fields) = grammar_syntax_parser->make_fields_list();
        (yyval.ast_fields)->push_back((yyvsp[(1) - (1)].ast_field));
    }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 228 "parser/grammar.y"
    {
        (yyvsp[(1) - (2)].ast_fields)->push_back((yyvsp[(2) - (2)].ast_field));
    }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 234 "parser/grammar.y"
    { 
        (yyval.ast_field) = grammar_syntax_parser->make_bitfield_node((yyvsp[(7) - (8)].ast_value_node), (yyvsp[(3) - (8)].int_val), *(yyvsp[(5) - (8)].symbol));  
    }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 238 "parser/grammar.y"
    { 
        (yyval.ast_field) = grammar_syntax_parser->make_bitfield_node(nullptr, (yyvsp[(3) - (6)].int_val), *(yyvsp[(5) - (6)].symbol)); 
    }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 242 "parser/grammar.y"
    { 
        (yyval.ast_field) = grammar_syntax_parser->make_bitfield_node((yyvsp[(6) - (7)].ast_value_node), (yyvsp[(3) - (7)].int_val));
    }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 246 "parser/grammar.y"
    { 
        (yyval.ast_field) = grammar_syntax_parser->make_bitfield_node(nullptr, (yyvsp[(3) - (5)].int_val)); 
    }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 252 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_template_field_node(*(yyvsp[(3) - (9)].symbol), (yyvsp[(5) - (9)].int_val), (yyvsp[(7) - (9)].int_val));
    }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 256 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_template_field_node(*(yyvsp[(3) - (7)].symbol), (yyvsp[(5) - (7)].int_val), (yyvsp[(5) - (7)].int_val));
    }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 260 "parser/grammar.y"
    {
        (yyval.ast_field) = grammar_syntax_parser->make_template_field_node(*(yyvsp[(3) - (5)].symbol), 1, 1);
    }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 266 "parser/grammar.y"
    {
        (yyval.ast_filler) = grammar_syntax_parser->make_function_value_filler_node((yyvsp[(1) - (1)].ast_value_node));
    }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 270 "parser/grammar.y"
    {
        (yyval.ast_filler) = (yyvsp[(1) - (1)].ast_filler);
    }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 274 "parser/grammar.y"
    {
        (yyval.ast_filler) = grammar_syntax_parser->make_const_string_node(*(yyvsp[(1) - (1)].symbol));
    }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 280 "parser/grammar.y"
    {
        (yyval.ast_filler) = grammar_syntax_parser->make_node_filler_node(*(yyvsp[(3) - (4)].symbol), *(yyvsp[(1) - (4)].symbol));
        if((yyval.ast_filler) == nullptr) {
            yyerror(("function \"" + *(yyvsp[(1) - (4)].symbol) + "\" does not exist").c_str());
            YYABORT;
        }
    }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 290 "parser/grammar.y"
    {
        (yyval.ast_value_node) = grammar_syntax_parser->make_const_value_node((yyvsp[(1) - (1)].int_val));
    }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 294 "parser/grammar.y"
    { 
        (yyval.ast_value_node) = grammar_syntax_parser->make_node_value_node(*(yyvsp[(1) - (1)].symbol));
    }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 298 "parser/grammar.y"
    {
        (yyval.ast_value_node) = (yyvsp[(2) - (3)].ast_value_node);
    }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 302 "parser/grammar.y"
    {
        (yyval.ast_value_node) = grammar_syntax_parser->make_binary_function_value_node<plus_function_node>((yyvsp[(1) - (3)].ast_value_node), (yyvsp[(3) - (3)].ast_value_node));
    }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 306 "parser/grammar.y"
    {
        (yyval.ast_value_node) = grammar_syntax_parser->make_binary_function_value_node<minus_function_node>((yyvsp[(1) - (3)].ast_value_node), (yyvsp[(3) - (3)].ast_value_node));
    }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 310 "parser/grammar.y"
    {
        (yyval.ast_value_node) = grammar_syntax_parser->make_binary_function_value_node<divides_function_node>((yyvsp[(1) - (3)].ast_value_node), (yyvsp[(3) - (3)].ast_value_node));
    }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 314 "parser/grammar.y"
    {
        (yyval.ast_value_node) = grammar_syntax_parser->make_binary_function_value_node<multiplies_function_node>((yyvsp[(1) - (3)].ast_value_node), (yyvsp[(3) - (3)].ast_value_node));
    }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 320 "parser/grammar.y"
    {
        (yyval.ast_value_node) = grammar_syntax_parser->make_node_value_function_node(*(yyvsp[(3) - (4)].symbol), *(yyvsp[(1) - (4)].symbol));
        if((yyval.ast_value_node) == nullptr) {
            yyerror(("function \"" + *(yyvsp[(1) - (4)].symbol) + "\" does not exist").c_str());
            YYABORT;
        }
    }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 328 "parser/grammar.y"
    {
        (yyval.ast_value_node) = (yyvsp[(1) - (1)].ast_value_node);
    }
    break;



/* Line 1806 of yacc.c  */
#line 2079 "parser/grammar-output"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 333 "parser/grammar.y"



