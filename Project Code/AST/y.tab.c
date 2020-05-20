/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "AST.y" /* yacc.c:339  */

	#include <stdlib.h>
	#include <string.h>
	#include <stdio.h>
	#include "header.c"
	FILE *yyin;
	
	#define YYSTYPE YACC
	int yylex();
	char* type;
	int err = 0;
	FILE* fp;
	
	int scope = 0;
	

	AST* ast;
	TREE* nptr=NULL;

	TREE* newnode(char*,TREE*,TREE*,TREE*,TREE*);
	TREE* newleaf(char*,char*);
	void display(TREE*);
	void yyerror(char* s);
	void printBT(char* prefix, TREE* node, int isLeft);
	

#line 93 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 234 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   284

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    65,    59,     2,
      51,    52,    47,    62,    53,    63,    46,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
      60,    56,    61,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,    57,    50,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    30,    30,    31,    33,    34,    35,    36,    36,    36,
      37,    38,    39,    40,    41,    41,    42,    42,    43,    44,
      44,    44,    45,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    47,    47,    47,    48,    48,
      49,    49,    50,    50,    51,    51,    52,    52,    53,    53,
      53,    54,    54,    55,    55,    56,    56,    57,    57,    58,
      59,    59,    59,    60,    60,    61,    62,    62,    62,    62,
      62,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    67,    67,    67
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IMPORT", "T_CLASS", "T_PUBLIC",
  "T_PRIVATE", "T_PROTECTED", "T_STATIC", "T_FINAL", "T_VOID", "T_INT",
  "T_CHAR", "T_DOUBLE", "T_IF", "T_ELSE", "T_SWITCH", "T_CASE",
  "T_DEFAULT", "T_BREAK", "T_CONTINUE", "T_RETURN", "T_NEW", "T_INC",
  "T_DEC", "T_SHA", "T_SHS", "T_SHM", "T_SHD", "T_SHAND", "T_SHO", "T_SHC",
  "T_SHMOD", "T_OR", "T_AND", "T_EQ", "T_NE", "T_GTE", "T_LTE", "T_LS",
  "T_RS", "T_NUM", "T_ID", "T_STRING", "T_ARGS", "T_PRINT", "'.'", "'*'",
  "';'", "'{'", "'}'", "'('", "')'", "','", "'['", "']'", "'='", "'|'",
  "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'/'", "'%'", "$accept",
  "Start", "Import_S", "Class_declaration", "CLASSNAME", "Class_body",
  "Global_variable_declaration", "Method_declaration", "Modifier", "W1",
  "W2", "W3", "Parameters", "List_of_parameters", "Block", "S", "H", "W",
  "SwitchBlock", "SwitchLabel", "Variable_declaration", "Identifier_list",
  "Array_declaration", "B", "BB", "BNUM", "Array_initialisation", "K", "V",
  "R", "Type", "Assignment", "Assignment_operator", "Operators",
  "Expression", "Expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    46,    42,    59,   123,
     125,    40,    41,    44,    91,    93,    61,   124,    94,    38,
      60,    62,    43,    45,    47,    37
};
# endif

#define YYPACT_NINF -146

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-146)))

