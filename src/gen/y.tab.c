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
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PP = 258,
     PP_SPACE = 259,
     PP_NEWLINE = 260,
     PP_CONTENT = 261,
     PP_STRING = 262,
     PP_IF = 263,
     PP_ELIF = 264,
     PP_ELSE = 265,
     PP_ENDIF = 266,
     PP_IFDEF = 267,
     PP_IFNDEF = 268,
     PP_UNDEF = 269,
     PP_DEFINE = 270,
     PP_ERROR = 271,
     PP_WARNING = 272,
     PP_INCLUDE = 273,
     PP_PRAGMA = 274,
     PP_LINE = 275,
     IDENTIFIER = 276,
     LITERAL_INT = 277,
     LITERAL_FLOAT = 278,
     LITERAL_CHAR = 279,
     LITERAL_STRING = 280,
     LITERAL_ENUM = 281,
     NAME_MACRO = 282,
     NAME_TYPEDEF = 283,
     NAME_STRUCT = 284,
     NAME_UNION = 285,
     NAME_ENUM = 286,
     IF = 287,
     ELSE = 288,
     WHILE = 289,
     DO = 290,
     FOR = 291,
     RETURN = 292,
     GOTO = 293,
     CONTINUE = 294,
     BREAK = 295,
     SWITCH = 296,
     CASE = 297,
     DEFAULT = 298,
     SIZEOF = 299,
     ALIGNOF = 300,
     OP_PTR = 301,
     OP_INC = 302,
     OP_DEC = 303,
     OP_BITLEFT = 304,
     OP_BITRIGHT = 305,
     OP_AND = 306,
     OP_OR = 307,
     OP_LT = 308,
     OP_GT = 309,
     OP_LTE = 310,
     OP_GTE = 311,
     OP_EQ = 312,
     OP_NEQ = 313,
     OP_ASSIGN_MUL = 314,
     OP_ASSIGN_DIV = 315,
     OP_ASSIGN_MOD = 316,
     OP_ASSIGN_ADD = 317,
     OP_ASSIGN_SUB = 318,
     OP_ASSIGN_BITLEFT = 319,
     OP_ASSIGN_BITRIGHT = 320,
     OP_ASSIGN_BITAND = 321,
     OP_ASSIGN_BITXOR = 322,
     OP_ASSIGN_BITOR = 323,
     TYPEDEF = 324,
     EXTERN = 325,
     STATIC = 326,
     AUTO = 327,
     REGISTER = 328,
     INLINE = 329,
     CONST = 330,
     RESTRICT = 331,
     VOLATILE = 332,
     SIGNED = 333,
     UNSIGNED = 334,
     VOID = 335,
     BOOL = 336,
     CHAR = 337,
     SHORT = 338,
     INT = 339,
     LONG = 340,
     FLOAT = 341,
     DOUBLE = 342,
     COMPLEX = 343,
     IMAGINARY = 344,
     STRUCT = 345,
     UNION = 346,
     ENUM = 347,
     ELLIPSIS = 348,
     ATOMIC = 349,
     ALIGNAS = 350,
     NORETURN = 351,
     THREAD_LOCAL = 352,
     GENERIC = 353,
     STATIC_ASSERT = 354
   };
#endif
/* Tokens.  */
#define PP 258
#define PP_SPACE 259
#define PP_NEWLINE 260
#define PP_CONTENT 261
#define PP_STRING 262
#define PP_IF 263
#define PP_ELIF 264
#define PP_ELSE 265
#define PP_ENDIF 266
#define PP_IFDEF 267
#define PP_IFNDEF 268
#define PP_UNDEF 269
#define PP_DEFINE 270
#define PP_ERROR 271
#define PP_WARNING 272
#define PP_INCLUDE 273
#define PP_PRAGMA 274
#define PP_LINE 275
#define IDENTIFIER 276
#define LITERAL_INT 277
#define LITERAL_FLOAT 278
#define LITERAL_CHAR 279
#define LITERAL_STRING 280
#define LITERAL_ENUM 281
#define NAME_MACRO 282
#define NAME_TYPEDEF 283
#define NAME_STRUCT 284
#define NAME_UNION 285
#define NAME_ENUM 286
#define IF 287
#define ELSE 288
#define WHILE 289
#define DO 290
#define FOR 291
#define RETURN 292
#define GOTO 293
#define CONTINUE 294
#define BREAK 295
#define SWITCH 296
#define CASE 297
#define DEFAULT 298
#define SIZEOF 299
#define ALIGNOF 300
#define OP_PTR 301
#define OP_INC 302
#define OP_DEC 303
#define OP_BITLEFT 304
#define OP_BITRIGHT 305
#define OP_AND 306
#define OP_OR 307
#define OP_LT 308
#define OP_GT 309
#define OP_LTE 310
#define OP_GTE 311
#define OP_EQ 312
#define OP_NEQ 313
#define OP_ASSIGN_MUL 314
#define OP_ASSIGN_DIV 315
#define OP_ASSIGN_MOD 316
#define OP_ASSIGN_ADD 317
#define OP_ASSIGN_SUB 318
#define OP_ASSIGN_BITLEFT 319
#define OP_ASSIGN_BITRIGHT 320
#define OP_ASSIGN_BITAND 321
#define OP_ASSIGN_BITXOR 322
#define OP_ASSIGN_BITOR 323
#define TYPEDEF 324
#define EXTERN 325
#define STATIC 326
#define AUTO 327
#define REGISTER 328
#define INLINE 329
#define CONST 330
#define RESTRICT 331
#define VOLATILE 332
#define SIGNED 333
#define UNSIGNED 334
#define VOID 335
#define BOOL 336
#define CHAR 337
#define SHORT 338
#define INT 339
#define LONG 340
#define FLOAT 341
#define DOUBLE 342
#define COMPLEX 343
#define IMAGINARY 344
#define STRUCT 345
#define UNION 346
#define ENUM 347
#define ELLIPSIS 348
#define ATOMIC 349
#define ALIGNAS 350
#define NORETURN 351
#define THREAD_LOCAL 352
#define GENERIC 353
#define STATIC_ASSERT 354




/* Copy the first part of user declarations.  */
#line 34 "./src//parser.y"


#include "ppp.h"

int yydebug = 1;



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 108 "./src//parser.y"
{
	int              v_int;
	float            v_float;
	char*            v_str;
	char**           v_strarr;
	s_symbol         v_symbol;
	s_symbol_field   v_symbol_field;
}
/* Line 193 of yacc.c.  */
#line 311 "./src/gen//y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
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


