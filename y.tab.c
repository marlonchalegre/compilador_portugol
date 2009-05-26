/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFICADOR = 258,
     INICIO = 259,
     FIM = 260,
     TEXTO = 261,
     SQRT = 262,
     IF = 263,
     IMPRIMA = 264,
     MAIORIGUAL = 265,
     IGUAL = 266,
     MENORIGUAL = 267,
     DIFERENTE = 268,
     AND = 269,
     OR = 270,
     NOT = 271,
     UMINUS = 272,
     THEN = 273,
     ELSE = 274
   };
#endif
/* Tokens.  */
#define IDENTIFICADOR 258
#define INICIO 259
#define FIM 260
#define TEXTO 261
#define SQRT 262
#define IF 263
#define IMPRIMA 264
#define MAIORIGUAL 265
#define IGUAL 266
#define MENORIGUAL 267
#define DIFERENTE 268
#define AND 269
#define OR 270
#define NOT 271
#define UMINUS 272
#define THEN 273
#define ELSE 274




/* Copy the first part of user declarations.  */
#line 1 "Portugol.y"

    #include <stdio.h>
    #include <math.h>
    #include <string.h>
    #include <stdlib.h>
    #include "Tabela.h"
    #include "Queue.h"

    FILE *file;
    void yyerror(char *);
    int yylex(void);
    void desempilhar(void);
    int pop();
    void push();
    //int pop_rel();
    //void push_rel();
    int tp_count = 0;
    int l = 0;
    int count_if_else = 0;
    int stack[100];
    int stack_pt = -1;
    //int stack_rel[100];
    //int stack_rel_pt = -1;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 26 "Portugol.y"
{
    char *texto;
    int sp;
}
/* Line 187 of yacc.c.  */
#line 164 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 177 "y.tab.c"

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
# if YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   166

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  42
/* YYNRULES -- Number of states.  */
#define YYNSTATES  82

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   274

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      28,    29,    21,    19,     2,    20,     2,    22,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    27,
      17,    26,    18,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    23,    24,    25
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    13,    17,    21,    25,    29,
      33,    37,    39,    41,    45,    49,    53,    57,    60,    64,
      68,    72,    73,    74,    75,    84,    96,    98,   102,   106,
     109,   113,   115,   117,   119,   121,   124,   126,   128,   130,
     133,   139,   146
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      31,     0,    -1,    41,    -1,    31,    41,    -1,     3,    26,
      34,    27,    -1,    34,    18,    34,    -1,    34,    17,    34,
      -1,    34,    12,    34,    -1,    34,    10,    34,    -1,    34,
      11,    34,    -1,    34,    13,    34,    -1,     6,    -1,     3,
      -1,    34,    19,    34,    -1,    34,    20,    34,    -1,    34,
      21,    34,    -1,    34,    22,    34,    -1,    20,    34,    -1,
      28,    34,    29,    -1,     9,     6,    27,    -1,     9,     3,
      27,    -1,    -1,    -1,    -1,     8,    28,    40,    29,    36,
      24,    41,    37,    -1,     8,    28,    40,    29,    36,    24,
      41,    37,    25,    38,    41,    -1,    33,    -1,    33,    14,
      40,    -1,    33,    15,    40,    -1,    16,    40,    -1,    28,
      40,    29,    -1,    39,    -1,    40,    -1,    35,    -1,    32,
      -1,    34,    27,    -1,    43,    -1,    27,    -1,    41,    -1,
      42,    41,    -1,     4,    27,    44,     5,    27,    -1,     4,
      27,    44,    42,     5,    27,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    53,    57,    65,    74,    83,    92,   101,
     110,   122,   123,   128,   136,   144,   152,   160,   168,   172,
     179,   192,   201,   207,   212,   213,   217,   222,   229,   236,
     242,   247,   255,   256,   257,   258,   260,   261,   270,   271,
     274,   276,   279
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFICADOR", "INICIO", "FIM",
  "TEXTO", "SQRT", "IF", "IMPRIMA", "MAIORIGUAL", "IGUAL", "MENORIGUAL",
  "DIFERENTE", "AND", "OR", "NOT", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "UMINUS", "THEN", "ELSE", "'='", "';'", "'('", "')'", "$accept",
  "programa", "afirmacao", "expressao_relacional", "expressao", "sentenca",
  "inicio_if", "label", "bloco", "selecao", "expressao_logica",
  "instrucao", "conjunto_instrucao", "bloco_instrucao", "imprimir_label", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    60,    62,    43,
      45,    42,    47,   272,   273,   274,    61,    59,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    30,    31,    31,    32,    33,    33,    33,    33,    33,
      33,    34,    34,    34,    34,    34,    34,    34,    34,    35,
      35,    36,    37,    38,    39,    39,    40,    40,    40,    40,
      40,    41,    41,    41,    41,    41,    41,    41,    42,    42,
      43,    43,    44
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     4,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     3,     3,     2,     3,     3,
       3,     0,     0,     0,     8,    11,     1,     3,     3,     2,
       3,     1,     1,     1,     1,     2,     1,     1,     1,     2,
       5,     6,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,     0,    11,     0,     0,     0,     0,    37,     0,
       0,    34,    26,     0,    33,    31,    32,     2,    36,     0,
      42,     0,     0,     0,    12,     0,    29,     0,    17,     0,
       0,     1,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,     0,     0,     0,    20,
      19,     0,    18,    30,    27,    28,     8,     9,     7,    10,
       6,     5,    13,    14,    15,    16,     4,     0,    38,     0,
      21,    40,     0,    39,     0,    41,     0,    22,    24,    23,
       0,    25
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    10,    11,    12,    13,    14,    74,    78,    80,    15,
      16,    17,    69,    18,    47
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -25
static const yytype_int16 yypact[] =
{
      82,   -24,   -19,   -25,   -13,    10,    91,    93,   -25,    91,
       1,   -25,     8,   118,   -25,   -25,   -25,   -25,   -25,    93,
     -25,    91,     0,    27,   -25,   131,   -25,    93,   -25,   105,
      -4,   -25,   -25,    91,    91,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,   -25,   139,    47,    28,   -25,
     -25,   135,   -25,   -25,   -25,   -25,    14,    14,    14,    14,
      14,    14,    -2,    -2,   -25,   -25,   -25,    31,   -25,    73,
     -25,   -25,    33,   -25,    37,   -25,    82,   -25,    39,   -25,
      82,   -25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -25,   -25,   -25,   -25,     5,   -25,   -25,   -25,   -25,   -25,
      -3,   -10,   -25,   -25,   -25
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      32,    31,    19,    26,     1,     2,    30,     3,    20,     4,
       5,    25,    28,    22,    29,    21,    23,     6,    48,    43,
      44,     7,    33,    34,    46,    53,    25,    49,     8,     9,
      54,    55,    51,    41,    42,    43,    44,    68,    25,    25,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       1,     2,    67,     3,    50,     4,     5,    70,    71,    73,
      75,    76,     0,     6,    79,     0,    77,     7,     0,     0,
      81,     0,     0,     0,     8,     9,     1,     2,    72,     3,
       0,     4,     5,     0,     0,     1,     2,     0,     3,     6,
       4,     5,     0,     7,    24,     0,    24,     3,     6,     3,
       8,     9,     7,     0,     0,     0,     0,     6,     0,     8,
       9,     7,     0,     7,     0,    35,    36,    37,    38,     9,
       0,    27,    39,    40,    41,    42,    43,    44,    35,    36,
      37,    38,     0,     0,    52,    39,    40,    41,    42,    43,
      44,    35,    36,    37,    38,    45,     0,     0,    39,    40,
      41,    42,    43,    44,    41,    42,    43,    44,    41,    42,
      43,    44,     0,     0,    52,     0,    66
};

