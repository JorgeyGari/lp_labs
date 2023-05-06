/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "trad1.y"
                          // SECTION 1 Declarations for C-Bison
#include <stdio.h>
#include <ctype.h>            // tolower()
#include <string.h>           // strcmp() 
#include <stdlib.h>           // exit()

#define FF fflush(stdout);    // to force immediate printing 

int yylex () ;
void yyerror () ;
char *my_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;

char temp [2048] ;

// Definitions for explicit attributes

typedef struct s_attr {
    int value ;    // - Numeric value of a NUMBER 
    char *code ;   // - to pass IDENTIFIER names, and other translations 
} t_attr ;

// TODO: Add attribute that contains function name

#define YYSTYPE t_attr     // stack of PDA has type t_attr


#line 101 "trad1.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUMBER = 258,                  /* NUMBER  */
    IDENTIF = 259,                 /* IDENTIF  */
    INTEGER = 260,                 /* INTEGER  */
    STRING = 261,                  /* STRING  */
    MAIN = 262,                    /* MAIN  */
    WHILE = 263,                   /* WHILE  */
    PUTS = 264,                    /* PUTS  */
    PRINTF = 265,                  /* PRINTF  */
    LEQ = 266,                     /* LEQ  */
    GEQ = 267,                     /* GEQ  */
    EQ = 268,                      /* EQ  */
    NEQ = 269,                     /* NEQ  */
    OR = 270,                      /* OR  */
    AND = 271,                     /* AND  */
    IF = 272,                      /* IF  */
    ELSE = 273,                    /* ELSE  */
    FOR = 274,                     /* FOR  */
    RETURN = 275,                  /* RETURN  */
    UNARY_SIGN = 276               /* UNARY_SIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_IDENTIF = 4,                    /* IDENTIF  */
  YYSYMBOL_INTEGER = 5,                    /* INTEGER  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_MAIN = 7,                       /* MAIN  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_PUTS = 9,                       /* PUTS  */
  YYSYMBOL_PRINTF = 10,                    /* PRINTF  */
  YYSYMBOL_LEQ = 11,                       /* LEQ  */
  YYSYMBOL_GEQ = 12,                       /* GEQ  */
  YYSYMBOL_EQ = 13,                        /* EQ  */
  YYSYMBOL_NEQ = 14,                       /* NEQ  */
  YYSYMBOL_OR = 15,                        /* OR  */
  YYSYMBOL_AND = 16,                       /* AND  */
  YYSYMBOL_IF = 17,                        /* IF  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_FOR = 19,                       /* FOR  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_21_ = 21,                       /* '='  */
  YYSYMBOL_22_ = 22,                       /* '<'  */
  YYSYMBOL_23_ = 23,                       /* '>'  */
  YYSYMBOL_24_ = 24,                       /* '+'  */
  YYSYMBOL_25_ = 25,                       /* '-'  */
  YYSYMBOL_26_ = 26,                       /* '*'  */
  YYSYMBOL_27_ = 27,                       /* '/'  */
  YYSYMBOL_28_ = 28,                       /* '%'  */
  YYSYMBOL_UNARY_SIGN = 29,                /* UNARY_SIGN  */
  YYSYMBOL_30_ = 30,                       /* '('  */
  YYSYMBOL_31_ = 31,                       /* ')'  */
  YYSYMBOL_32_ = 32,                       /* '{'  */
  YYSYMBOL_33_ = 33,                       /* '}'  */
  YYSYMBOL_34_ = 34,                       /* ';'  */
  YYSYMBOL_35_ = 35,                       /* '['  */
  YYSYMBOL_36_ = 36,                       /* ']'  */
  YYSYMBOL_37_ = 37,                       /* ','  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_axiom = 39,                     /* axiom  */
  YYSYMBOL_bdeclare = 40,                  /* bdeclare  */
  YYSYMBOL_declare = 41,                   /* declare  */
  YYSYMBOL_function = 42,                  /* function  */
  YYSYMBOL_body = 43,                      /* body  */
  YYSYMBOL_sentence = 44,                  /* sentence  */
  YYSYMBOL_assign = 45,                    /* assign  */
  YYSYMBOL_control = 46,                   /* control  */
  YYSYMBOL_condition = 47,                 /* condition  */
  YYSYMBOL_incdec = 48,                    /* incdec  */
  YYSYMBOL_expression = 49,                /* expression  */
  YYSYMBOL_lexpression = 50,               /* lexpression  */
  YYSYMBOL_args = 51,                      /* args  */
  YYSYMBOL_term = 52,                      /* term  */
  YYSYMBOL_operand = 53                    /* operand  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   256

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   276


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    28,     2,     2,
      30,    31,    26,    24,    37,    25,     2,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
      22,    21,    23,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    33,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    88,    88,    91,    96,    99,   102,   105,   109,   111,
     114,   117,   120,   125,   128,   131,   134,   140,   143,   146,
     149,   154,   157,   160,   163,   166,   169,   172,   175,   180,
     183,   188,   191,   194,   197,   203,   206,   209,   212,   215,
     218,   221,   224,   227,   232,   235,   240,   243,   246,   249,
     252,   255,   258,   261,   266,   269,   274,   277,   280,   283,
     288,   291,   294,   299,   302,   305
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "IDENTIF",
  "INTEGER", "STRING", "MAIN", "WHILE", "PUTS", "PRINTF", "LEQ", "GEQ",
  "EQ", "NEQ", "OR", "AND", "IF", "ELSE", "FOR", "RETURN", "'='", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "UNARY_SIGN", "'('", "')'",
  "'{'", "'}'", "';'", "'['", "']'", "','", "$accept", "axiom", "bdeclare",
  "declare", "function", "body", "sentence", "assign", "control",
  "condition", "incdec", "expression", "lexpression", "args", "term",
  "operand", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-100)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-9)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     100,   -23,     2,    18,    70,    66,    46,     5,    22,   108,
      -7,    44,  -100,    54,     5,  -100,  -100,  -100,    82,    15,
      15,   108,    59,   144,    62,    28,  -100,    74,   108,   108,
      91,    93,  -100,    88,  -100,  -100,   213,    52,   108,   108,
     108,   108,   108,    84,    95,   108,   108,   109,   125,   177,
     157,   102,    84,  -100,   -13,   131,   106,   107,   110,   111,
     133,  -100,   140,   105,   157,    14,    14,  -100,  -100,  -100,
    -100,    73,   158,   146,   182,   108,  -100,   142,   157,  -100,
     108,   108,   108,    29,   108,   172,   173,   108,    19,  -100,
     157,  -100,  -100,   147,   108,  -100,  -100,   125,  -100,   159,
    -100,   163,   162,   195,   108,   108,   165,   132,   166,   127,
     167,   164,   160,  -100,  -100,  -100,  -100,   207,  -100,   191,
    -100,   200,   183,   108,   108,   108,   108,   108,   108,   108,
     108,  -100,   108,   184,   108,   193,   108,  -100,   157,   125,
     125,   125,   125,   125,   125,   125,   125,   186,   157,   196,
     108,  -100,   199,  -100,   201,   225,  -100,  -100,   215,   214,
     211,   216,   239,   217,   157,    41,   157,   212,   243,   244,
     218,  -100,  -100,  -100,  -100
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,     0,     0,     0,     0,     0,     0,     6,     0,     0,
       9,     0,     1,     0,     4,     7,    64,    63,     0,     0,
       0,     0,     0,    58,     0,    46,    60,     0,     0,     0,
       0,     0,     5,    56,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,    65,     0,     0,     0,     0,     0,     0,
       0,    13,     0,     0,    19,    49,    50,    51,    52,    53,
      59,     0,    54,     0,     0,     0,    11,     0,     0,    57,
       0,     0,     0,    21,     0,     0,     0,     0,     8,    15,
      17,    20,    14,     0,     0,    48,    47,    12,     2,     0,
      23,    29,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,     0,    18,    16,    55,     3,     0,    28,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,     0,     0,     0,    24,     0,    40,
      41,    36,    37,    43,    42,    38,    39,     0,     0,     0,
       0,    25,     0,    26,     0,     0,    30,    31,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    44,    45,    34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -100,  -100,    -3,   168,  -100,   -35,  -100,   -99,  -100,   -85,
    -100,    -8,   -78,    16,  -100,    75
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    62,    63,   100,    64,   106,
     160,    72,    73,    24,    25,    26
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    27,   110,   102,    15,   120,    10,     8,    80,     1,
       2,    32,     9,    36,    28,    77,   115,    81,    16,    17,
      48,    49,    82,   111,     2,    16,    17,    18,    29,    91,
      65,    66,    67,    68,    69,    23,    93,   151,    74,    -8,
      40,    41,    42,    99,    23,    21,    19,    20,    11,   149,
     104,   156,    21,    22,   147,   113,    54,    55,    45,    70,
      56,    57,    58,    46,   105,   168,   169,    97,    79,    59,
      12,    60,   101,    13,   103,    30,   107,    54,    55,   107,
      14,    56,    57,    58,    31,    61,    33,    16,    17,    18,
      59,    37,    60,    44,    34,    35,   101,   121,    38,    39,
      40,    41,    42,   152,     1,     2,    92,     3,    19,    20,
      47,    16,    17,   154,    21,   139,   140,   141,   142,   143,
     144,   145,   146,    50,    51,    52,   107,    71,   101,   167,
      75,   170,    19,    20,    78,    83,    84,    85,    21,    90,
      86,    87,   101,   123,   124,   125,   126,   127,   128,    38,
      39,    40,    41,    42,   129,   130,    38,    39,    40,    41,
      42,    54,    55,    88,   132,    56,    57,    58,    38,    39,
      40,    41,    42,    89,    59,    98,    60,    95,   108,   109,
     114,    43,    38,    39,    40,    41,    42,    38,    39,    40,
      41,    42,   116,   118,   134,    94,   122,   131,   133,     9,
     117,    38,    39,    40,    41,    42,    38,    39,    40,    41,
      42,   135,   136,    76,   150,   138,   148,   153,    96,    38,
      39,    40,    41,    42,    38,    39,    40,    41,    42,   159,
     155,   119,   157,   161,   158,   162,   137,    38,    39,    40,
      41,    42,   163,   165,    53,   171,   172,   173,   164,   166,
       0,   174,     0,     0,     0,     0,   112
};

static const yytype_int16 yycheck[] =
{
       8,     9,    87,    81,     7,   104,     4,    30,    21,     4,
       5,    14,    35,    21,    21,    50,    94,    30,     3,     4,
      28,    29,    35,     4,     5,     3,     4,     5,    35,    64,
      38,    39,    40,    41,    42,    43,    71,   136,    46,    34,
      26,    27,    28,    78,    52,    30,    24,    25,    30,   134,
      21,   150,    30,    31,   132,    90,     4,     5,    30,    43,
       8,     9,    10,    35,    35,    24,    25,    75,    52,    17,
       0,    19,    80,     7,    82,    31,    84,     4,     5,    87,
      34,     8,     9,    10,    30,    33,     4,     3,     4,     5,
      17,    32,    19,    31,    19,    20,   104,   105,    24,    25,
      26,    27,    28,   138,     4,     5,    33,     7,    24,    25,
      36,     3,     4,   148,    30,   123,   124,   125,   126,   127,
     128,   129,   130,    32,    31,    37,   134,    32,   136,   164,
      21,   166,    24,    25,    32,     4,    30,    30,    30,    34,
      30,    30,   150,    11,    12,    13,    14,    15,    16,    24,
      25,    26,    27,    28,    22,    23,    24,    25,    26,    27,
      28,     4,     5,    30,    37,     8,     9,    10,    24,    25,
      26,    27,    28,    33,    17,    33,    19,    31,     6,     6,
      33,    37,    24,    25,    26,    27,    28,    24,    25,    26,
      27,    28,    33,    31,    34,    37,    31,    31,    31,    35,
      37,    24,    25,    26,    27,    28,    24,    25,    26,    27,
      28,     4,    21,    36,    21,    32,    32,    31,    36,    24,
      25,    26,    27,    28,    24,    25,    26,    27,    28,     4,
      34,    36,    33,    18,    33,    21,    36,    24,    25,    26,
      27,    28,    31,     4,    31,    33,     3,     3,    32,    32,
      -1,    33,    -1,    -1,    -1,    -1,    88
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     7,    39,    40,    41,    42,    30,    35,
       4,    30,     0,     7,    34,    40,     3,     4,     5,    24,
      25,    30,    31,    49,    51,    52,    53,    49,    21,    35,
      31,    30,    40,     4,    53,    53,    49,    32,    24,    25,
      26,    27,    28,    37,    31,    30,    35,    36,    49,    49,
      32,    31,    37,    31,     4,     5,     8,     9,    10,    17,
      19,    33,    43,    44,    46,    49,    49,    49,    49,    49,
      51,    32,    49,    50,    49,    21,    36,    43,    32,    51,
      21,    30,    35,     4,    30,    30,    30,    30,    30,    33,
      34,    43,    33,    43,    37,    31,    36,    49,    33,    43,
      45,    49,    50,    49,    21,    35,    47,    49,     6,     6,
      47,     4,    41,    43,    33,    50,    33,    37,    31,    36,
      45,    49,    31,    11,    12,    13,    14,    15,    16,    22,
      23,    31,    37,    31,    34,     4,    21,    36,    32,    49,
      49,    49,    49,    49,    49,    49,    49,    50,    32,    47,
      21,    45,    43,    31,    43,    34,    45,    33,    33,     4,
      48,    18,    21,    31,    32,     4,    32,    43,    24,    25,
      43,    33,     3,     3,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    39,    40,    40,    40,    40,    41,    41,
      41,    41,    41,    42,    42,    42,    42,    43,    43,    43,
      43,    44,    44,    44,    44,    44,    44,    44,    44,    45,
      45,    46,    46,    46,    46,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    48,    48,    49,    49,    49,    49,
      49,    49,    49,    49,    50,    50,    51,    51,    51,    51,
      52,    52,    52,    53,    53,    53
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     7,     2,     3,     1,     2,     0,     2,
       4,     5,     6,     5,     6,     6,     7,     2,     3,     1,
       2,     2,     4,     3,     5,     6,     6,     4,     4,     1,
       5,     7,     7,    11,    11,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     5,     1,     4,     4,     3,
       3,     3,     3,     3,     1,     3,     2,     4,     1,     3,
       1,     2,     2,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* axiom: MAIN '(' ')' '{' body '}'  */
