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
#line 1 "icg.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<stdbool.h>
    #include<limits.h>
	#include "header.c"			
	#define YYSTYPE YACC
	FILE *yyin;
	FILE *fp;
	int yylex();

	void yyerror(const char *);
	
	
	
	FILE *yyin;
	int yylex();
	
	int i =0;
	
	char* newLabel(int *ln);
	char* newTemp(int *tn);
	int lbflag = 0;
	int tn = 1;
	int ln = 1;
    int z;	
    int ss=0;
    NODE *a;
    LIST *l;
    typedef struct Stack { 
    int top; 
    unsigned capacity; 
    int* array; 
    }STACK; 
    STACK* s;
    void append(LIST *a,char *b,char *c);
    char* search(LIST* a,char *b);
    void print(LIST* c);
    int isFull(STACK* s);
    int isEmpty(STACK* s);
    void push(STACK* s, int item);
    int pop(STACK* s); 
    int peek(STACK* s);
    char* pp;
    char* qq;
    char* rr;
    char* tt;
    int count=1;
	

#line 118 "y.tab.c" /* yacc.c:339  */

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

#line 259 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   260

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  211

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
       0,    55,    55,    55,    55,    56,    57,    58,    59,    59,
      59,    60,    61,    62,    63,    64,    64,    65,    65,    66,
      67,    67,    67,    68,    69,    70,    70,    71,    72,    72,
      72,    72,    73,    74,    74,    74,    75,    75,    76,    77,
      78,    79,    80,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    90,    91,    92,    92,    92,
      93,    93,    94,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      99,    99,   100,   100,   100
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
  "Start", "$@1", "Import_S", "Class_declaration", "CLASSNAME",
  "Class_body", "Global_variable_declaration", "Method_declaration",
  "Modifier", "W1", "W2", "W3", "Parameters", "List_of_parameters",
  "Block", "S", "@2", "@3", "@4", "@5", "$@6", "@7", "WW", "@8", "H", "W",
  "SwitchBlock", "SwitchLabel", "Variable_declaration", "Identifier_list",
  "Array_declaration", "B", "BB", "BNUM", "Array_initialisation", "K", "V",
  "R", "Type", "Assignment", "@9", "@10", "Assignment_operator",
  "Operators", "Expression", "Expr", YY_NULLPTR
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

#define YYPACT_NINF -169

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-169)))