static const yytype_int8 yycheck[] =
{
      10,     0,    26,     6,     3,     4,     9,     6,    27,     8,
       9,     6,     7,     3,     9,    28,     6,    16,    21,    21,
      22,    20,    14,    15,    19,    29,    21,    27,    27,    28,
      33,    34,    27,    19,    20,    21,    22,    47,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       3,     4,     5,     6,    27,     8,     9,    29,    27,    69,
      27,    24,    -1,    16,    25,    -1,    76,    20,    -1,    -1,
      80,    -1,    -1,    -1,    27,    28,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,     3,     4,    -1,     6,    16,
       8,     9,    -1,    20,     3,    -1,     3,     6,    16,     6,
      27,    28,    20,    -1,    -1,    -1,    -1,    16,    -1,    27,
      28,    20,    -1,    20,    -1,    10,    11,    12,    13,    28,
      -1,    28,    17,    18,    19,    20,    21,    22,    10,    11,
      12,    13,    -1,    -1,    29,    17,    18,    19,    20,    21,
      22,    10,    11,    12,    13,    27,    -1,    -1,    17,    18,
      19,    20,    21,    22,    19,    20,    21,    22,    19,    20,
      21,    22,    -1,    -1,    29,    -1,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     8,     9,    16,    20,    27,    28,
      31,    32,    33,    34,    35,    39,    40,    41,    43,    26,
      27,    28,     3,     6,     3,    34,    40,    28,    34,    34,
      40,     0,    41,    14,    15,    10,    11,    12,    13,    17,
      18,    19,    20,    21,    22,    27,    34,    44,    40,    27,
      27,    34,    29,    29,    40,    40,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    27,     5,    41,    42,
      29,    27,     5,    41,    36,    27,    24,    41,    37,    25,
      38,    41
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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
# if YYLTYPE_IS_TRIVIAL
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 57 "Portugol.y"
    {
                                            char command[50];
                                            sprintf(command,"mov(%s, NULL, &ts[%d]);\n", (yyvsp[(3) - (4)].texto), (yyvsp[(1) - (4)].sp));
                                            enqueue( strdup(command) );
				        }
    break;

  case 5:
#line 65 "Portugol.y"
    {
                                        char command[50];
                                        sprintf(command,"comp_gt(%s, %s, &temp[%d]);\n", (yyvsp[(1) - (3)].texto), (yyvsp[(3) - (3)].texto), tp_count++);
                                        enqueue( strdup(command) );
                                        //push(tp_count-1);
                                        
                                        sprintf(command, "temp[%d]", tp_count-1);
                                        (yyval.texto) = strdup(command);
                                  }
    break;

  case 6:
#line 74 "Portugol.y"
    {
                                        char command[50];
                                        sprintf(command, "comp_lt(%s, %s, &temp[%d]);\n", (yyvsp[(1) - (3)].texto), (yyvsp[(3) - (3)].texto), tp_count++);
                                        enqueue( strdup(command) );
                                        //push(tp_count-1);
                                        
                                        sprintf(command, "temp[%d]", tp_count-1);
                                        (yyval.texto) = strdup(command);
                                  }
    break;

  case 7:
#line 83 "Portugol.y"
    {
                                        char command[50];
                                        sprintf(command, "comp_le(%s, %s, &temp[%d]);\n", (yyvsp[(1) - (3)].texto), (yyvsp[(3) - (3)].texto), tp_count++);
                                        enqueue( strdup(command));
                                        //push(tp_count-1);
                                        
                                        sprintf(command, "temp[%d]", tp_count-1);
                                        (yyval.texto) = strdup(command);
                                         }
    break;

  case 8:
#line 92 "Portugol.y"
    {
                                        char command[50];
                                        sprintf(command, "comp_ge(%s, %s, &temp[%d]);\n", (yyvsp[(1) - (3)].texto), (yyvsp[(3) - (3)].texto), tp_count++);
                                        enqueue( strdup(command));
                                        //push(tp_count-1);
                                        
                                        sprintf(command, "temp[%d]", tp_count-1);
                                        (yyval.texto) = strdup(command);
                                         }
    break;

  case 9:
#line 101 "Portugol.y"
    {
                                        char command[50];
                                        sprintf(command, "comp_eq(%s, %s, &temp[%d]);\n", (yyvsp[(1) - (3)].texto), (yyvsp[(3) - (3)].texto), tp_count++);
                                        enqueue( strdup(command));
                                        //push(tp_count-1);
                                        
                                        sprintf(command, "temp[%d]", tp_count-1);
                                        (yyval.texto) = strdup(command);
                                    }
    break;

  case 10:
#line 110 "Portugol.y"
    {
                                            char command[50];
                                            sprintf(command, "comp_ne(%s, %s, &temp[%d]);\n", (yyvsp[(1) - (3)].texto), (yyvsp[(3) - (3)].texto), tp_count++);
                                            enqueue( strdup(command));
                                            //push(tp_count-1);
                                        
                                            sprintf(command, "temp[%d]", tp_count-1);
                                            (yyval.texto) = strdup(command);
                                        }
    break;

  case 12:
#line 123 "Portugol.y"
    { 
                                        char buf[40];
                                        sprintf(buf, "ts[%d]", (yyvsp[(1) - (1)].sp));
                                        (yyval.texto) = strdup(buf);
                                    }
    break;

  case 13:
#line 128 "Portugol.y"
    {
                                        char buf[40];
                                        sprintf(buf,"add(%s, %s, &temp[%d]);\n", (yyvsp[(1) - (3)].texto), (yyvsp[(3) - (3)].texto), tp_count++);
                                        enqueue( strdup(buf) );

                                        sprintf(buf, "temp[%d]", tp_count-1);
                                        (yyval.texto) = strdup(buf);
                                      }
    break;

  case 14:
#line 136 "Portugol.y"
    {
                                        char buf[40];
                                        sprintf(buf,"sub(%s, %s, &temp[%d]);\n", (yyvsp[(1) - (3)].texto), (yyvsp[(3) - (3)].texto), tp_count++);
                                        enqueue( strdup(buf) );

                                        sprintf(buf, "temp[%d]", tp_count-1);
                                        (yyval.texto) = strdup(buf);
                                      }
    break;

  case 15:
#line 144 "Portugol.y"
    { 
                                        char buf[40];
                                        sprintf(buf,"mult(%s, %s, &temp[%d]);\n", (yyvsp[(1) - (3)].texto), (yyvsp[(3) - (3)].texto), tp_count++);
                                        enqueue( strdup(buf) );

                                        sprintf(buf, "temp[%d]", tp_count-1);
                                        (yyval.texto) = strdup(buf);
                                      }
    break;

  case 16:
#line 152 "Portugol.y"
    {
                                        char buf[40];
                                        sprintf(buf,"divi(%s, %s, &temp[%d]);\n", (yyvsp[(1) - (3)].texto), (yyvsp[(3) - (3)].texto), tp_count++);
                                        enqueue( strdup(buf) );

                                        sprintf(buf, "temp[%d]", tp_count-1);
                                        (yyval.texto) = strdup(buf);
                                      }
    break;

  case 17:
#line 160 "Portugol.y"
    {
                                        char buf[40];
                                        sprintf(buf,"uminus(%s, NULL, &temp[%d]);\n", (yyvsp[(2) - (2)].texto), tp_count++);
                                        enqueue( strdup(buf) );

                                        sprintf(buf, "temp[%d]", tp_count-1);
                                        (yyval.texto) = strdup(buf);
                                      }
    break;

  case 18:
#line 168 "Portugol.y"
    { (yyval.texto) = (yyvsp[(2) - (3)].texto); }
    break;

  case 19:
#line 172 "Portugol.y"
    {
                            char command[50];
                            sprintf(command, "param(%s, NULL, NULL);\n", (yyvsp[(2) - (3)].texto)); 
                            enqueue(strdup(command));
                            sprintf(command, "call(\"imprima\", 1, NULL);\n");
                            enqueue(strdup(command));
                      }
    break;

  case 20:
#line 179 "Portugol.y"
    {
                                    printf("entrou\n");
                                    char command[50];
                                    sprintf(command, "param(ts[%d], NULL, NULL);\n", (yyvsp[(2) - (3)].sp)); 
                                    enqueue(strdup(command));
                                    enqueue(strdup(command));
                                    printf("empty: %d\n", is_empty());
                                    sprintf(command, "call(\"imprima\", 1, NULL);\n");
                                    enqueue(strdup(command));
                                    printf("empty: %d\n", is_empty());
                                }
    break;

  case 21:
#line 192 "Portugol.y"
    {
            char command[50];
            sprintf(command,"jump_f(temp[%d], NULL, l%d);\n", tp_count-1, l++);
            enqueue(strdup(command));
            push(l-1);
            count_if_else++;
           }
    break;

  case 22:
#line 201 "Portugol.y"
    {
            char command[50];
            sprintf(command, "l%d:\n", pop());
            enqueue(strdup(command));
        }
    break;

  case 23:
#line 207 "Portugol.y"
    {
            enqueue("jump_incondicional");
       }
    break;

  case 26:
#line 217 "Portugol.y"
    {
                    char command[50];
                    sprintf(command, "temp[%d]", tp_count-1);
                    (yyval.texto) = strdup(command);
                }
    break;

  case 27:
#line 222 "Portugol.y"
    { 
                                                                    char command[50];
                                                                    sprintf(command, "rela_an(%s, %s, temp[%d]);\n", (yyvsp[(1) - (3)].texto), (yyvsp[(3) - (3)].texto), tp_count++);
                                                                    enqueue(strdup(command));
                                                                    sprintf(command, "temp[%d]", tp_count-1);
                                                                    (yyval.texto) = strdup(command);
                                                            }
    break;

  case 28:
#line 229 "Portugol.y"
    {
                                                                    char command[50];
                                                                    sprintf(command, "rela_or(%s, %s, temp[%d]);\n", (yyvsp[(1) - (3)].texto), (yyvsp[(3) - (3)].texto), tp_count++);
                                                                    enqueue(strdup(command));
                                                                    sprintf(command, "temp[%d]", tp_count-1);
                                                                    (yyval.texto) = strdup(command);
                                                           }
    break;

  case 29:
#line 236 "Portugol.y"
    {
                                                
                                                char command[50];
                                                sprintf(command, "rela_no(%s, NULL, temp[%d]);\n", (yyvsp[(2) - (2)].texto), tp_count++);
                                                enqueue(strdup(command));
                                       }
    break;

  case 30:
#line 242 "Portugol.y"
    { (yyval.texto) = (yyvsp[(2) - (3)].texto); }
    break;

  case 31:
#line 247 "Portugol.y"
    { 
                desempilhar();
                count_if_else--;
                if (!count_if_else) { // label de jump incondicional
                    fprintf(file, "l%d:\n", l++);
                    fflush(file);
                }
        }
    break;

  case 33:
#line 256 "Portugol.y"
    { if (count_if_else == 0) desempilhar(); }
    break;

  case 34:
#line 257 "Portugol.y"
    { if (count_if_else == 0) desempilhar(); }
    break;

  case 35:
#line 258 "Portugol.y"
    { if (count_if_else == 0) desempilhar(); }
    break;

  case 37:
#line 261 "Portugol.y"
    { if (count_if_else == 0) {
                    fprintf(file, "nop(NULL, NULL, NULL);\n");
                    fflush(file);
                } else {
                    enqueue("nop(NULL, NULL, NULL);\n");
                }
        }
    break;

  case 40:
#line 274 "Portugol.y"
    {
                           }
    break;

  case 41:
#line 276 "Portugol.y"
    {
                                                }
    break;

  case 42:
#line 279 "Portugol.y"
    {
                    if (count_if_else == 0 && l > 0) // Soh imprime se nao estiver em um if
                        fprintf(file, "l%d:\n", l++);
                }
    break;


/* Line 1267 of yacc.c.  */
#line 1771 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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


#line 283 "Portugol.y"


void push(int value) {
    stack[++stack_pt] = value;
}

int pop() {
    return stack[stack_pt--];
}
//void push_rel(int value) {
//    stack_rel[++stack_rel_pt] = value;
//}

//int pop_rel() {
//    return stack_rel[stack_rel_pt--];
//}
void desempilhar(void) {
    char *value; 
    while(!is_empty()){
        value = dequeue();
        if (!strcmp(value, "jump_incondicional")) {
            fprintf(file, "jump(l%d, NULL, NULL);\n", l);
        }
        else {
            fprintf(file,"%s",value);
        }
    }
    fflush(file);

}

void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}
 
/*void escreverLabel(){
    if(flag){
        fprintf(file, "l%d:\n", l-1);
        flag = 0;
    }
}
*/
int main(int argc, char **argv) {
//as primeiras palavras que forem adicionadas serao as palavras chaves, isso antes do lex entrar em acao
//enquanto o lex estiver rodando o usuario n podera entrar mais com essas palavras, e as que ele entrar sera variavel
    //lookup("inicio",1);
    //lookup("fim",1);
    file = fopen("Portugol.out","w");

    init_queue();
    if(!file){
        printf("O arquivo nao pode ser aberto!!\n");
        exit(1);
    }

    FILE *yyin;
    if (argc > 1) {
        if ((yyin = fopen(argv[1], "r")) == NULL) {
            printf("erro ao ler arquivo de entrada.\n");
            exit(1);
        }
        yyrestart(yyin); 
    }
            
    yyparse();
    if (argc > 1) fclose(yyin);
    fclose(file);
}