#line 88 "trad1.y"
                                               { printf ("(defun main ()\n%s\n)\n", yyvsp[-1].code) ;
					                            yyval.code = gen_code (temp) ; }
#line 1312 "trad1.tab.c"
    break;

  case 3: /* axiom: bdeclare MAIN '(' ')' '{' body '}'  */
#line 91 "trad1.y"
                                                        { printf ("%s\n(defun main ()\n%s\n)\n", yyvsp[-6].code, yyvsp[-1].code) ;
					                            yyval.code = gen_code (temp) ; }
#line 1319 "trad1.tab.c"
    break;

  case 4: /* bdeclare: declare ';'  */
#line 96 "trad1.y"
                                                    { sprintf (temp, "%s ", yyvsp[-1].code) ;
                                    yyval.code = gen_code (temp) ; }
#line 1326 "trad1.tab.c"
    break;

  case 5: /* bdeclare: declare ';' bdeclare  */
#line 99 "trad1.y"
                                                { sprintf (temp, "%s \n%s ", yyvsp[-2].code, yyvsp[0].code) ;
						            yyval.code = gen_code (temp) ; }
#line 1333 "trad1.tab.c"
    break;

  case 6: /* bdeclare: function  */
#line 102 "trad1.y"
                                    { sprintf (temp, "%s ", yyvsp[0].code) ;
                                    yyval.code = gen_code (temp) ; }