#define YYTABLE_NINF -104

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      80,   -33,  -146,    33,    80,  -146,    10,    36,     4,  -146,
    -146,    42,  -146,    50,    44,  -146,    43,  -146,  -146,    49,
      91,    52,    47,    91,    91,     9,    53,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,   -14,  -146,  -146,    57,
       6,    17,     9,  -146,    48,   219,    14,     6,    70,    63,
    -146,   -25,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,
    -146,     6,    21,    64,    66,  -146,    72,    69,    71,  -146,
    -146,     6,    76,   222,  -146,     9,    81,    66,  -146,    79,
      77,    78,    82,    83,     6,  -146,  -146,    88,    90,    85,
       6,   179,   183,    97,     0,   179,   138,  -146,  -146,  -146,
     179,     6,     6,   179,   179,   110,     6,  -146,  -146,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,  -146,   179,
    -146,   -17,   179,   116,     6,    25,  -146,  -146,     6,  -146,
     120,   121,  -146,  -146,   179,   122,  -146,     9,  -146,   -17,
    -146,   123,  -146,  -146,   128,  -146,  -146,   127,    93,   134,
    -146,   137,   130,   151,   -17,  -146,  -146,   136,  -146,    45,
     179,    46,  -146,  -146,  -146,    72,  -146,     6,  -146,   154,
     179,  -146,  -146,  -146,   133,  -146,  -146,   179,    45,   130,
    -146,  -146,  -146
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    13,     0,     0,     3,     0,    15,     0,     1,
       2,     0,    14,    17,     0,     6,     0,    16,    12,     0,
       9,     0,     0,     9,     9,     0,     0,     5,     7,     8,
      70,    66,    68,    67,    69,    10,     0,     4,   102,   103,
       0,    50,     0,   103,     0,    99,     0,     0,     0,     0,
      18,     0,   101,    81,    82,    86,    87,    91,    90,    92,
      93,    96,    83,    84,    85,    88,    89,    94,    95,    97,
      98,     0,    50,     0,    50,    47,     0,    19,     0,   100,
      49,     0,     0,     0,    11,     0,     0,    50,    46,     0,
       0,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    48,
       0,     0,     0,     0,     0,     0,     0,    22,    35,    39,
      31,    73,    74,    75,    76,    77,    78,    79,    80,     0,
      72,     0,     0,     0,     0,    50,    23,    38,     0,    36,
       0,     0,    24,    25,     0,     0,    32,     0,    63,     0,
      59,    60,    64,    33,    54,    51,    52,     0,     0,     0,
      29,     0,     0,     0,     0,    53,    71,     0,    26,    43,
       0,     0,    62,    65,    61,     0,    27,     0,    45,     0,
       0,    34,    57,    58,     0,    28,    44,     0,    43,    55,
      30,    42,    56
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,   201,  -146,  -146,  -146,    67,  -146,  -146,    39,  -146,
    -146,  -146,   131,  -146,  -145,   -98,  -146,   100,    19,  -146,
     192,   -34,  -146,  -129,    29,  -146,  -146,  -141,  -146,  -146,
     -24,  -146,   113,  -146,   -45,   -36
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    16,    22,    23,    24,    25,     7,
      13,    18,    49,    50,    84,    98,    99,   100,   179,   180,
     101,    48,   102,   134,   172,   184,   103,   150,   151,   152,
     104,   105,   131,    71,    44,   106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    36,    74,   120,    45,   147,   156,   136,   163,     8,
      73,    45,   139,   167,    11,   142,   143,    77,    51,    30,
      31,    32,    33,   174,   148,   165,    79,    38,    39,    78,
     185,   146,   149,     9,   153,    45,    87,    40,    80,     6,
      82,    38,    43,     6,    12,    45,   160,    38,    43,   115,
      14,    40,    34,   109,   133,    38,    72,    40,    45,    17,
     168,    51,   177,   178,   119,    40,   140,   141,   135,   176,
      46,   145,   181,    47,    46,    45,    45,  -103,    46,   133,
      45,    47,   188,     1,    15,     2,    19,   182,   183,   190,
      28,    29,    20,   157,    89,    21,     2,    27,   155,    26,
      52,    37,    45,    30,    31,    32,    33,    90,    42,    91,
     -37,   -37,    92,    93,    94,    76,    95,    96,    75,    46,
      81,    83,    85,   162,    88,   108,    86,   110,   111,   112,
     113,   114,   186,   118,    38,    43,    34,    89,    97,   116,
     117,    45,    83,   -37,    40,   132,    30,    31,    32,    33,
      90,   175,    91,   -37,   -37,    92,    93,    94,   144,    95,
      96,    95,    96,   121,   122,   123,   124,   125,   126,   127,
     128,   154,   158,   159,   161,   166,   164,    38,    43,    34,
      89,    97,   133,   169,   171,   170,   -37,    40,   189,    30,
      31,    32,    33,    90,   130,    91,   -37,   -37,    92,    93,
      94,   173,    95,    96,   187,    10,   137,   191,   121,   122,
     123,   124,   125,   126,   127,   128,   107,    35,   192,   138,
      38,    43,    34,    89,    97,     0,     0,     0,     0,   -37,
      40,   129,    30,    31,    32,    33,    90,     0,    91,   130,
       0,    92,    93,    94,     0,    95,    96,     0,     0,     0,
       0,     0,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,    38,    43,    34,    61,    97,     0,     0,
       0,     0,   -37,    40,     0,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70
};