#define YYTABLE_NINF -115

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,   -32,    18,    28,     1,    -4,  -169,  -169,  -169,    44,
      47,  -169,    15,    23,  -169,    63,    30,  -169,    32,  -169,
    -169,    31,    28,    49,    52,    28,    28,     2,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,    29,  -169,
      48,    65,   -48,     2,  -169,    58,   181,    67,    65,    69,
      74,  -169,   -10,  -169,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,    65,    21,    71,    66,  -169,    76,    77,    78,
    -169,  -169,    65,    81,   129,  -169,     2,    87,    66,  -169,
      83,    86,    84,    90,    65,  -169,  -169,    93,    96,   103,
      65,   129,   204,   107,    50,   129,    -3,  -169,  -169,  -169,
      65,    65,  -169,   129,   108,    65,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,   129,  -169,
      -6,   129,   102,    65,     5,  -169,    65,  -169,    65,   106,
     109,   129,  -169,   129,   110,  -169,     2,  -169,    -6,  -169,
     111,  -169,  -169,   105,  -169,  -169,   114,   112,   148,  -169,
    -169,  -169,  -169,   115,   119,   116,    -6,  -169,    57,  -169,
      65,    76,   126,   129,    73,  -169,  -169,  -169,    65,   121,
    -169,   104,  -169,  -169,  -169,   122,  -169,  -169,   150,    65,
    -169,   128,   129,   119,   131,   141,  -169,  -169,  -169,  -169,
     104,  -169,  -169,  -169,    76,   129,   129,  -169,  -169,  -169,
    -169
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     3,     0,     1,    14,     4,     0,
      16,     2,     0,     0,    15,    18,     0,     7,     0,    17,
      13,     0,    10,     0,     0,    10,    10,     0,     5,     6,
       8,     9,    77,    73,    75,    74,    76,    11,     0,   113,
     114,     0,    57,     0,   114,     0,   110,     0,     0,     0,
       0,    19,     0,   112,    92,    93,    97,    98,   102,   101,
     103,   104,   107,    94,    95,    96,    99,   100,   105,   106,
     108,   109,     0,    57,     0,    57,    54,     0,    20,     0,
     111,    56,     0,     0,    41,    12,     0,     0,    57,    53,
       0,     0,     0,     0,     0,    47,    48,     0,     0,     0,
       0,    41,     0,     0,     0,    41,     0,    21,    22,    55,
       0,     0,    25,    41,     0,     0,    23,    40,    46,    36,
      84,    85,    86,    87,    88,    89,    90,    91,    41,    83,
       0,    41,     0,     0,    57,    24,     0,    45,     0,     0,
       0,    41,    27,    41,     0,    37,     0,    70,     0,    66,
      67,    71,    38,    61,    58,    59,     0,     0,   110,    28,
      33,    26,    32,     0,     0,     0,     0,    60,     0,    78,
       0,     0,     0,    41,     0,    69,    72,    68,     0,     0,
      29,    50,    39,    64,    65,     0,    81,    79,    44,     0,
      52,     0,    41,    62,     0,     0,    42,    30,    51,    34,
      50,    63,    82,    80,     0,    41,    41,    49,    43,    31,
      35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,   186,  -169,  -169,  -169,  -169,    98,  -169,  -169,   188,
    -169,  -169,  -169,   113,  -169,  -168,   -94,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,    88,    -8,  -169,   166,
     -34,  -169,  -103,     3,  -169,  -169,  -110,  -169,  -169,   -26,
    -169,  -169,  -169,  -104,  -169,   -42,   -38
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     8,    18,    24,    25,    26,    27,
      10,    15,    20,    50,    51,    85,    98,   141,   171,   188,
     205,   172,   206,   197,   204,    99,   100,   191,   192,   101,
      49,   102,   133,   175,   185,   103,   149,   150,   151,   104,
     105,   195,   194,   130,    72,    45,    46
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,    38,   138,   180,     1,    47,    75,   119,    48,    74,
       5,   135,    32,    33,    34,    35,   146,    52,     6,   142,
      95,    96,   120,   121,   122,   123,   124,   125,   126,   127,
      80,   155,    78,     7,   145,   147,   208,   152,   165,    81,
      88,    83,    12,   148,    79,    36,   106,   161,    13,   162,
     167,   136,   114,   129,   109,    14,   177,    16,    47,   132,
      52,    48,   118,   106,   178,    17,   134,   106,   139,   140,
      39,    40,    19,   144,    47,   106,    21,  -114,    23,   182,
      41,    22,   120,   121,   122,   123,   124,   125,   126,   127,
     106,    39,    44,   106,   156,   154,   157,    28,   200,    43,
     158,    41,    29,   106,   132,   106,    39,    44,    39,    73,
      53,   209,   210,   129,   183,   184,    41,    76,    41,    47,
     164,   189,   190,    30,    31,    84,    77,    82,   179,    89,
      86,   108,   112,    87,   110,   106,   186,   111,   113,    32,
      33,    34,    35,    90,   115,    91,   116,   198,    92,    93,
      94,   117,    95,    96,   106,   131,   143,   153,   159,   132,
     169,   160,   163,   173,   166,   196,   176,   106,   106,   168,
      39,    44,    36,   174,    97,   181,   187,   193,   199,   202,
      41,    54,    55,    56,    57,    58,    59,    60,    61,   203,
      11,     9,   207,    37,   137,    62,   201,     0,     0,   107,
       0,     0,   170,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    54,    55,    56,    57,    58,    59,
      60,    61,     0,     0,     0,     0,     0,     0,    62,   120,
     121,   122,   123,   124,   125,   126,   127,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,   128,     0,     0,     0,     0,     0,     0,     0,
     129
};