#line 1340 "trad1.tab.c"
    break;

  case 7: /* bdeclare: function bdeclare  */
#line 105 "trad1.y"
                                    { sprintf (temp, "%s \n%s ", yyvsp[-1].code, yyvsp[0].code) ;
                                    yyval.code = gen_code (temp) ; }
#line 1347 "trad1.tab.c"
    break;

  case 9: /* declare: INTEGER IDENTIF  */
#line 111 "trad1.y"
                                                                { sprintf (temp, "(setq %s 0)", yyvsp[0].code) ;
					                                yyval.code = gen_code (temp) ; }
#line 1354 "trad1.tab.c"
    break;

  case 10: /* declare: INTEGER IDENTIF '=' expression  */
#line 114 "trad1.y"
                                                        { sprintf (temp, "(setq %s %d)", yyvsp[-2].code, yyvsp[0].value) ;
					                                yyval.code = gen_code (temp) ; }
#line 1361 "trad1.tab.c"
    break;

  case 11: /* declare: INTEGER IDENTIF '[' expression ']'  */
#line 117 "trad1.y"
                                                    { sprintf (temp, "(setq %s (make-array %s))", yyvsp[-3].code, yyvsp[-1].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1368 "trad1.tab.c"
    break;

  case 12: /* declare: IDENTIF '[' expression ']' '=' expression  */
#line 120 "trad1.y"
                                                    { sprintf (temp, "(setf (aref %s %s) %s", yyvsp[-5].code, yyvsp[-3].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1375 "trad1.tab.c"
    break;

  case 13: /* function: IDENTIF '(' ')' '{' '}'  */
#line 125 "trad1.y"
                                                    { sprintf (temp, "(defun %s ()\n)\n", yyvsp[-4].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1382 "trad1.tab.c"
    break;

  case 14: /* function: IDENTIF '(' args ')' '{' '}'  */
#line 128 "trad1.y"
                                                    { sprintf (temp, "(defun %s (%s)\n)\n", yyvsp[-5].code, yyvsp[-3].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1389 "trad1.tab.c"
    break;

  case 15: /* function: IDENTIF '(' ')' '{' body '}'  */
#line 131 "trad1.y"
                                                    { sprintf (temp, "(defun %s ()\n%s\n)\n", yyvsp[-5].code, yyvsp[-1].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1396 "trad1.tab.c"
    break;

  case 16: /* function: IDENTIF '(' args ')' '{' body '}'  */
#line 134 "trad1.y"
                                                    { sprintf (temp, "(defun %s (%s)\n%s\n)\n", yyvsp[-6].code, yyvsp[-4].code, yyvsp[-1].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1403 "trad1.tab.c"
    break;

  case 17: /* body: sentence ';'  */
#line 140 "trad1.y"
                                { sprintf (temp, "%s ", yyvsp[-1].code) ;
						        yyval.code = gen_code (temp) ; }
#line 1410 "trad1.tab.c"
    break;

  case 18: /* body: sentence ';' body  */
#line 143 "trad1.y"
                                    { sprintf (temp, "%s \n%s ", yyvsp[-2].code, yyvsp[0].code) ;
						        yyval.code = gen_code (temp) ; }
#line 1417 "trad1.tab.c"
    break;

  case 19: /* body: control  */
#line 146 "trad1.y"
                                { sprintf (temp, "%s ", yyvsp[0].code) ;
                                yyval.code = gen_code (temp) ; }
#line 1424 "trad1.tab.c"
    break;

  case 20: /* body: control body  */
#line 149 "trad1.y"
                                { sprintf (temp, "%s \n%s ", yyvsp[-1].code, yyvsp[0].code) ;
                                yyval.code = gen_code (temp) ; }
#line 1431 "trad1.tab.c"
    break;

  case 21: /* sentence: INTEGER IDENTIF  */
#line 154 "trad1.y"
                                                   { sprintf (temp, "(setq %s 0)", yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1438 "trad1.tab.c"
    break;

  case 22: /* sentence: INTEGER IDENTIF '=' assign  */
#line 157 "trad1.y"
                                                   { sprintf (temp, "(setq %s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1445 "trad1.tab.c"
    break;

  case 23: /* sentence: IDENTIF '=' assign  */
#line 160 "trad1.y"
                                                   { sprintf (temp, "(setq %s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1452 "trad1.tab.c"
    break;

  case 24: /* sentence: INTEGER IDENTIF '[' expression ']'  */
#line 163 "trad1.y"
                                                   { sprintf (temp, "(setq %s (make-array %s))", yyvsp[-3].code, yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1459 "trad1.tab.c"
    break;

  case 25: /* sentence: IDENTIF '[' expression ']' '=' assign  */
#line 166 "trad1.y"
                                                   { sprintf (temp, "(setf (aref %s %s) %s", yyvsp[-5].code, yyvsp[-3].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1466 "trad1.tab.c"
    break;

  case 26: /* sentence: PRINTF '(' STRING ',' lexpression ')'  */
#line 169 "trad1.y"
                                                   { sprintf (temp, "%s ", yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1473 "trad1.tab.c"
    break;

  case 27: /* sentence: PUTS '(' STRING ')'  */
#line 172 "trad1.y"
                                                   { sprintf (temp, "(print \"%s\") ", yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1480 "trad1.tab.c"
    break;

  case 28: /* sentence: IDENTIF '(' lexpression ')'  */
#line 175 "trad1.y"
                                                   { sprintf (temp, "(%s %s) ", yyvsp[-3].code, yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1487 "trad1.tab.c"
    break;

  case 29: /* assign: expression  */
#line 180 "trad1.y"
                                                    { sprintf (temp, "%s)", yyvsp[0].code) ;
					                                yyval.code = gen_code (temp) ; }
#line 1494 "trad1.tab.c"
    break;

  case 30: /* assign: expression ',' IDENTIF '=' assign  */
#line 183 "trad1.y"
                                                        { sprintf (temp, "%d) (setq %s %s", yyvsp[-4].value, yyvsp[-2].code, yyvsp[0].code) ;
					                                yyval.code = gen_code (temp) ; }
#line 1501 "trad1.tab.c"
    break;

  case 31: /* control: WHILE '(' condition ')' '{' body '}'  */
#line 188 "trad1.y"
                                                                    { sprintf (temp, "(loop while %s do %s\n)", yyvsp[-4].code, yyvsp[-1].code) ;
                                                                    yyval.code = gen_code (temp) ; }
#line 1508 "trad1.tab.c"
    break;

  case 32: /* control: IF '(' condition ')' '{' body '}'  */
#line 191 "trad1.y"
                                                                    { sprintf (temp, "(if %s\n%s\n)", yyvsp[-4].code, yyvsp[-1].code) ;
                                                                    yyval.code = gen_code (temp) ; }
#line 1515 "trad1.tab.c"
    break;

  case 33: /* control: IF '(' condition ')' '{' body '}' ELSE '{' body '}'  */
#line 194 "trad1.y"
                                                                    { sprintf (temp, "(if %s\n(progn %s)\n(progn %s)\n)", yyvsp[-8].code, yyvsp[-5].code, yyvsp[-1].code) ;
                                                                    yyval.code = gen_code (temp) ; }
#line 1522 "trad1.tab.c"
    break;

  case 34: /* control: FOR '(' declare ';' condition ';' incdec ')' '{' body '}'  */
#line 198 "trad1.y"
                                                                    { sprintf (temp, "%s\n(loop while %s do %s\n%s", yyvsp[-8].code, yyvsp[-6].code, yyvsp[-1].code, yyvsp[-4].code) ;
                                                                    yyval.code = gen_code (temp) ;}
#line 1529 "trad1.tab.c"
    break;

  case 35: /* condition: expression  */
#line 203 "trad1.y"
                                                    { sprintf (temp, "%s", yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1536 "trad1.tab.c"
    break;

  case 36: /* condition: expression EQ expression  */
#line 206 "trad1.y"
                                                    { sprintf (temp, "(= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1543 "trad1.tab.c"
    break;

  case 37: /* condition: expression NEQ expression  */
#line 209 "trad1.y"
                                                    { sprintf (temp, "(/= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1550 "trad1.tab.c"
    break;

  case 38: /* condition: expression '<' expression  */
#line 212 "trad1.y"
                                                    { sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1557 "trad1.tab.c"
    break;

  case 39: /* condition: expression '>' expression  */
#line 215 "trad1.y"
                                                    { sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1564 "trad1.tab.c"
    break;

  case 40: /* condition: expression LEQ expression  */
#line 218 "trad1.y"
                                                    { sprintf (temp, "(<= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1571 "trad1.tab.c"
    break;

  case 41: /* condition: expression GEQ expression  */
#line 221 "trad1.y"
                                                    { sprintf (temp, "(>= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1578 "trad1.tab.c"
    break;

  case 42: /* condition: expression AND expression  */
#line 224 "trad1.y"
                                                    { sprintf (temp, "(and %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1585 "trad1.tab.c"
    break;

  case 43: /* condition: expression OR expression  */
#line 227 "trad1.y"
                                                    { sprintf (temp, "(or %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1592 "trad1.tab.c"
    break;

  case 44: /* incdec: IDENTIF '=' IDENTIF '+' NUMBER  */
#line 232 "trad1.y"
                                                { sprintf (temp, "(setq %s (+ %s %d))", yyvsp[-4].code, yyvsp[-4].code, yyvsp[-1].value) ;
                                                yyval.code = gen_code (temp) ; }
#line 1599 "trad1.tab.c"
    break;

  case 45: /* incdec: IDENTIF '=' IDENTIF '-' NUMBER  */
#line 235 "trad1.y"
                                                { sprintf (temp, "(setq %s (- %s %d))", yyvsp[-4].code, yyvsp[-4].code, yyvsp[-1].value) ;
                                                yyval.code = gen_code (temp) ; }
#line 1606 "trad1.tab.c"
    break;

  case 46: /* expression: term  */
#line 240 "trad1.y"
                                                { yyval = yyvsp[0] ; 
                                                yyval.code = gen_code (yyvsp[0].code) ; }
#line 1613 "trad1.tab.c"
    break;

  case 47: /* expression: term '[' expression ']'  */
#line 243 "trad1.y"
                                                { sprintf (temp, "(aref %s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1620 "trad1.tab.c"
    break;

  case 48: /* expression: term '(' lexpression ')'  */
#line 246 "trad1.y"
                                                { sprintf (temp, "(%s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1627 "trad1.tab.c"
    break;

  case 49: /* expression: expression '+' expression  */
#line 249 "trad1.y"
                                                { sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1634 "trad1.tab.c"
    break;

  case 50: /* expression: expression '-' expression  */
#line 252 "trad1.y"
                                                { sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1641 "trad1.tab.c"
    break;

  case 51: /* expression: expression '*' expression  */
#line 255 "trad1.y"
                                                { sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1648 "trad1.tab.c"
    break;

  case 52: /* expression: expression '/' expression  */
#line 258 "trad1.y"
                                                { sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1655 "trad1.tab.c"
    break;

  case 53: /* expression: expression '%' expression  */
#line 261 "trad1.y"
                                                { sprintf (temp, "(mod %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1662 "trad1.tab.c"
    break;

  case 54: /* lexpression: expression  */
#line 266 "trad1.y"
                                                        { sprintf (temp, "(print %s) ", yyvsp[0].code) ;
					                        yyval.code = gen_code (temp) ; }
#line 1669 "trad1.tab.c"
    break;

  case 55: /* lexpression: expression ',' lexpression  */
#line 269 "trad1.y"
                                                    { sprintf (temp, "(print %s) %s ", yyvsp[-2].code, yyvsp[0].code) ;
					                        yyval.code = gen_code (temp) ; }
#line 1676 "trad1.tab.c"
    break;

  case 56: /* args: INTEGER IDENTIF  */
#line 274 "trad1.y"
                                                    { sprintf (temp, "%s", yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1683 "trad1.tab.c"
    break;

  case 57: /* args: INTEGER IDENTIF ',' args  */
#line 277 "trad1.y"
                                                    { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1690 "trad1.tab.c"
    break;

  case 58: /* args: expression  */
#line 280 "trad1.y"
                                                    { sprintf (temp, "%s", yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1697 "trad1.tab.c"
    break;

  case 59: /* args: expression ',' args  */
#line 283 "trad1.y"
                                                    { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1704 "trad1.tab.c"
    break;

  case 60: /* term: operand  */
#line 288 "trad1.y"
                                                { yyval = yyvsp[0] ;
                                                yyval.code = gen_code (yyvsp[0].code) ; }
#line 1711 "trad1.tab.c"
    break;

  case 61: /* term: '+' operand  */
#line 291 "trad1.y"
                                                { sprintf (temp, "(+ %s)", yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1718 "trad1.tab.c"
    break;

  case 62: /* term: '-' operand  */
#line 294 "trad1.y"
                                                { sprintf (temp, "(- %s)", yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1725 "trad1.tab.c"
    break;

  case 63: /* operand: IDENTIF  */
#line 299 "trad1.y"
                                        { sprintf (temp, "%s", yyvsp[0].code) ;
                                        yyval = yyvsp[0] ; }
#line 1732 "trad1.tab.c"
    break;

  case 64: /* operand: NUMBER  */
#line 302 "trad1.y"
                                        { sprintf (temp, "%d", yyvsp[0].value) ;
                                        yyval.code = gen_code (temp) ; }
#line 1739 "trad1.tab.c"
    break;

  case 65: /* operand: '(' expression ')'  */
#line 305 "trad1.y"
                                        { yyval = yyvsp[-1] ; }
#line 1745 "trad1.tab.c"
    break;


#line 1749 "trad1.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 308 "trad1.y"
                            // SECTION 4    Code in C

int n_line = 1 ;

void yyerror (char *message)
{
    fprintf (stderr, "%s in line %d\n", message, n_line) ;
    printf ( "\n") ;
}

char *int_to_string (int n)
{
    sprintf (temp, "%d", n) ;
    return gen_code (temp) ;
}

char *char_to_string (char c)
{
    sprintf (temp, "%c", c) ;
    return gen_code (temp) ;
}

char *my_malloc (int nbytes)     // reserve n bytes of dynamic memory 
{
    char *p ;
    static long int nb = 0 ;     // used to count the memory  
    static int nv = 0 ;          // required in total 

    p = malloc (nbytes) ;
    if (p == NULL) {
      fprintf (stderr, "No memory left for additional %d bytes\n", nbytes) ;
      fprintf (stderr, "%ld bytes reserved in %d calls \n", nb, nv) ;  
      exit (0) ;
    }
    nb += (long) nbytes ;
    nv++ ;

    return p ;
}



/***************************************************************************/
/***************************** Keyword Section *****************************/
/***************************************************************************/

typedef struct s_keyword { // for the reserved words of C  
    char *name ;
    int token ;
} t_keyword ;

t_keyword keywords [] = {     // define the keywords 
    "main",        MAIN,      // and their associated token  
    "int",         INTEGER,
    "puts",        PUTS,
    "printf",      PRINTF,
    "<=",          LEQ,
    ">=",          GEQ,
    "&&",          AND,
    "||",          OR,
    "==",          EQ,
    "!=",          NEQ,
    "while",       WHILE,
    "if",          IF,
    "else",        ELSE,
    "for",         FOR,
    "return",      RETURN,
    NULL,          0          // 0 to mark the end of the table
} ;

t_keyword *search_keyword (char *symbol_name)
{                       // Search symbol names in the keyword table
                        // and return a pointer to token register
    int i ;
    t_keyword *sim ;

    i = 0 ;
    sim = keywords ;
    while (sim [i].name != NULL) {
	    if (strcmp (sim [i].name, symbol_name) == 0) {
                                   // strcmp(a, b) returns == 0 if a==b  
            return &(sim [i]) ;
        }
        i++ ;
    }

    return NULL ;
}

 
/***************************************************************************/
/******************** Section for the Lexical Analyzer  ********************/
/***************************************************************************/

char *gen_code (char *name)   // copy the argument to an  
{                             // string in dynamic memory  
    char *p ;
    int l ;
	
    l = strlen (name)+1 ;
    p = (char *) my_malloc (l) ;
    strcpy (p, name) ;
	
    return p ;
}


int yylex ()
{
    int i ;
    unsigned char c ;
    unsigned char cc ;
    char expandable_ops [] =  "!<=>|/%&+-*" ;
    char temp_str [256] ;
    t_keyword *symbol ;

    do { 
        c = getchar () ; 
        if (c == '#') { // Ignore the lines starting with # (#define, #include)
            do { // WARNING that it may malfunction if a line contains #
                c = getchar () ;
            } while (c != '\n') ;
        }
        if (c == '/') { // character / can be the beginning of a comment.
            cc = getchar () ;
            if (cc != '/') { // If the following char is / is a comment, but....
                ungetc (cc, stdin) ;
            } else {
                c = getchar () ; // ...
                if (c == '@') { // Lines starting with //@ are transcribed
                    do { // This is inline code (embedded code in C).
                        c = getchar () ;
                        putchar (c) ;
                    } while (c != '\n') ;
                } else { // ==> comment, ignore the line
                    while (c != '\n') {
                        c = getchar () ;
                    }
                }
            }
        }
        if (c == '\n')
            n_line++ ;
    } while (c == ' ' || c == '\n' || c == 10 || c == 13 || c == '\t') ;

    if (c == '\"') {
        i = 0 ;
        do {
            c = getchar () ;
            temp_str [i++] = c ;
        } while (c != '\"' && i < 255) ;
        if (i == 256) {
            printf ("WARNING: string with more than 255 characters in line %d\n", n_line) ;
        } // we should read until the next “, but, what if it is  missing?
        temp_str [--i] = '\0' ;
        yylval.code = gen_code (temp_str) ;
        return (STRING) ;
    }

    if (c == '.' || (c >= '0' && c <= '9')) {
        ungetc (c, stdin) ;
        scanf ("%d", &yylval.value) ;
//         printf ("\nDEV: NUMBER %d\n", yylval.value) ;
        return NUMBER ;
    }

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        i = 0 ;
        while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9') || c == '_') && i < 255) {
            temp_str [i++] = tolower (c) ; // ALL TO SMALL LETTERS
            c = getchar () ;
    }
    temp_str [i] = '\0' ; // End of string
    ungetc (c, stdin) ; // return excess char

    yylval.code = gen_code (temp_str) ;
    symbol = search_keyword (yylval.code) ;
    if (symbol == NULL) { // is not reserved word -> iderntifrier
//               printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
            return (IDENTIF) ;
        } else {
//               printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
            return (symbol->token) ;
        }
    }

    if (strchr (expandable_ops, c) != NULL) { // // look for c in expandable_ops
        cc = getchar () ;
        sprintf (temp_str, "%c%c", (char) c, (char) cc) ;
        symbol = search_keyword (temp_str) ;
        if (symbol == NULL) {
            ungetc (cc, stdin) ;
            yylval.code = NULL ;
            return (c) ;
        } else {
            yylval.code = gen_code (temp_str) ; // although it is not used
            return (symbol->token) ;
        }
    }

//    printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
    if (c == EOF || c == 255 || c == 26) {
//         printf ("tEOF ") ;                                // PARA DEPURAR
        return (0) ;
    }

    return c ;
}


int main ()
{
    yyparse () ;
}