static const yytype_int16 yycheck[] =
{
      36,    25,    47,   101,    40,    22,   135,   105,   149,    42,
      46,    47,   110,   158,     4,   113,   114,    42,    42,    10,
      11,    12,    13,   164,    41,   154,    71,    41,    42,    54,
     175,   129,    49,     0,   132,    71,    81,    51,    72,     0,
      74,    41,    42,     4,     8,    81,   144,    41,    42,    94,
      46,    51,    43,    87,    54,    41,    42,    51,    94,     9,
     158,    85,    17,    18,   100,    51,   111,   112,   104,   167,
      53,   116,   170,    56,    53,   111,   112,    56,    53,    54,
     116,    56,   180,     3,    42,     5,    42,    41,    42,   187,
      23,    24,    49,   138,     1,    46,     5,    50,   134,    47,
      52,    48,   138,    10,    11,    12,    13,    14,    51,    16,
      17,    18,    19,    20,    21,    52,    23,    24,    48,    53,
      56,    49,    53,   147,    48,    44,    55,    48,    51,    51,
      48,    48,   177,    48,    41,    42,    43,     1,    45,    51,
      50,   177,    49,    50,    51,    48,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    48,    23,
      24,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    55,    52,    52,    52,    48,    53,    41,    42,    43,
       1,    45,    54,    49,    54,    48,    50,    51,    55,    10,
      11,    12,    13,    14,    56,    16,    17,    18,    19,    20,
      21,    50,    23,    24,    50,     4,   106,   188,    25,    26,
      27,    28,    29,    30,    31,    32,    85,    25,   189,   106,
      41,    42,    43,     1,    45,    -1,    -1,    -1,    -1,    50,
      51,    48,    10,    11,    12,    13,    14,    -1,    16,    56,
      -1,    19,    20,    21,    -1,    23,    24,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    41,    42,    43,    47,    45,    -1,    -1,
      -1,    -1,    50,    51,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,    67,    68,    69,    74,    75,    42,     0,
      67,     4,     8,    76,    46,    42,    70,     9,    77,    42,
      49,    46,    71,    72,    73,    74,    47,    50,    71,    71,
      10,    11,    12,    13,    43,    86,    96,    48,    41,    42,
      51,   101,    51,    42,   100,   101,    53,    56,    87,    78,
      79,    96,    52,    33,    34,    35,    36,    37,    38,    39,
      40,    47,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    99,    42,   101,   100,    48,    52,    42,    54,   100,
      87,    56,    87,    49,    80,    53,    55,   100,    48,     1,
      14,    16,    19,    20,    21,    23,    24,    45,    81,    82,
      83,    86,    88,    92,    96,    97,   101,    78,    44,    87,
      48,    51,    51,    48,    48,   100,    51,    50,    48,   101,
      81,    25,    26,    27,    28,    29,    30,    31,    32,    48,
      56,    98,    48,    54,    89,   101,    81,    83,    98,    81,
     100,   100,    81,    81,    48,   100,    81,    22,    41,    49,
      93,    94,    95,    81,    55,   101,    89,   100,    52,    52,
      81,    52,    96,    93,    53,    89,    48,    80,    81,    49,
      48,    54,    90,    50,    93,    15,    81,    17,    18,    84,
      85,    81,    41,    42,    91,    80,   100,    50,    81,    55,
      81,    84,    90
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    68,    69,    70,    71,    71,    71,
      72,    73,    74,    75,    76,    76,    77,    77,    78,    79,
      79,    79,    80,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    84,    84,    85,    85,    86,    86,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    92,
      93,    93,    93,    94,    94,    95,    96,    96,    96,    96,
      96,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   100,
     100,   101,   101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     7,     6,     1,     2,     2,     0,
       2,     7,     3,     1,     1,     0,     1,     0,     1,     2,
       4,     4,     3,     2,     3,     3,     5,     6,     7,     4,
       8,     2,     3,     3,     6,     2,     3,     0,     2,     2,
       1,     1,     3,     0,     2,     1,     6,     4,     5,     3,
       0,     3,     3,     3,     2,     3,     4,     1,     1,     3,
       1,     3,     3,     1,     1,     3,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 30 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("import statement",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);
	ast->root  = (yyval).ptr;}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 31 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr = (yyvsp[0]).ptr;
										ast->root = (yyval).ptr;}
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 33 "AST.y" /* yacc.c:1646  */
    {(yyvsp[-6]).ptr=newleaf("keyword","import");}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 34 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("CLASS DECLARATION",(yyvsp[-5]).ptr,(yyvsp[-3]).ptr,(yyvsp[-1]).ptr,nptr);}
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 35 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("classname",(yyvsp[0]).v);}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 36 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("CLASS BODY",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 36 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("CLASS BODY",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 36 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=nptr;}
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 37 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("GLOBAL VARIABLE DECLARATION",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 38 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("METHOD DECLARATION",(yyvsp[-6]).ptr,(yyvsp[-5]).ptr,(yyvsp[-2]).ptr,(yyvsp[0]).ptr);}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 39 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("modifier",(yyvsp[-2]).ptr,(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 40 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("access modifier",(yyvsp[0]).v);}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 41 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("access modifier",(yyvsp[0]).v);}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 41 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=nptr;}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 42 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("access modifier",(yyvsp[0]).v);}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 42 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=nptr;}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 43 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 44 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[-1]).ptr;}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 44 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("parameter list",(yyvsp[-3]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 44 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[-3]).ptr;}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 45 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[-1]).ptr;}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 46 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("ASSIGNMENT STATEMENT",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 46 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 46 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 46 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("IF STATEMENT",(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 46 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("IF STATEMENT",(yyvsp[-3]).ptr,(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 46 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("IF ELSE STATEMENT",(yyvsp[-4]).ptr,(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 46 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("RETURN STATEMENT",(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 46 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("SWITCH STATEMENT",(yyvsp[-5]).ptr,(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 46 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("VARIABLE DECLARATION/INITIALISATION STATEMENT",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 46 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("ARRAY DECLARATION STATEMENT",(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 46 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("ARRAY INITIALISATION STATEMENT",(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 46 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("PRINT STATEMENT",(yyvsp[-3]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 47 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("STATEMENT",(yyvsp[-1]).ptr,nptr,nptr,nptr);}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 47 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=nptr;}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 48 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("UNARY OPERATION",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 48 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("UNARY OPERATION",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 49 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr = newleaf("increment",(yyvsp[0]).v);}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 49 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr = newleaf("decrement",(yyvsp[0]).v);}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 50 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("switch",(yyvsp[-2]).ptr,(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 50 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=nptr;}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 51 "AST.y" /* yacc.c:1646  */
    {(yyvsp[-1]).ptr=newleaf("keyword","case");(yyval).ptr=(yyvsp[0]).ptr;}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 51 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("keyword","default");}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 52 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("variable initialisation",(yyvsp[-5]).ptr,(yyvsp[-4]).ptr,(yyvsp[-2]).ptr,(yyvsp[-1]).ptr);}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 52 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("variable declaration",(yyvsp[-3]).ptr,(yyvsp[-2]).ptr,(yyvsp[-1]).ptr,nptr);}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 53 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("identifier list",(yyvsp[-3]).ptr,(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 53 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("identifier list",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 53 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=nptr;}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 54 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("array declaration",(yyvsp[-2]).ptr,(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 54 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("array declaration",(yyvsp[-2]).ptr,(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 55 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 56 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[-1]).ptr;}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 56 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("bracket",(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 57 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("num",(yyvsp[0]).v);}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 57 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("id",(yyvsp[0]).v);}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 58 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode((yyvsp[-1]).v,(yyvsp[-2]).ptr,(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr);}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 59 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 59 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode(",",(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 59 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode("new",(yyvsp[-1]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 60 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("num",(yyvsp[0]).v);}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 60 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 61 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[-1]).ptr;}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 62 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("datatype",(yyvsp[0]).v);}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 62 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("datatype",(yyvsp[0]).v);}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 62 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("datatype",(yyvsp[0]).v);}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 62 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("datatype",(yyvsp[0]).v);}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 62 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("datatype",(yyvsp[0]).v);}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 63 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode((yyvsp[-2]).v,(yyvsp[-3]).ptr,(yyvsp[-1]).ptr,nptr,nptr);}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 64 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 64 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 64 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 64 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 64 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 64 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 64 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 64 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 64 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval).v = strdup((yyvsp[0]).v);}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 66 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[0]).ptr;}
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 66 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newnode((yyvsp[-1]).v,(yyvsp[-2]).ptr,(yyvsp[0]).ptr,nptr,nptr);}
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 67 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=(yyvsp[-1]).ptr;}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 67 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("num",(yyvsp[0]).v);}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 67 "AST.y" /* yacc.c:1646  */
    {(yyval).ptr=newleaf("id",(yyvsp[0]).v);}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2073 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
                      yytoken, &yylval);
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 69 "AST.y" /* yacc.c:1906  */

void yyerror(char *s)
{
	yynerrs+=1;
}
int main(int argc, char* argv[])
{
	fp = fopen("AST2.txt", "w");
	ast = (AST*)malloc(sizeof(AST));
	ast->root = NULL;
	yyin = fopen(argv[1], "r");
	if(!yyparse())
	{
		
		printf("\nParsing succesful\n");
		printf("AST generated\n");

		fprintf(fp,"Abstract Syntax Tree\n");
		//display(ast->root);
		
		printBT("",ast->root,0);
		fprintf(fp,"\n");
		fclose(fp);
		return 0;
	}
	else
	{
		printf("Unsuccessful\n");
	}
	return 0;
}


TREE* newnode(char* o,TREE* c1,TREE* c2,TREE* c3,TREE* c4)
{
	TREE* temp = (TREE*)malloc(sizeof(TREE));
	temp->opr= strdup(o);
	temp->value = strdup("N/A");
	temp->c1 = c1;
	temp->c2 = c2;
	temp->c3 = c3;
	temp->c4 = c4;
	return temp;
}

TREE* newleaf(char* o, char* v)
{
	TREE* temp = (TREE*)malloc(sizeof(TREE));
	temp->opr = strdup(o);
	temp->value = strdup(v);
	temp->c1 = NULL;
	temp->c2 = NULL;
	temp->c3 = NULL;
	temp->c4 = NULL;
	return temp;
}

void display(TREE* r)
{	
	
	if(r==NULL)
		return;
	if(r->c1==NULL && r->c2==NULL && r->c3==NULL)
	{
		printf("(");
		printf("%s\t%s)\n",r->opr,r->value);
	}
	else
		printf("%s\n",r->opr);
	display(r->c1);
	display(r->c2);
	display(r->c3);
	display(r->c4);
}

void printBT(char* prefix, TREE* node, int isLeft)
{	
	
	if(node==NULL)
		return;
    if( node != NULL)
    {
       fprintf(fp,"%s",prefix);

       	if(isLeft==0)
       		fprintf(fp,"└──");
       	else
       		fprintf(fp,"├──");
 
        // print the value of the node

     if(node->c1==NULL && node->c2==NULL && node->c3==NULL && node->c4==NULL)
	{
		
		fprintf(fp,"(%s, %s)\n",node->opr,node->value);
	}
	else
		fprintf(fp,"%s\n",node->opr);
        // enter the next tree level - left and right branch
        char new_prefix[1000];
       	if(isLeft==0){
       		strcpy(new_prefix,prefix);
       		strcat(new_prefix,"    ");
       	}
       	else
       		{
       		strcpy(new_prefix,prefix);
       		strcat(new_prefix,"│   ");
       	}


     if(node->c1!=NULL && node->c2==NULL && node->c3==NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 0);
        printBT(new_prefix, node->c2, 0);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}
	if(node->c1!=NULL && node->c2!=NULL && node->c3==NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 0);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}
	if(node->c1!=NULL && node->c2!=NULL && node->c3!=NULL && node->c4==NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 1);
        printBT(new_prefix, node->c3, 0);
        printBT(new_prefix, node->c4, 0);
        return;
	}	
	if(node->c1!=NULL && node->c2!=NULL && node->c3!=NULL && node->c4!=NULL)
	{
		printBT(new_prefix, node->c1, 1);
        printBT(new_prefix, node->c2, 1);
        printBT(new_prefix, node->c3, 1);
        printBT(new_prefix, node->c4, 0);
        return;
	}	
        
    }
    	
}




