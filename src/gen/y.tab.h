/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 108 "src/parser.y"
{
	int              v_int;
	float            v_float;
	char*            v_str;
	char**           v_strarr;
	s_symbol         v_symbol;
	s_symbol_field   v_symbol_field;
}
/* Line 1529 of yacc.c.  */
#line 256 "gen/y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;