static const yytype_int16 yycheck[] =
{
      38,    27,   106,   171,     3,    53,    48,   101,    56,    47,
      42,   105,    10,    11,    12,    13,    22,    43,     0,   113,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      72,   134,    42,     5,   128,    41,   204,   131,   148,    73,
      82,    75,    46,    49,    54,    43,    84,   141,     4,   143,
     153,    54,    94,    56,    88,     8,   166,    42,    53,    54,
      86,    56,   100,   101,   168,    42,   104,   105,   110,   111,
      41,    42,     9,   115,    53,   113,    46,    56,    47,   173,
      51,    49,    25,    26,    27,    28,    29,    30,    31,    32,
     128,    41,    42,   131,   136,   133,   138,    48,   192,    51,
     138,    51,    50,   141,    54,   143,    41,    42,    41,    42,
      52,   205,   206,    56,    41,    42,    51,    48,    51,    53,
     146,    17,    18,    25,    26,    49,    52,    56,   170,    48,
      53,    44,    48,    55,    51,   173,   178,    51,    48,    10,
      11,    12,    13,    14,    51,    16,    50,   189,    19,    20,
      21,    48,    23,    24,   192,    48,    48,    55,    52,    54,
      48,    52,    52,    48,    53,    15,    50,   205,   206,    55,
      41,    42,    43,    54,    45,    49,    55,    55,    50,    48,
      51,    33,    34,    35,    36,    37,    38,    39,    40,    48,
       4,     3,   200,    27,   106,    47,   193,    -1,    -1,    86,
      -1,    -1,    54,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    67,    68,    69,    42,     0,     5,    70,    75,
      76,    67,    46,     4,     8,    77,    42,    42,    71,     9,
      78,    46,    49,    47,    72,    73,    74,    75,    48,    50,
      72,    72,    10,    11,    12,    13,    43,    95,   105,    41,
      42,    51,   112,    51,    42,   111,   112,    53,    56,    96,
      79,    80,   105,    52,    33,    34,    35,    36,    37,    38,
      39,    40,    47,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   110,    42,   112,   111,    48,    52,    42,    54,
     111,    96,    56,    96,    49,    81,    53,    55,   111,    48,
      14,    16,    19,    20,    21,    23,    24,    45,    82,    91,
      92,    95,    97,   101,   105,   106,   112,    79,    44,    96,
      51,    51,    48,    48,   111,    51,    50,    48,   112,    82,
      25,    26,    27,    28,    29,    30,    31,    32,    48,    56,
     109,    48,    54,    98,   112,    82,    54,    92,   109,   111,
     111,    83,    82,    48,   111,    82,    22,    41,    49,   102,
     103,   104,    82,    55,   112,    98,   111,   111,   112,    52,
      52,    82,    82,    52,   105,   102,    53,    98,    55,    48,
      54,    84,    87,    48,    54,    99,    50,   102,   109,   111,
      81,    49,    82,    41,    42,   100,   111,    55,    85,    17,
      18,    93,    94,    55,   108,   107,    15,    89,   111,    50,
      82,    99,    48,    48,    90,    86,    88,    93,    81,    82,
      82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    67,    69,    70,    71,    72,    72,
      72,    73,    74,    75,    76,    77,    77,    78,    78,    79,
      80,    80,    80,    81,    82,    83,    82,    82,    84,    85,
      86,    82,    82,    87,    88,    82,    82,    82,    82,    82,
      82,    82,    90,    89,    89,    91,    91,    92,    92,    93,
      93,    94,    94,    95,    95,    96,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   102,   102,   102,
     103,   103,   104,   105,   105,   105,   105,   105,   106,   107,
     106,   108,   106,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     111,   111,   112,   112,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     7,     6,     1,     2,     2,
       0,     2,     7,     3,     1,     1,     0,     1,     0,     1,
       2,     4,     4,     3,     2,     0,     4,     3,     0,     0,
       0,    10,     4,     0,     0,    10,     2,     3,     3,     6,
       2,     0,     0,     3,     0,     2,     2,     1,     1,     3,
       0,     2,     1,     6,     4,     5,     3,     0,     3,     3,
       3,     2,     3,     4,     1,     1,     3,     1,     3,     3,
       1,     1,     3,     1,     1,     1,     1,     1,     4,     0,
       8,     0,     8,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     1
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
        case 3:
#line 55 "icg.y" /* yacc.c:1646  */
    {l=(LIST*)malloc(sizeof(LIST));l->head=NULL;s=(STACK*)malloc(sizeof(STACK));s->capacity = 10;s->top = -1;s->array = (int*)malloc(s->capacity * sizeof(int)); }
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 70 "icg.y" /* yacc.c:1646  */
    {if(ss==0){ss=1;(yyval).addr=newLabel(&ln);tt=(yyval).addr;(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"goto %s\n",(yyval).addr); fprintf(fp,"%s",(yyval).code);}else{(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"goto %s\n",tt);fprintf(fp,"%s",(yyval).code);}}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 72 "icg.y" /* yacc.c:1646  */
    {(yyval).tr=newLabel(&ln);(yyval).addr=newLabel(&ln);pp=(yyval).addr;(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"if %s goto %s\ngoto LABEL%d\n%s:",(yyvsp[-1]).addr,(yyval).tr,count,(yyval).tr);count+=1;fprintf(fp,"%s",(yyval).code);}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 72 "icg.y" /* yacc.c:1646  */
    {(yyval).tr=newLabel(&ln);qq=(yyval).tr;(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"goto %s\n",(yyval).tr);fprintf(fp,"%s",(yyval).code);}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 72 "icg.y" /* yacc.c:1646  */
    {(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"%s:",qq);fprintf(fp,"%s",(yyval).code);}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 74 "icg.y" /* yacc.c:1646  */
    {rr=(yyvsp[-1]).addr;}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 74 "icg.y" /* yacc.c:1646  */
    {if(ss==1){(yyval).addr=tt;(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"%s:",(yyval).addr); fprintf(fp,"%s",(yyval).code);}}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 80 "icg.y" /* yacc.c:1646  */
    {count-=1;(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"LABEL%d:",count);fprintf(fp,"%s",(yyval).code);}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 84 "icg.y" /* yacc.c:1646  */
    {(yyval).addr=newLabel(&ln);(yyval).tr=newTemp(&tn);(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"%s = %s==%s\nif %s goto %s\n%s:",(yyval).tr,rr,(yyvsp[0]).addr,(yyval).tr,(yyval).addr,(yyval).addr);fprintf(fp,"%s",(yyval).code);}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 84 "icg.y" /* yacc.c:1646  */
    {(yyval).addr=newLabel(&ln);(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"%s:",(yyval).addr);fprintf(fp,"%s",(yyval).code);}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 85 "icg.y" /* yacc.c:1646  */
    {append(l,(yyvsp[-2]).addr,(yyvsp[-4]).addr);(yyval).code = (char*)malloc(sizeof(char)*100); sprintf((yyval).code,"%s = %s\n",(yyvsp[-4]).addr,(yyvsp[-2]).addr);fprintf(fp,"%s",(yyval).code);}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 96 "icg.y" /* yacc.c:1646  */
    {append(l,(yyvsp[-1]).addr,(yyval).addr);(yyval).addr=strdup((yyvsp[-3]).v);(yyval).code = (char*)malloc(sizeof(char)*200);sprintf((yyval).code,"%s = %s\n",(yyval).addr,(yyvsp[-1]).addr);fprintf(fp,"%s",(yyval).code);}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 96 "icg.y" /* yacc.c:1646  */
    {(yyval).a = newTemp(&tn);(yyval).addr=newTemp(&tn);(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"%s = 4 * %s\n%s = %s + %s\n%s = %s\n",(yyval).a,(yyvsp[-1]).addr,(yyval).addr,(yyvsp[-3]).addr,(yyval).a,(yyvsp[-5]).addr,(yyval).addr);fprintf(fp,"%s",(yyval).code);}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 96 "icg.y" /* yacc.c:1646  */
    {(yyval).a = newTemp(&tn);(yyval).addr=newTemp(&tn);(yyval).code = (char*)malloc(sizeof(char)*100);sprintf((yyval).code,"%s = 4 * %s\n%s = %s + %s\n",(yyval).a,(yyvsp[-3]).addr,(yyval).addr,(yyvsp[-5]).addr,(yyval).a);fprintf(fp,"%s",(yyval).code);}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 97 "icg.y" /* yacc.c:1646  */
    {(yyval).code = strdup("=");}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 97 "icg.y" /* yacc.c:1646  */
    {(yyval).code = strdup("+");}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 97 "icg.y" /* yacc.c:1646  */
    {(yyval).code = strdup("-");}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 97 "icg.y" /* yacc.c:1646  */
    {(yyval).code = strdup("*");}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 97 "icg.y" /* yacc.c:1646  */
    {(yyval).code = strdup("/");}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 97 "icg.y" /* yacc.c:1646  */
    {(yyval).code = strdup("&");}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 97 "icg.y" /* yacc.c:1646  */
    {(yyval).code = strdup("|");}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 97 "icg.y" /* yacc.c:1646  */
    {(yyval).code = strdup("^");}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 97 "icg.y" /* yacc.c:1646  */
    {(yyval).code = strdup("%");}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 98 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v); (yyval).code = strdup("");}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 99 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = newTemp(&tn);(yyval).code = (char*)malloc(sizeof(char)*100); sprintf((yyval).code,"%s = %s %s %s\n",(yyval).addr,(yyvsp[-2]).addr,(yyvsp[-1]).addr,(yyvsp[0]).addr);fprintf(fp,"%s",(yyval).code);}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 100 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = strdup((yyvsp[0]).v);}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 100 "icg.y" /* yacc.c:1646  */
    {(yyval).addr = search(l,(yyvsp[0]).v);}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1762 "y.tab.c" /* yacc.c:1646  */
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
#line 102 "icg.y" /* yacc.c:1906  */



