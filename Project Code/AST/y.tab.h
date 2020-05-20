/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_IMPORT = 258,
    T_CLASS = 259,
    T_PUBLIC = 260,
    T_PRIVATE = 261,
    T_PROTECTED = 262,
    T_STATIC = 263,
    T_FINAL = 264,
    T_VOID = 265,
    T_INT = 266,
    T_CHAR = 267,
    T_DOUBLE = 268,
    T_IF = 269,
    T_ELSE = 270,
    T_SWITCH = 271,
    T_CASE = 272,
    T_DEFAULT = 273,
    T_BREAK = 274,
    T_CONTINUE = 275,
    T_RETURN = 276,
    T_NEW = 277,
    T_INC = 278,
    T_DEC = 279,
    T_SHA = 280,
    T_SHS = 281,
    T_SHM = 282,
    T_SHD = 283,
    T_SHAND = 284,
    T_SHO = 285,
    T_SHC = 286,
    T_SHMOD = 287,
    T_OR = 288,
    T_AND = 289,
    T_EQ = 290,
    T_NE = 291,
    T_GTE = 292,
    T_LTE = 293,
    T_LS = 294,
    T_RS = 295,
    T_NUM = 296,
    T_ID = 297,
    T_STRING = 298,
    T_ARGS = 299,
    T_PRINT = 300
  };
#endif
/* Tokens.  */
#define T_IMPORT 258
#define T_CLASS 259
#define T_PUBLIC 260
#define T_PRIVATE 261
#define T_PROTECTED 262
#define T_STATIC 263
#define T_FINAL 264
#define T_VOID 265
#define T_INT 266
#define T_CHAR 267
#define T_DOUBLE 268
#define T_IF 269
#define T_ELSE 270
#define T_SWITCH 271
#define T_CASE 272
#define T_DEFAULT 273
#define T_BREAK 274
#define T_CONTINUE 275
#define T_RETURN 276
#define T_NEW 277
#define T_INC 278
#define T_DEC 279
#define T_SHA 280
#define T_SHS 281
#define T_SHM 282
#define T_SHD 283
#define T_SHAND 284
#define T_SHO 285
#define T_SHC 286
#define T_SHMOD 287
#define T_OR 288
#define T_AND 289
#define T_EQ 290
#define T_NE 291
#define T_GTE 292
#define T_LTE 293
#define T_LS 294
#define T_RS 295
#define T_NUM 296
#define T_ID 297
#define T_STRING 298
#define T_ARGS 299
#define T_PRINT 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