/* Line 216 of yacc.c.  */
#line 336 "./src/gen//y.tab.c"

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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  87
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2365

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  123
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  321
/* YYNRULES -- Number of states.  */
#define YYNSTATES  557

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   354

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     100,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   114,     2,     2,     2,   116,   109,     2,
     101,   102,   110,   111,   103,   112,   106,   115,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   120,   122,
       2,   121,     2,   119,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   104,     2,   105,   117,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   107,   118,   108,   113,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    22,    26,    28,    31,    35,    39,    43,    47,    51,
      55,    58,    61,    63,    65,    69,    73,    77,    81,    86,
      92,    99,   107,   109,   113,   116,   119,   123,   127,   129,
     132,   136,   142,   148,   150,   152,   154,   156,   158,   161,
     163,   165,   167,   171,   173,   175,   180,   184,   189,   193,
     197,   200,   203,   210,   218,   220,   224,   226,   229,   232,
     235,   238,   243,   248,   250,   252,   254,   256,   258,   260,
     262,   267,   269,   273,   277,   281,   283,   287,   291,   293,
     297,   301,   303,   307,   311,   315,   319,   321,   325,   329,
     331,   335,   337,   341,   343,   347,   349,   353,   355,   359,
     361,   367,   369,   373,   375,   377,   379,   381,   383,   385,
     387,   389,   391,   393,   395,   397,   401,   403,   405,   407,
     409,   411,   413,   415,   417,   419,   421,   423,   425,   427,
     429,   431,   433,   435,   437,   439,   441,   443,   445,   447,
     450,   452,   455,   457,   462,   468,   471,   473,   476,   479,
     483,   485,   487,   491,   494,   498,   500,   505,   511,   514,
     519,   525,   531,   538,   541,   543,   547,   551,   553,   560,
     562,   566,   570,   574,   579,   581,   583,   588,   593,   597,
     599,   601,   605,   608,   611,   613,   615,   619,   622,   624,
     627,   629,   634,   638,   642,   647,   649,   652,   654,   657,
     661,   664,   672,   676,   681,   685,   687,   690,   698,   704,
     710,   716,   724,   731,   739,   746,   754,   758,   761,   764,
     767,   771,   773,   775,   777,   779,   781,   783,   785,   788,
     790,   792,   795,   799,   801,   803,   805,   807,   809,   812,
     816,   819,   822,   824,   828,   831,   835,   841,   846,   852,
     857,   861,   865,   869,   874,   881,   887,   893,   900,   905,
     910,   913,   917,   921,   926,   929,   931,   933,   935,   939,
     943,   948,   955,   961,   967,   974,   980,   985,   990,   995,
     999,  1004,  1006,  1010,  1013,  1015,  1017,  1021,  1025,  1027,
    1030,  1032,  1035,  1037,  1040,  1042,  1045,  1047,  1050,  1052,
    1057,  1060,  1064,  1066,  1068,  1071,  1076,  1080,  1082,  1084,
    1086,  1088
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     209,     0,    -1,    22,    -1,    23,    -1,    24,    -1,    25,
      -1,    26,    -1,   128,    -1,     6,    -1,    25,    -1,   128,
      25,    -1,   128,     4,    25,    -1,     7,    -1,   128,     7,
      -1,   128,     4,     7,    -1,     3,   133,   100,    -1,     3,
     132,   100,    -1,     3,   130,   100,    -1,     3,   131,   100,
      -1,     3,   125,   100,    -1,     8,   124,    -1,     9,   124,
      -1,    10,    -1,    11,    -1,    12,     4,    21,    -1,    13,
       4,    21,    -1,    14,     4,    21,    -1,    15,     4,    21,
      -1,    15,     4,    21,     4,    -1,    15,     4,    21,     4,
     124,    -1,    15,     4,    21,   101,   126,   102,    -1,    15,
       4,    21,   101,   126,   102,   124,    -1,    21,    -1,   126,
     103,    21,    -1,    18,     7,    -1,    18,    25,    -1,    18,
       4,     7,    -1,    18,     4,    25,    -1,    20,    -1,    20,
       4,    -1,    20,     4,   127,    -1,    20,     4,   127,     4,
       7,    -1,    20,     4,   127,     4,    25,    -1,    22,    -1,
      24,    -1,    23,    -1,    26,    -1,    25,    -1,   134,    25,
      -1,    21,    -1,   127,    -1,   134,    -1,   101,   154,   102,
      -1,   168,    -1,   135,    -1,   136,   104,   154,   105,    -1,
     136,   101,   102,    -1,   136,   101,   137,   102,    -1,   136,
     106,    21,    -1,   136,    46,    21,    -1,   136,    47,    -1,
     136,    48,    -1,   101,   178,   102,   107,   179,   108,    -1,
     101,   178,   102,   107,   179,   103,   108,    -1,   152,    -1,
     137,   103,   152,    -1,   136,    -1,    47,   138,    -1,    48,
     138,    -1,   139,   140,    -1,    44,   138,    -1,    44,   101,
     178,   102,    -1,    45,   101,   178,   102,    -1,   109,    -1,
     110,    -1,   111,    -1,   112,    -1,   113,    -1,   114,    -1,
     138,    -1,   101,   178,   102,   140,    -1,   140,    -1,   141,
     110,   140,    -1,   141,   115,   140,    -1,   141,   116,   140,
      -1,   141,    -1,   142,   111,   141,    -1,   142,   112,   141,
      -1,   142,    -1,   143,    49,   142,    -1,   143,    50,   142,
      -1,   143,    -1,   144,    53,   143,    -1,   144,    54,   143,
      -1,   144,    55,   143,    -1,   144,    56,   143,    -1,   144,
      -1,   145,    57,   144,    -1,   145,    58,   144,    -1,   145,
      -1,   146,   109,   145,    -1,   146,    -1,   147,   117,   146,
      -1,   147,    -1,   148,   118,   147,    -1,   148,    -1,   149,
      51,   148,    -1,   149,    -1,   150,    52,   149,    -1,   150,
      -1,   150,   119,   154,   120,   151,    -1,   151,    -1,   138,
     153,   152,    -1,   121,    -1,    59,    -1,    60,    -1,    61,
      -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,
      -1,    67,    -1,    68,    -1,   152,    -1,   154,   103,   152,
      -1,   151,    -1,    70,    -1,    71,    -1,    97,    -1,    72,
      -1,    73,    -1,    80,    -1,    82,    -1,    83,    -1,    84,
      -1,    85,    -1,    86,    -1,    87,    -1,    78,    -1,    79,
      -1,    81,    -1,    88,    -1,    89,    -1,   171,    -1,   159,
      -1,   164,    -1,   165,    -1,    28,    -1,   157,   158,    -1,
     157,    -1,   194,   158,    -1,   194,    -1,    90,   107,   160,
     108,    -1,    90,    21,   107,   160,   108,    -1,    90,    21,
      -1,   161,    -1,   160,   161,    -1,   158,   122,    -1,   158,
     162,   122,    -1,   184,    -1,   163,    -1,   162,   103,   163,
      -1,   120,   155,    -1,   201,   120,   155,    -1,   201,    -1,
      91,   107,   160,   108,    -1,    91,    21,   107,   160,   108,
      -1,    91,    21,    -1,    92,   107,   166,   108,    -1,    92,
     107,   166,   103,   108,    -1,    92,    21,   107,   166,   108,
      -1,    92,    21,   107,   166,   103,   108,    -1,    92,    21,
      -1,   167,    -1,   166,   103,   167,    -1,    21,   121,   155,
      -1,    21,    -1,    98,   101,   152,   103,   169,   102,    -1,
     170,    -1,   169,   103,   170,    -1,   178,   120,   152,    -1,
      43,   120,   152,    -1,    94,   101,   178,   102,    -1,    74,
      -1,    96,    -1,    95,   101,   178,   102,    -1,    95,   101,
     155,   102,    -1,   175,   103,    93,    -1,   175,    -1,   176,
      -1,   175,   103,   176,    -1,   204,   201,    -1,   204,   198,
      -1,   204,    -1,    21,    -1,   177,   103,    21,    -1,   158,
     198,    -1,   158,    -1,   181,   180,    -1,   180,    -1,   179,
     103,   181,   180,    -1,   179,   103,   180,    -1,   107,   179,
     108,    -1,   107,   179,   103,   108,    -1,   152,    -1,   182,
     121,    -1,   183,    -1,   182,   183,    -1,   104,   155,   105,
      -1,   106,    21,    -1,    99,   101,   155,   103,    25,   102,
     122,    -1,    21,   120,   190,    -1,    42,   155,   120,   190,
      -1,    43,   120,   190,    -1,   122,    -1,   154,   122,    -1,
      32,   101,   154,   102,   190,    33,   190,    -1,    32,   101,
     154,   102,   190,    -1,    41,   101,   154,   102,   190,    -1,
      34,   101,   154,   102,   190,    -1,    35,   190,    34,   101,
     154,   102,   122,    -1,    36,   101,   186,   186,   102,   190,
      -1,    36,   101,   186,   186,   154,   102,   190,    -1,    36,
     101,   205,   186,   102,   190,    -1,    36,   101,   205,   186,
     154,   102,   190,    -1,    38,    21,   122,    -1,    39,   122,
      -1,    40,   122,    -1,    37,   122,    -1,    37,   154,   122,
      -1,   185,    -1,   193,    -1,   186,    -1,   187,    -1,   188,
      -1,   189,    -1,   192,    -1,   191,   192,    -1,   205,    -1,
     190,    -1,   107,   108,    -1,   107,   191,   108,    -1,    75,
      -1,    76,    -1,    77,    -1,    94,    -1,   194,    -1,   195,
     194,    -1,   110,   195,   196,    -1,   110,   195,    -1,   110,
     196,    -1,   110,    -1,   101,   198,   102,    -1,   104,   105,
      -1,   104,   110,   105,    -1,   104,    71,   195,   152,   105,
      -1,   104,    71,   152,   105,    -1,   104,   195,    71,   152,
     105,    -1,   104,   195,   152,   105,    -1,   104,   195,   105,
      -1,   104,   152,   105,    -1,   197,   104,   105,    -1,   197,
     104,   110,   105,    -1,   197,   104,    71,   195,   152,   105,
      -1,   197,   104,    71,   152,   105,    -1,   197,   104,   195,
     152,   105,    -1,   197,   104,   195,    71,   152,   105,    -1,
     197,   104,   195,   105,    -1,   197,   104,   152,   105,    -1,
     101,   102,    -1,   101,   174,   102,    -1,   197,   101,   102,
      -1,   197,   101,   174,   102,    -1,   196,   197,    -1,   196,
      -1,   197,    -1,    21,    -1,   101,   201,   102,    -1,   199,
     104,   105,    -1,   199,   104,   110,   105,    -1,   199,   104,
      71,   195,   152,   105,    -1,   199,   104,    71,   152,   105,
      -1,   199,   104,   195,   110,   105,    -1,   199,   104,   195,
      71,   152,   105,    -1,   199,   104,   195,   152,   105,    -1,
     199,   104,   195,   105,    -1,   199,   104,   152,   105,    -1,
     199,   101,   174,   102,    -1,   199,   101,   102,    -1,   199,
     101,   177,   102,    -1,   201,    -1,   200,   103,   201,    -1,
     196,   199,    -1,   199,    -1,   203,    -1,   202,   103,   203,
      -1,   201,   121,   180,    -1,   201,    -1,   156,   204,    -1,
     156,    -1,   157,   204,    -1,   157,    -1,   194,   204,    -1,
     194,    -1,   172,   204,    -1,   172,    -1,   173,   204,    -1,
     173,    -1,    69,   204,   200,   122,    -1,   204,   122,    -1,
     204,   202,   122,    -1,   184,    -1,   205,    -1,   206,   205,
      -1,   204,   201,   206,   193,    -1,   204,   201,   193,    -1,
     207,    -1,   205,    -1,   129,    -1,   208,    -1,   209,   208,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   157,   157,   158,   159,   160,   161,   162,   163,   167,
     168,   169,   170,   171,   172,   176,   177,   178,   179,   180,
     184,   185,   186,   187,   188,   189,   193,   197,   198,   199,
     200,   201,   205,   206,   210,   211,   212,   213,   217,   218,
     219,   220,   221,   229,   230,   231,   232,   236,   237,   241,
     242,   243,   244,   245,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   262,   263,   267,   268,   269,   270,
     271,   272,   273,   277,   278,   279,   280,   281,   282,   286,
     287,   291,   292,   293,   294,   298,   299,   300,   304,   305,
     306,   310,   311,   312,   313,   314,   318,   319,   320,   324,
     325,   329,   330,   334,   335,   339,   340,   344,   345,   349,
     350,   354,   355,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   373,   374,   378,   384,   385,   386,
     387,   388,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   412,
     413,   414,   415,   421,   422,   423,   427,   428,   432,   433,
     434,   438,   439,   442,   443,   444,   450,   451,   452,   458,
     459,   460,   461,   462,   466,   467,   470,   471,   477,   481,
     482,   486,   487,   491,   495,   496,   500,   501,   506,   507,
     511,   512,   515,   516,   517,   523,   524,   528,   529,   535,
     536,   537,   538,   541,   542,   543,   547,   551,   552,   555,
     556,   560,   566,   567,   568,   572,   573,   577,   578,   579,
     583,   584,   585,   586,   587,   588,   592,   593,   594,   595,
     596,   600,   601,   602,   603,   604,   605,   611,   612,   615,
     616,   620,   621,   627,   628,   629,   630,   633,   634,   638,
     639,   640,   641,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   671,   672,   673,   677,   678,   679,
     680,   681,   682,   683,   684,   685,   686,   687,   688,   689,
     690,   696,   697,   700,   701,   707,   708,   711,   712,   718,
     719,   720,   721,   722,   723,   724,   725,   726,   727,   731,
     732,   733,   734,   737,   738,   742,   743,   747,   748,   749,
     753,   754
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PP", "PP_SPACE", "PP_NEWLINE",
  "PP_CONTENT", "PP_STRING", "PP_IF", "PP_ELIF", "PP_ELSE", "PP_ENDIF",
  "PP_IFDEF", "PP_IFNDEF", "PP_UNDEF", "PP_DEFINE", "PP_ERROR",
  "PP_WARNING", "PP_INCLUDE", "PP_PRAGMA", "PP_LINE", "IDENTIFIER",
  "LITERAL_INT", "LITERAL_FLOAT", "LITERAL_CHAR", "LITERAL_STRING",
  "LITERAL_ENUM", "NAME_MACRO", "NAME_TYPEDEF", "NAME_STRUCT",
  "NAME_UNION", "NAME_ENUM", "IF", "ELSE", "WHILE", "DO", "FOR", "RETURN",
  "GOTO", "CONTINUE", "BREAK", "SWITCH", "CASE", "DEFAULT", "SIZEOF",
  "ALIGNOF", "OP_PTR", "OP_INC", "OP_DEC", "OP_BITLEFT", "OP_BITRIGHT",
  "OP_AND", "OP_OR", "OP_LT", "OP_GT", "OP_LTE", "OP_GTE", "OP_EQ",
  "OP_NEQ", "OP_ASSIGN_MUL", "OP_ASSIGN_DIV", "OP_ASSIGN_MOD",
  "OP_ASSIGN_ADD", "OP_ASSIGN_SUB", "OP_ASSIGN_BITLEFT",
  "OP_ASSIGN_BITRIGHT", "OP_ASSIGN_BITAND", "OP_ASSIGN_BITXOR",
  "OP_ASSIGN_BITOR", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER",
  "INLINE", "CONST", "RESTRICT", "VOLATILE", "SIGNED", "UNSIGNED", "VOID",
  "BOOL", "CHAR", "SHORT", "INT", "LONG", "FLOAT", "DOUBLE", "COMPLEX",
  "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "ATOMIC", "ALIGNAS",
  "NORETURN", "THREAD_LOCAL", "GENERIC", "STATIC_ASSERT", "'\\n'", "'('",
  "')'", "','", "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'*'", "'+'",
  "'-'", "'~'", "'!'", "'/'", "'%'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "$accept", "preprocessor_content", "preprocessor_define",
  "preprocessor_define_args", "constant", "preprocessor_string",
  "preprocessor", "preprocessor_conditional", "preprocessor_undefine",
  "preprocessor_include", "preprocessor_line", "string",
  "expression_primary", "expression_postfix", "argument_expression_list",
  "expression_unary", "unary_operator", "expression_cast",
  "expression_multiplicative", "expression_additive", "expression_shift",
  "expression_relational", "expression_equality", "expression_bitwise_and",
  "expression_bitwise_xor", "expression_bitwise_or",
  "expression_logical_and", "expression_logical_or", "expression_ternary",
  "expression_assignment", "assignment_operator", "expression",
  "expression_constant", "storage_class_specifier", "type_specifier",
  "specifier_qualifier_list", "struct_specifier",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "union_specifier",
  "enum_specifier", "enumerator_list", "enumerator", "generic_selection",
  "generic_assoc_list", "generic_association", "atomic_type_specifier",
  "function_specifier", "alignment_specifier", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "initializer_list", "initializer", "designation",
  "designator_list", "designator", "static_assert_declaration",
  "labeled_statement", "statement_expression", "statement_condition",
  "statement_iteration", "statement_jump", "statement", "block_item_list",
  "block_item", "compound_statement", "type_qualifier",
  "type_qualifier_list", "pointer", "direct_abstract_declarator",
  "abstract_declarator", "direct_declarator", "declarator_list",
  "declarator", "declarator_initializer_list", "declarator_initializer",
  "declaration_specifiers", "declaration", "declaration_list",
  "function_definition", "external_declaration", "translation_unit", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
      10,    40,    41,    44,    91,    93,    46,   123,   125,    38,
      42,    43,    45,   126,    33,    47,    37,    94,   124,    63,
      58,    61,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   123,   124,   124,   124,   124,   124,   124,   124,   128,
     128,   128,   128,   128,   128,   129,   129,   129,   129,   129,
     130,   130,   130,   130,   130,   130,   131,   125,   125,   125,
     125,   125,   126,   126,   132,   132,   132,   132,   133,   133,
     133,   133,   133,   127,   127,   127,   127,   134,   134,   135,
     135,   135,   135,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   137,   137,   138,   138,   138,   138,
     138,   138,   138,   139,   139,   139,   139,   139,   139,   140,
     140,   141,   141,   141,   141,   142,   142,   142,   143,   143,
     143,   144,   144,   144,   144,   144,   145,   145,   145,   146,
     146,   147,   147,   148,   148,   149,   149,   150,   150,   151,
     151,   152,   152,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   154,   154,   155,   156,   156,   156,
     156,   156,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   158,
     158,   158,   158,   159,   159,   159,   160,   160,   161,   161,
     161,   162,   162,   163,   163,   163,   164,   164,   164,   165,
     165,   165,   165,   165,   166,   166,   167,   167,   168,   169,
     169,   170,   170,   171,   172,   172,   173,   173,   174,   174,
     175,   175,   176,   176,   176,   177,   177,   178,   178,   179,
     179,   179,   179,   180,   180,   180,   181,   182,   182,   183,
     183,   184,   185,   185,   185,   186,   186,   187,   187,   187,
     188,   188,   188,   188,   188,   188,   189,   189,   189,   189,
     189,   190,   190,   190,   190,   190,   190,   191,   191,   192,
     192,   193,   193,   194,   194,   194,   194,   195,   195,   196,
     196,   196,   196,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   198,   198,   198,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   200,   200,   201,   201,   202,   202,   203,   203,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   205,
     205,   205,   205,   206,   206,   207,   207,   208,   208,   208,
     209,   209
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     2,     3,     3,     3,     3,     3,     3,
       2,     2,     1,     1,     3,     3,     3,     3,     4,     5,
       6,     7,     1,     3,     2,     2,     3,     3,     1,     2,
       3,     5,     5,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     3,     1,     1,     4,     3,     4,     3,     3,
       2,     2,     6,     7,     1,     3,     1,     2,     2,     2,
       2,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     4,     5,     2,     1,     2,     2,     3,
       1,     1,     3,     2,     3,     1,     4,     5,     2,     4,
       5,     5,     6,     2,     1,     3,     3,     1,     6,     1,
       3,     3,     3,     4,     1,     1,     4,     4,     3,     1,
       1,     3,     2,     2,     1,     1,     3,     2,     1,     2,
       1,     4,     3,     3,     4,     1,     2,     1,     2,     3,
       2,     7,     3,     4,     3,     1,     2,     7,     5,     5,
       5,     7,     6,     7,     6,     7,     3,     2,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     2,     3,
       2,     2,     1,     3,     2,     3,     5,     4,     5,     4,
       3,     3,     3,     4,     6,     5,     5,     6,     4,     4,
       2,     3,     3,     4,     2,     1,     1,     1,     3,     3,
       4,     6,     5,     5,     6,     5,     4,     4,     4,     3,
       4,     1,     3,     2,     1,     1,     3,     3,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     4,
       2,     3,     1,     1,     2,     4,     3,     1,     1,     1,
       1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   148,     0,   127,   128,   130,   131,   184,   243,
     244,   245,   139,   140,   132,   141,   133,   134,   135,   136,
     137,   138,   142,   143,     0,     0,     0,   246,     0,   185,
     129,     0,   319,   300,   302,   145,   146,   147,   144,   306,
     308,   312,   304,     0,   318,   317,   320,     0,     0,     0,
      22,    23,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,   155,     0,   168,     0,   173,     0,
       0,     0,     0,   299,   301,   305,   307,   303,   277,     0,
     252,   310,     0,   294,   298,     0,   295,     1,   321,     8,
      12,     2,     3,     4,     9,     6,    20,     7,    21,     0,
       0,     0,     0,     0,    34,    35,    39,    19,    17,    18,
      16,    15,     0,   291,     0,   150,     0,     0,   156,   160,
     152,     0,     0,     0,   177,     0,   174,   198,     0,    49,
      43,    45,    44,    47,    46,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    50,    51,    54,
      66,    79,     0,    81,    85,    88,    91,    96,    99,   101,
     103,   105,   107,   109,   126,     0,    53,     0,     0,     0,
     246,   247,   250,   251,   293,     0,     0,     0,     0,   316,
       0,   313,     0,     0,   311,     0,    13,    10,    24,    25,
      26,    27,    36,    37,    40,     0,   309,     0,   149,     0,
     158,     0,   161,   165,   153,   157,   151,     0,   166,     0,
       0,     0,   169,     0,     0,   275,   276,   197,   183,     0,
      70,     0,     0,    67,    68,     0,    79,   111,   124,     0,
       0,    48,     0,    60,    61,     0,     0,     0,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   186,
       0,   278,   248,   249,   195,   289,     0,   189,   190,     0,
     194,     0,   279,    74,     0,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   241,   215,
       0,   231,   233,   234,   235,   236,   240,     0,   237,   232,
     239,     0,   205,   297,   298,   315,   314,   296,    14,    11,
      28,     0,     0,   292,   154,   163,     0,   159,     0,   167,
       0,   171,   176,   170,   175,   270,     0,     0,     0,   254,
      74,     0,     0,   274,     0,     0,     0,     0,     0,     0,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     113,     0,    52,     0,     0,    59,    56,     0,    64,     0,
      58,    82,    83,    84,    86,    87,    89,    90,    92,    93,
      94,    95,    97,    98,   100,   102,   104,   106,   108,     0,
       0,   288,     0,   290,     0,     0,   275,   193,   192,     0,
       0,   280,   287,     0,   286,    74,     0,     0,     0,     0,
       0,     0,   229,     0,     0,   227,   228,     0,     0,     0,
     216,   242,   238,     0,     0,     0,   200,     0,     0,   207,
      29,    32,     0,    41,    42,   162,   164,   172,   271,   253,
       0,     0,   255,   261,     0,   260,     0,   272,     0,     0,
     262,    74,     0,     0,    71,    72,     0,     0,   112,   125,
       0,    80,    57,     0,    55,     0,     0,   188,   191,   196,
     282,     0,     0,   283,   285,   212,     0,     0,     0,     0,
       0,   230,   226,     0,     0,   214,     0,   210,     0,   203,
     199,   206,   208,    30,     0,   257,     0,     0,   259,   273,
       0,     0,   263,   269,     0,   268,     0,     0,     0,   179,
       0,     0,    65,   110,   211,   281,   284,     0,     0,     0,
       0,     0,     0,   213,   209,   204,   202,     0,    31,    33,
     256,   258,   265,     0,     0,   266,     0,   178,     0,     0,
       0,    62,   218,   220,     0,     0,     0,     0,     0,   219,
     201,   264,   267,   182,   180,   181,    63,     0,     0,   222,
       0,   224,     0,   217,   221,   223,   225
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    96,    58,   422,   147,    97,    32,    59,    60,    61,
      62,   148,   149,   150,   357,   226,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   227,   228,
     351,   290,   165,    33,    34,   116,    35,   117,   118,   201,
     202,    36,    37,   125,   126,   166,   498,   499,    38,    39,
      40,   326,   267,   268,   269,   500,   415,   416,   417,   418,
     419,   119,   291,   292,   293,   294,   295,   296,   297,   298,
     299,    42,   172,    82,   216,   327,    83,   112,   169,    85,
      86,   180,    44,   182,    45,    46,    47
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -447
static const yytype_int16 yypact[] =
{
     867,   435,  -447,  2268,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,    24,    37,    44,   -32,   -19,  -447,
    -447,    36,  -447,  2268,  2268,  -447,  -447,  -447,  -447,  2268,
    2268,  -447,  2268,    13,  -447,  -447,  -447,   834,   298,   298,
    -447,  -447,    72,   101,   176,   199,   229,   207,   -64,   157,
     165,   171,   183,   149,   -34,   764,   136,   764,   162,   275,
    1832,   946,  1756,  -447,  -447,  -447,  -447,  -447,  -447,   149,
     209,  -447,     5,   108,   992,   -39,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,   210,  -447,  -447,   241,  -447,   292,
     294,   307,   313,    74,  -447,  -447,   309,  -447,  -447,  -447,
    -447,  -447,   -29,  -447,   764,  1832,     8,  2019,  -447,  -447,
    1832,   764,  2056,   275,   217,   -60,  -447,    91,   240,  -447,
    -447,  -447,  -447,  -447,  -447,  1791,   272,  1827,  1827,   276,
     946,  -447,  -447,  -447,  -447,  -447,  -447,  -447,   327,  -447,
     193,  -447,  1756,  -447,    92,   -16,   232,   295,   251,   270,
     264,   269,   345,   -22,  -447,   296,  -447,   297,   300,   302,
    -447,  -447,   209,  -447,   108,  1991,  1071,   462,  1555,  -447,
      13,  -447,  2165,   149,  -447,   230,  -447,  -447,  -447,  -447,
    -447,    21,  -447,  -447,   403,   149,  -447,  2091,  -447,  1756,
    -447,    30,  -447,   288,  -447,  -447,  -447,  2125,  -447,    96,
    1756,    18,  -447,  1919,  1115,   148,   188,  -447,  -447,   946,
    -447,  1832,   946,  -447,  -447,  1756,   551,  -447,  -447,   224,
     308,  -447,   388,  -447,  -447,  1603,  1756,   391,  -447,  1756,
    1756,  1756,  1756,  1756,  1756,  1756,  1756,  1756,  1756,  1756,
    1756,  1756,  1756,  1756,  1756,  1756,  1756,  1756,  -447,  -447,
     389,  -447,  -447,  -447,  -447,  -447,   315,   312,  -447,   234,
      83,  1380,  -447,   314,   316,  1174,   304,   317,   321,   669,
     324,   763,   406,   310,   318,   330,  1756,   319,  -447,  -447,
      69,  -447,  -447,  -447,  -447,  -447,  -447,   557,  -447,  -447,
    -447,  1509,  -447,  -447,   331,  -447,  -447,  -447,  -447,  -447,
     298,   413,   253,  -447,  -447,  -447,    49,  -447,  1756,  -447,
      32,  -447,  -447,  -447,  -447,  -447,   334,   335,  1380,  -447,
     333,   337,  1218,   188,  2203,  1277,   349,   357,   358,   359,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
    -447,  1756,  -447,  1756,  1649,  -447,  -447,   238,  -447,   -68,
    -447,  -447,  -447,  -447,    92,    92,   -16,   -16,   232,   232,
     232,   232,   295,   295,   251,   270,   264,   269,   345,    76,
     363,  -447,  2237,  -447,   440,  1878,   143,  -447,  -447,   361,
    1380,  -447,  -447,  1756,  -447,   364,   365,   669,  1756,  1756,
     438,   652,  -447,    75,   353,  -447,  -447,  1756,   356,   669,
    -447,  -447,  -447,  1756,   456,   169,  -447,  1555,   196,  -447,
    -447,  -447,   242,  -447,  -447,  -447,  -447,  -447,  -447,  -447,
     373,  1380,  -447,  -447,  1756,  -447,   376,  -447,   380,  1380,
    -447,   386,   390,  1321,   401,  -447,   401,   436,  -447,  -447,
    1509,  -447,  -447,  1756,  -447,  1756,   407,  -447,  -447,  -447,
    -447,   450,   457,  -447,  -447,  -447,   252,   255,   463,   780,
     780,  -447,  -447,   258,   669,  -447,   460,  -447,  1415,  -447,
    -447,  -447,  -447,   298,   545,  -447,   472,   481,  -447,  -447,
     482,  1380,  -447,  -447,  1756,  -447,   483,   447,   260,  -447,
     448,   203,  -447,  -447,  -447,  -447,  -447,   669,   669,  1756,
    1685,  1720,   669,  -447,  -447,  -447,  -447,  1555,  -447,  -447,
    -447,  -447,  -447,   485,   498,  -447,  1756,  -447,   436,  1756,
    1461,  -447,   573,  -447,   262,   669,   265,   669,   268,  -447,
    -447,  -447,  -447,  -447,  -447,  -447,  -447,   669,   486,  -447,
     669,  -447,   669,  -447,  -447,  -447,  -447
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -447,   -48,  -447,  -447,   501,  -447,  -447,  -447,  -447,  -447,
    -447,  -447,  -447,  -447,  -447,   -25,  -447,  -149,   133,   139,
    -101,   150,   368,   369,   355,   366,   367,  -447,   -44,   -37,
    -447,  -119,   -28,  -447,   -54,   -61,  -447,   -27,   -99,  -447,
     341,  -447,  -447,   502,  -199,  -447,  -447,   122,  -447,  -447,
    -447,  -161,  -447,   277,  -447,    54,   174,  -171,  -446,  -447,
     243,     4,  -447,  -368,  -447,  -447,  -447,   -79,  -447,   384,
     -53,   -65,  -152,   -38,  -196,  -107,   -74,  -447,    73,  -447,
     477,    38,   -62,  -447,  -447,   615,  -447
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -6
static const yytype_int16 yytable[] =
{
     120,    98,   120,   238,    41,   120,   120,   303,   174,   127,
     127,   115,   324,   115,   266,   171,   115,   115,   205,   333,
     217,   229,   181,   205,   275,   310,    78,   164,   164,    78,
     256,   179,   517,   469,    78,   353,   107,   454,    43,   124,
     122,    63,   173,   211,   168,    64,   151,   151,   212,   120,
     120,    41,   120,   124,   198,   120,   120,   120,    66,   206,
     115,   115,   332,   115,   183,    68,   115,   115,   115,    70,
      78,    73,    74,   114,   195,   120,    99,    75,    76,   127,
      77,   192,    71,   184,   517,    43,   115,   197,    41,   215,
     361,   362,   363,   196,   207,   242,   243,   257,   205,   193,
     229,   510,   511,   229,    78,   100,    79,   262,   205,    79,
     220,   171,   223,   224,    79,   300,    84,   359,    80,   390,
     306,   324,   311,    80,   128,   167,   323,   151,   199,   305,
     200,    65,   120,   316,   263,    81,   113,    72,   379,   274,
     427,   302,   120,   115,    67,   368,   369,   370,   371,   171,
      79,    69,   317,   115,   120,   164,   120,   120,   127,    80,
     127,   127,   403,   387,    78,   115,   164,   115,   115,   199,
      78,   315,   353,   438,   151,   215,   431,   331,   353,   353,
     101,    41,   322,   443,   385,   151,    41,   214,   339,   203,
     333,   410,   213,    80,   230,   214,   455,   471,   358,   320,
     400,    80,   239,   102,   321,   451,   171,   240,   241,   175,
     262,   106,   176,   270,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   386,   103,   389,   300,   104,   308,   396,   232,
     233,   234,   164,   121,   385,   185,   480,   214,   186,   213,
      79,   270,   214,   304,   105,   309,   304,   108,   408,    80,
     423,   151,   420,   171,   302,   109,   187,   262,   313,   123,
     171,   110,   478,   336,   164,   337,   338,   479,   424,   466,
     467,   244,   245,   111,     9,    10,    11,   491,   473,   334,
     426,   430,   335,   151,   235,   436,   124,   236,   442,   237,
     413,    41,   414,   170,    89,    90,   530,   516,   250,   251,
      -5,   531,   174,   188,   448,   189,   449,   481,   465,    80,
      91,    92,    93,    94,    95,   262,   352,   353,   190,   151,
     475,   130,   131,   132,   191,   134,   383,   384,   210,   470,
     452,   453,   218,   388,   483,   484,   540,   386,   246,   247,
     248,   249,   231,   461,   507,   353,   462,   508,   353,   516,
     512,   353,   527,   528,   548,   353,   262,   550,   353,   164,
     552,   353,   270,   221,   171,   364,   365,   225,   262,   252,
     302,   253,   120,   366,   367,   476,   127,   254,   151,   203,
     534,   536,   538,   115,   486,   513,   255,   487,   258,   259,
     372,   373,   490,   260,   261,    41,   496,   312,   318,   355,
     354,   503,   360,   302,   380,   382,   502,   381,   398,   391,
     270,   392,   399,   270,   397,   401,   262,   404,   532,   533,
     151,   407,   405,   539,   421,   518,   428,   429,   432,   409,
     406,   302,   433,    48,    49,    50,    51,    52,    53,    54,
      55,   444,   178,    56,   523,    57,   549,   524,   551,   445,
     446,   459,   447,   120,     2,   456,   460,   127,   553,   463,
     464,   555,   468,   556,   115,   472,   474,   477,   485,   497,
     302,   488,   489,   276,   130,   131,   132,   133,   134,   543,
       2,   492,   545,   302,   277,   493,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   135,   136,   450,   137,
     138,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   504,
      27,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   505,    27,    28,    29,    30,
     139,    31,   506,   140,   509,   514,   519,   526,   529,   177,
     288,   141,   142,   143,   144,   145,   146,   520,   276,   130,
     131,   132,   133,   134,   289,     2,   521,   522,   525,   277,
     541,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   135,   136,   542,   137,   138,   547,   194,   554,   376,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     374,   377,   375,   378,   501,   209,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     544,    27,    28,    29,    30,   139,    31,   425,   140,   458,
     307,   482,    88,     0,   177,   411,   141,   142,   143,   144,
     145,   146,   350,   129,   130,   131,   132,   133,   134,   289,
       2,   412,     0,     0,     0,     0,     0,     0,     0,     0,
     276,   130,   131,   132,   133,   134,   135,   136,     0,   137,
     138,   277,     0,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   135,   136,     0,   137,   138,     0,     0,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,    29,    30,
     139,    31,     0,   140,     0,     0,     0,     0,     0,     0,
       0,   141,   142,   143,   144,   145,   146,   139,     0,     0,
     140,     0,     0,     0,   289,     0,   177,     0,   141,   142,
     143,   144,   145,   146,   129,   130,   131,   132,   133,   134,
       0,   289,     2,     0,     0,     0,     0,     0,     0,     0,
       0,   129,   130,   131,   132,   133,   134,   135,   136,     0,
     137,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,   136,     0,   137,   138,     0,
       0,     0,     0,     0,    87,     0,     0,     1,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,     0,
       0,   139,     2,    31,   140,     0,     0,     0,     0,     0,
       1,     0,   141,   142,   143,   144,   145,   146,   139,     0,
       0,   140,     0,     0,     0,   402,     0,     0,     0,   141,
     142,   143,   144,   145,   146,     2,     0,     0,     0,     0,
       0,     0,   289,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,    27,    28,
      29,    30,     0,    31,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,    27,    28,    29,    30,     0,    31,   129,   130,   131,
     132,   133,   134,     0,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,   136,     0,   137,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,     0,     0,     0,   139,     0,     0,   140,     0,     0,
       0,     0,     0,     0,     0,   141,   142,   143,   144,   145,
     146,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,    29,    30,
       0,    31,   129,   130,   131,   132,   133,   134,     0,   177,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   178,     0,   135,   136,     0,   137,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,   130,   131,   132,
     133,   134,   271,     0,     0,     0,     9,    10,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,   138,     0,   170,     0,     0,     0,   139,
       0,     0,   140,     0,     0,     0,   272,     0,     0,     0,
     141,   273,   143,   144,   145,   146,   328,     0,     0,     0,
       9,    10,    11,     0,     0,   129,   130,   131,   132,   133,
     134,     0,     0,     0,     0,     0,     0,     0,     0,   170,
       0,     0,     0,   139,     0,     0,   140,     0,   135,   136,
     329,   137,   138,     0,   141,   330,   143,   144,   145,   146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
     130,   131,   132,   133,   134,   393,     0,     0,     0,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   135,   136,     0,   137,   138,     0,   170,     0,
       0,     0,   139,     0,     0,   140,     0,     0,     0,   394,
       0,     0,     0,   141,   395,   143,   144,   145,   146,   434,
       0,     0,     0,     9,    10,    11,     0,     0,   129,   130,
     131,   132,   133,   134,     0,     0,     0,     0,     0,     0,
       0,     0,   170,     0,     0,     0,   139,     0,     0,   140,
       0,   135,   136,   435,   137,   138,     0,   141,   142,   143,
     144,   145,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,   130,   131,   132,   133,   134,   439,     0,
       0,     0,     9,    10,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   135,   136,     0,   137,   138,
       0,   170,     0,     0,     0,   139,     0,     0,   140,     0,
       0,     0,   440,     0,     0,     0,   141,   441,   143,   144,
     145,   146,   494,     0,     0,     0,     9,    10,    11,     0,
       0,   129,   130,   131,   132,   133,   134,     0,     0,     0,
       0,     0,     0,     0,     0,   170,     0,     0,     0,   139,
       0,     0,   140,     0,   135,   136,   495,   137,   138,     0,
     141,   142,   143,   144,   145,   146,   129,   130,   131,   132,
     133,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,     0,   135,
     136,     0,   137,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,     0,     0,     0,   139,     0,
       0,   140,   129,   130,   131,   132,   133,   134,     0,   141,
     142,   143,   144,   145,   146,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   135,   136,     0,   137,   138,
       0,     0,     0,   139,     0,     0,   140,     0,     0,   413,
       0,   414,   301,   515,   141,   142,   143,   144,   145,   146,
     129,   130,   131,   132,   133,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,   136,     0,   137,   138,     0,   139,
       0,     0,   140,     0,     0,   413,     0,   414,   301,   546,
     141,   142,   143,   144,   145,   146,   129,   130,   131,   132,
     133,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,   138,     0,     0,     0,   139,     0,     0,
     140,     0,     0,   413,     0,   414,   301,     0,   141,   142,
     143,   144,   145,   146,   129,   130,   131,   132,   133,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,   136,     0,
     137,   138,     0,   139,     0,     0,   140,     0,     0,     0,
       0,     0,   301,     0,   141,   142,   143,   144,   145,   146,
     129,   130,   131,   132,   133,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,   136,     0,   137,   138,     0,     0,
       0,   139,     0,     0,   140,   356,   129,   130,   131,   132,
     133,   134,   141,   142,   143,   144,   145,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,   138,     0,     0,     0,     0,     0,     0,
       0,   129,   130,   131,   132,   133,   134,   139,     0,     0,
     140,     0,     0,     0,     0,     0,   450,     0,   141,   142,
     143,   144,   145,   146,   135,   136,     0,   137,   138,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,   133,   134,   139,     0,     0,   140,   535,     0,     0,
       0,     0,     0,     0,   141,   142,   143,   144,   145,   146,
     135,   136,     0,   137,   138,     0,     0,     0,     0,     0,
       0,     0,   129,   130,   131,   132,   133,   134,   139,     0,
       0,   140,   537,     0,     0,     0,     0,     0,     0,   141,
     142,   143,   144,   145,   146,   135,   136,     0,   137,   138,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   130,
     131,   132,   133,   134,   139,     0,     0,   140,     0,     0,
       2,     0,     0,     0,     0,   141,   142,   143,   144,   145,
     146,   135,   136,     0,   137,   138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   139,
       0,     0,   219,     0,     0,     0,     0,     0,     0,    78,
     141,   142,   143,   144,   145,   146,     2,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   139,    27,     0,   222,     0,
       0,     0,     0,     0,     0,     0,   141,   142,   143,   144,
     145,   146,     0,     0,     0,     0,     0,     2,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,    29,    30,     0,     0,     0,   385,
     325,     0,   214,     0,     0,     0,     0,     0,    80,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   264,    27,    28,    29,    30,     0,     0,     2,
     213,   325,     0,   214,     0,     0,     0,     0,     0,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     2,    27,    28,    29,    30,     0,
       0,     0,     0,   265,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,    27,     0,     0,     0,     0,    31,     2,
       0,     0,     0,     0,     0,     0,     0,   204,     0,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      27,     0,     0,     2,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,   208,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,    27,     0,     0,     0,     0,
      31,     0,     0,     2,     0,     0,     0,     0,     0,   314,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
       0,     0,     0,     0,    31,     0,     0,     0,     0,     0,
       0,     2,     0,   319,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,    27,
      28,    29,    30,     0,    31,     2,     0,     0,     0,     0,
       0,     0,   177,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     2,    27,    28,    29,
      30,     0,     0,     0,     0,   437,     0,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     457,    27,    28,    29,    30,     0,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,    27,    28,    29,    30
};

static const yytype_int16 yycheck[] =
{
      65,    49,    67,   152,     0,    70,    71,   178,    82,    70,
      71,    65,   211,    67,   175,    80,    70,    71,   117,   215,
     127,   140,    84,   122,   176,     4,    21,    71,    72,    21,
      52,    84,   478,   401,    21,   103,   100,   105,     0,    21,
      67,     3,    80,   103,    72,    21,    71,    72,   108,   114,
     115,    47,   117,    21,   115,   120,   121,   122,    21,   120,
     114,   115,   214,   117,   103,    21,   120,   121,   122,   101,
      21,    33,    34,   107,   103,   140,     4,    39,    40,   140,
      42,     7,   101,   122,   530,    47,   140,   114,    84,   127,
     239,   240,   241,   122,   121,   111,   112,   119,   197,    25,
     219,   469,   470,   222,    21,     4,   101,   172,   207,   101,
     135,   176,   137,   138,   101,   177,    43,   236,   110,   271,
     182,   320,   101,   110,    70,    71,   108,   152,   120,   182,
     122,   107,   197,   103,   172,   122,    63,   101,   257,   176,
     108,   178,   207,   197,   107,   246,   247,   248,   249,   214,
     101,   107,   122,   207,   219,   199,   221,   222,   219,   110,
     221,   222,   281,   270,    21,   219,   210,   221,   222,   120,
      21,   199,   103,   334,   199,   213,   328,   214,   103,   103,
       4,   177,   210,   335,   101,   210,   182,   104,   225,   116,
     386,   122,   101,   110,   140,   104,   120,   122,   235,   103,
     279,   110,   110,     4,   108,   354,   271,   115,   116,   101,
     275,     4,   104,   175,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   270,     4,   271,   297,     7,     7,   275,    46,
      47,    48,   286,   107,   101,     4,   417,   104,     7,   101,
     101,   213,   104,   180,    25,    25,   183,   100,   286,   110,
       7,   286,   310,   328,   301,   100,    25,   332,   195,   107,
     335,   100,   103,   219,   318,   221,   222,   108,    25,   398,
     399,    49,    50,   100,    75,    76,    77,   439,   407,   101,
     318,   328,   104,   318,   101,   332,    21,   104,   335,   106,
     104,   297,   106,    94,     6,     7,   103,   478,    57,    58,
     100,   108,   386,    21,   351,    21,   353,   121,   397,   110,
      22,    23,    24,    25,    26,   390,   102,   103,    21,   354,
     409,    22,    23,    24,    21,    26,   102,   103,   121,   401,
     102,   103,   102,   270,   102,   103,   517,   385,    53,    54,
      55,    56,    25,   390,   102,   103,   393,   102,   103,   530,
     102,   103,   102,   103,   102,   103,   431,   102,   103,   413,
     102,   103,   334,   101,   439,   242,   243,   101,   443,   109,
     417,   117,   447,   244,   245,   413,   447,   118,   413,   316,
     509,   510,   511,   447,   431,   474,    51,   434,   102,   102,
     250,   251,   439,   103,   102,   401,   443,     4,   120,    21,
     102,   455,    21,   450,    25,   103,   453,   102,   101,   105,
     382,   105,   101,   385,   120,   101,   491,    21,   507,   508,
     455,   101,   122,   512,    21,   483,   102,   102,   105,   120,
     122,   478,   105,     8,     9,    10,    11,    12,    13,    14,
      15,   102,   121,    18,   491,    20,   535,   494,   537,   102,
     102,    21,   103,   528,    28,   102,   105,   528,   547,   105,
     105,   550,    34,   552,   528,   122,   120,    21,   105,    43,
     517,   105,   102,    21,    22,    23,    24,    25,    26,   526,
      28,   105,   529,   530,    32,   105,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,   107,    47,
      48,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,   122,
      94,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,   105,    94,    95,    96,    97,
      98,    99,   105,   101,   101,   105,    21,   120,   120,   107,
     108,   109,   110,   111,   112,   113,   114,   105,    21,    22,
      23,    24,    25,    26,   122,    28,   105,   105,   105,    32,
     105,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,   105,    47,    48,    33,   106,   122,   254,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     252,   255,   253,   256,   450,   123,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
     528,    94,    95,    96,    97,    98,    99,   316,   101,   382,
     183,   418,    47,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   121,    21,    22,    23,    24,    25,    26,   122,
      28,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    44,    45,    -1,    47,
      48,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    48,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,    98,    -1,    -1,
     101,    -1,    -1,    -1,   122,    -1,   107,    -1,   109,   110,
     111,   112,   113,   114,    21,    22,    23,    24,    25,    26,
      -1,   122,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    44,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,     0,    -1,    -1,     3,    -1,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    94,    -1,
      -1,    98,    28,    99,   101,    -1,    -1,    -1,    -1,    -1,
       3,    -1,   109,   110,   111,   112,   113,   114,    98,    -1,
      -1,   101,    -1,    -1,    -1,   122,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,    28,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    94,    95,
      96,    97,    -1,    99,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      -1,    94,    95,    96,    97,    -1,    99,    21,    22,    23,
      24,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    -1,
      94,    -1,    -1,    -1,    98,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    -1,    94,    95,    96,    97,
      -1,    99,    21,    22,    23,    24,    25,    26,    -1,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,    -1,    44,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    71,    -1,    -1,    -1,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    47,    48,    -1,    94,    -1,    -1,    -1,    98,
      -1,    -1,   101,    -1,    -1,    -1,   105,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,    71,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    98,    -1,    -1,   101,    -1,    44,    45,
     105,    47,    48,    -1,   109,   110,   111,   112,   113,   114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    71,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    47,    48,    -1,    94,    -1,
      -1,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,   105,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,    71,
      -1,    -1,    -1,    75,    76,    77,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    -1,    98,    -1,    -1,   101,
      -1,    44,    45,   105,    47,    48,    -1,   109,   110,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    71,    -1,
      -1,    -1,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    47,    48,
      -1,    94,    -1,    -1,    -1,    98,    -1,    -1,   101,    -1,
      -1,    -1,   105,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,    71,    -1,    -1,    -1,    75,    76,    77,    -1,
      -1,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    98,
      -1,    -1,   101,    -1,    44,    45,   105,    47,    48,    -1,
     109,   110,   111,   112,   113,   114,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    -1,    44,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    98,    -1,
      -1,   101,    21,    22,    23,    24,    25,    26,    -1,   109,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    47,    48,
      -1,    -1,    -1,    98,    -1,    -1,   101,    -1,    -1,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    47,    48,    -1,    98,
      -1,    -1,   101,    -1,    -1,   104,    -1,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    47,    48,    -1,    -1,    -1,    98,    -1,    -1,
     101,    -1,    -1,   104,    -1,   106,   107,    -1,   109,   110,
     111,   112,   113,   114,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      47,    48,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,   111,   112,   113,   114,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    47,    48,    -1,    -1,
      -1,    98,    -1,    -1,   101,   102,    21,    22,    23,    24,
      25,    26,   109,   110,   111,   112,   113,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    98,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,
     111,   112,   113,   114,    44,    45,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    98,    -1,    -1,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
      44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    98,    -1,
      -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,    44,    45,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    98,    -1,    -1,   101,    -1,    -1,
      28,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,    44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    21,
     109,   110,   111,   112,   113,   114,    28,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    98,    94,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,    28,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    -1,    94,    95,    96,    97,    -1,    -1,    -1,   101,
     102,    -1,   104,    -1,    -1,    -1,    -1,    -1,   110,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    21,    94,    95,    96,    97,    -1,    -1,    28,
     101,   102,    -1,   104,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    28,    94,    95,    96,    97,    -1,
      -1,    -1,    -1,   102,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    94,    -1,    -1,    -1,    -1,    99,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    -1,
      94,    -1,    -1,    28,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    -1,    94,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,   108,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    -1,    94,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,   108,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    -1,    94,
      95,    96,    97,    -1,    99,    28,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    28,    94,    95,    96,
      97,    -1,    -1,    -1,    -1,   102,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    -1,    94,    95,    96,    97
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    94,    95,    96,
      97,    99,   129,   156,   157,   159,   164,   165,   171,   172,
     173,   184,   194,   204,   205,   207,   208,   209,     8,     9,
      10,    11,    12,    13,    14,    15,    18,    20,   125,   130,
     131,   132,   133,   204,    21,   107,    21,   107,    21,   107,
     101,   101,   101,   204,   204,   204,   204,   204,    21,   101,
     110,   122,   196,   199,   201,   202,   203,     0,   208,     6,
       7,    22,    23,    24,    25,    26,   124,   128,   124,     4,
       4,     4,     4,     4,     7,    25,     4,   100,   100,   100,
     100,   100,   200,   201,   107,   157,   158,   160,   161,   184,
     194,   107,   160,   107,    21,   166,   167,   158,   178,    21,
      22,    23,    24,    25,    26,    44,    45,    47,    48,    98,
     101,   109,   110,   111,   112,   113,   114,   127,   134,   135,
     136,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   155,   168,   178,   155,   201,
      94,   194,   195,   196,   199,   101,   104,   107,   121,   193,
     204,   205,   206,   103,   122,     4,     7,    25,    21,    21,
      21,    21,     7,    25,   127,   103,   122,   160,   158,   120,
     122,   162,   163,   201,   108,   161,   158,   160,   108,   166,
     121,   103,   108,   101,   104,   196,   197,   198,   102,   101,
     138,   101,   101,   138,   138,   101,   138,   151,   152,   154,
     178,    25,    46,    47,    48,   101,   104,   106,   140,   110,
     115,   116,   111,   112,    49,    50,    53,    54,    55,    56,
      57,    58,   109,   117,   118,    51,    52,   119,   102,   102,
     103,   102,   194,   196,    21,   102,   174,   175,   176,   177,
     204,    71,   105,   110,   152,   195,    21,    32,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   108,   122,
     154,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     205,   107,   152,   180,   201,   193,   205,   203,     7,    25,
       4,   101,     4,   201,   108,   155,   103,   122,   120,   108,
     103,   108,   155,   108,   167,   102,   174,   198,    71,   105,
     110,   152,   195,   197,   101,   104,   178,   178,   178,   152,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     121,   153,   102,   103,   102,    21,   102,   137,   152,   154,
      21,   140,   140,   140,   141,   141,   142,   142,   143,   143,
     143,   143,   144,   144,   145,   146,   147,   148,   149,   154,
      25,   102,   103,   102,   103,   101,   196,   198,   201,   152,
     195,   105,   105,    71,   105,   110,   152,   120,   101,   101,
     190,   101,   122,   154,    21,   122,   122,   101,   155,   120,
     122,   108,   192,   104,   106,   179,   180,   181,   182,   183,
     124,    21,   126,     7,    25,   163,   155,   108,   102,   102,
     152,   195,   105,   105,    71,   105,   152,   102,   174,    71,
     105,   110,   152,   195,   102,   102,   102,   103,   152,   152,
     107,   140,   102,   103,   105,   120,   102,    93,   176,    21,
     105,   152,   152,   105,   105,   190,   154,   154,    34,   186,
     205,   122,   122,   154,   120,   190,   155,    21,   103,   108,
     180,   121,   183,   102,   103,   105,   152,   152,   105,   102,
     152,   195,   105,   105,    71,   105,   152,    43,   169,   170,
     178,   179,   152,   151,   122,   105,   105,   102,   102,   101,
     186,   186,   102,   190,   105,   108,   180,   181,   124,    21,
     105,   105,   105,   152,   152,   105,   120,   102,   103,   120,
     103,   108,   190,   190,   154,   102,   154,   102,   154,   190,
     180,   105,   105,   152,   170,   152,   108,    33,   102,   190,
     102,   190,   102,   190,   122,   190,   190
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



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

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

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
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
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
        case 15:
#line 176 "./src//parser.y"
    {;}
    break;

  case 16:
#line 177 "./src//parser.y"
    {;}
    break;

  case 17:
#line 178 "./src//parser.y"
    {;}
    break;

  case 18:
#line 179 "./src//parser.y"
    {;}
    break;

  case 19:
#line 180 "./src//parser.y"
    {;}
    break;

  case 20:
#line 184 "./src//parser.y"
    {;}
    break;

  case 21:
#line 185 "./src//parser.y"
    {;}
    break;

  case 22:
#line 186 "./src//parser.y"
    {;}
    break;

  case 23:
#line 187 "./src//parser.y"
    {;}
    break;

  case 24:
#line 188 "./src//parser.y"
    {;}
    break;

  case 25:
#line 189 "./src//parser.y"
    {;}
    break;

  case 26:
#line 193 "./src//parser.y"
    { ppp_symboltable_delete(SYMBOLKIND_MACRO, (yyvsp[(3) - (3)].v_str)); ;}
    break;

  case 27:
#line 197 "./src//parser.y"
    { (yyval.v_symbol) = ppp_c_define((yyvsp[(3) - (3)].v_str), NULL, NULL); ;}
    break;

  case 28:
#line 198 "./src//parser.y"
    { (yyval.v_symbol) = ppp_c_define((yyvsp[(3) - (4)].v_str), NULL, NULL); ;}
    break;

  case 29:
#line 199 "./src//parser.y"
    { (yyval.v_symbol) = ppp_c_define((yyvsp[(3) - (5)].v_str), NULL,   (yyvsp[(5) - (5)].v_str)); ;}
    break;

  case 30:
#line 200 "./src//parser.y"
    { (yyval.v_symbol) = ppp_c_define((yyvsp[(3) - (6)].v_str), (char const**)(yyvsp[(5) - (6)].v_strarr), NULL); ;}
    break;

  case 31:
#line 201 "./src//parser.y"
    { (yyval.v_symbol) = ppp_c_define((yyvsp[(3) - (7)].v_str), (char const**)(yyvsp[(5) - (7)].v_strarr),   (yyvsp[(7) - (7)].v_str)); ;}
    break;

  case 32:
#line 205 "./src//parser.y"
    { ppp_debug("parameter list begin: %s", (yyvsp[(1) - (1)].v_str)); (yyval.v_strarr) = c_strarrcreate(1, c_strdup((yyvsp[(1) - (1)].v_str))); ;}
    break;

  case 33:
#line 206 "./src//parser.y"
    { ppp_debug("parameter list next:  %s", (yyvsp[(3) - (3)].v_str)); (yyval.v_strarr) = c_strarrappend(&((yyvsp[(1) - (3)].v_strarr)), (char const*[2]){ c_strdup((yyvsp[(3) - (3)].v_str)), NULL }); ;}
    break;

  case 34:
#line 210 "./src//parser.y"
    { ppp_c_include((yyvsp[(2) - (2)].v_str)); ;}
    break;

  case 35:
#line 211 "./src//parser.y"
    { ppp_c_include((yyvsp[(2) - (2)].v_str)); ;}
    break;

  case 36:
#line 212 "./src//parser.y"
    { ppp_c_include((yyvsp[(3) - (3)].v_str)); ;}
    break;

  case 37:
#line 213 "./src//parser.y"
    { ppp_c_include((yyvsp[(3) - (3)].v_str)); ;}
    break;

  case 38:
#line 217 "./src//parser.y"
    { ppp_c_line(           0,         NULL); ;}
    break;

  case 39:
#line 218 "./src//parser.y"
    { ppp_c_line(           0,         NULL); ;}
    break;

  case 40:
#line 219 "./src//parser.y"
    { ppp_c_line(c_strtou((yyvsp[(3) - (3)].v_str)),         NULL); ;}
    break;

  case 41:
#line 220 "./src//parser.y"
    { ppp_c_line(c_strtou((yyvsp[(3) - (5)].v_str)), c_strdup((yyvsp[(5) - (5)].v_str))); ;}
    break;

  case 42:
#line 221 "./src//parser.y"
    { ppp_c_line(c_strtou((yyvsp[(3) - (5)].v_str)), c_strdup((yyvsp[(5) - (5)].v_str))); ;}
    break;

  case 153:
#line 421 "./src//parser.y"
    { ppp_symboltable_create(&(s_symbol){ .kind=SYMBOLKIND_STRUCT, .name=c_strdup("") }); ;}
    break;

  case 154:
#line 422 "./src//parser.y"
    { ppp_symboltable_create(&(s_symbol){ .kind=SYMBOLKIND_STRUCT, .name=c_strdup((yyvsp[(2) - (5)].v_str)) }); ;}
    break;

  case 155:
#line 423 "./src//parser.y"
    { ppp_symboltable_create(&(s_symbol){ .kind=SYMBOLKIND_STRUCT, .name=c_strdup((yyvsp[(2) - (2)].v_str)) }); ;}
    break;

  case 166:
#line 450 "./src//parser.y"
    { ppp_symboltable_create(&(s_symbol){ .kind=SYMBOLKIND_UNION, .name=c_strdup("") }); ;}
    break;

  case 167:
#line 451 "./src//parser.y"
    { ppp_symboltable_create(&(s_symbol){ .kind=SYMBOLKIND_UNION, .name=c_strdup((yyvsp[(2) - (5)].v_str)) }); ;}
    break;

  case 168:
#line 452 "./src//parser.y"
    { ppp_symboltable_create(&(s_symbol){ .kind=SYMBOLKIND_UNION, .name=c_strdup((yyvsp[(2) - (2)].v_str)) }); ;}
    break;

  case 169:
#line 458 "./src//parser.y"
    { ppp_symboltable_create(&(s_symbol){ .kind=SYMBOLKIND_ENUM, .name=c_strdup("") }); ;}
    break;

  case 170:
#line 459 "./src//parser.y"
    { ppp_symboltable_create(&(s_symbol){ .kind=SYMBOLKIND_ENUM, .name=c_strdup("") }); ;}
    break;

  case 171:
#line 460 "./src//parser.y"
    { ppp_symboltable_create(&(s_symbol){ .kind=SYMBOLKIND_ENUM, .name=c_strdup((yyvsp[(2) - (5)].v_str)) }); ;}
    break;

  case 172:
#line 461 "./src//parser.y"
    { ppp_symboltable_create(&(s_symbol){ .kind=SYMBOLKIND_ENUM, .name=c_strdup((yyvsp[(2) - (6)].v_str)) }); ;}
    break;

  case 173:
#line 462 "./src//parser.y"
    { ppp_symboltable_create(&(s_symbol){ .kind=SYMBOLKIND_ENUM, .name=c_strdup((yyvsp[(2) - (2)].v_str)) }); ;}
    break;

  case 309:
#line 731 "./src//parser.y"
    {  ;}
    break;

  case 310:
#line 732 "./src//parser.y"
    {  ;}
    break;

  case 311:
#line 733 "./src//parser.y"
    {  ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2708 "./src/gen//y.tab.c"
      default: break;
    }
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

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
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
		 yytoken, &yylval, &yylloc);
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


#line 757 "./src//parser.y"


void yyerror(char const* str)
{
	ppp_error("%s", str);
}