char* newLabel(int *ln)
{
	char *s = (char*)malloc(4*sizeof(char));
	sprintf(s,"L%d",*ln);
	//printf("%s",s);
	(*ln)++;
	return s;
}
char* newTemp(int *tn)
{
	char *s = (char*)malloc(4*sizeof(char));
	sprintf(s,"T%d",*tn);
	//printf("%s",s);
	(*tn)++;
	return s;
}


void append(LIST *a,char *b,char *c)
{
    //printf("%s %s\n",b,c);
    if(atoi(b) || strcmp(b,"0")==0)
    {
        return;
    }
    else
    {
        //printf("%s %s\n",b,c);
        NODE *p=(NODE*)malloc(sizeof(NODE));
        NODE *q=NULL;
        p->temp=b;
        p->var=c;
        p->next=a->head;
        a->head=p;
        print(a);
    }

}
char* search(LIST* a,char *b)
{
    NODE* c=a->head;
    //printf("%s 1\n",b);
    while(c!=NULL && strcmp(c->var,b))
    {
        //printf("%s %s\n",c->var,b);
        c=c->next;
    }
    if(c==NULL)
    {
        //printf("%s\n",b);
        return b;
    }
    else
    {
        //printf("%s\n",c->temp);
        return c->temp;
    }
    
}
void print(LIST* c)
{
    NODE* k=c->head;
    while(k!=NULL)
    {
        //printf("%s %s ",k->temp,k->var);
        k=k->next;
    }
    //printf("\n");
}

int isFull(STACK* s) 
{ 
    return s->top == s->capacity - 1; 
} 
  
int isEmpty(STACK* s) 
{ 
    return s->top == -1; 
} 
  

void push(STACK* s, int item) 
{ 
    if (isFull(s)) 
        return; 
    s->array[++s->top] = item; 
    
} 
  

int pop(STACK* s) 
{ 
    if (isEmpty(s)) 
        return INT_MIN; 
    return s->array[s->top--]; 
} 
  

int peek(STACK* s) 
{ 
    if (isEmpty(s)) 
        return INT_MIN; 
    return s->array[s->top]; 
} 

void yyerror(const char *s)
{
	yynerrs+=1;
}
int main(int argc, char* argv[])
{
    
	yyin = fopen(argv[1], "r");
	fp = fopen("icg.txt","w");
	int flag = 1;
	if(!yyparse())
			{printf("Parsing successful \n");flag = 0;}
		else
			{printf("Unsuccessful \n");}
	return flag;
}

