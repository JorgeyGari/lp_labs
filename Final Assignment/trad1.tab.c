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

char *fun_name ;    // Global variable to store the name of the function being processed

// Definitions for explicit attributes

typedef struct s_attr {
    int value ;    // - Numeric value of a NUMBER 
    char *code ;   // - to pass IDENTIFIER names, and other translations
    int logical ;  // - 0 if arithmetic value, 1 if logical/conditional value
} t_attr ;

#define YYSTYPE t_attr     // stack of PDA has type t_attr


#line 102 "trad1.tab.c"

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
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  177

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
       0,    89,    89,    93,    98,   101,   104,   107,   111,   113,
     116,   119,   122,   127,   131,   135,   139,   146,   149,   152,
     155,   160,   163,   166,   169,   172,   175,   178,   181,   184,
     189,   192,   197,   200,   203,   206,   212,   215,   218,   221,
     224,   227,   230,   233,   236,   241,   244,   249,   252,   255,
     258,   261,   264,   267,   270,   275,   278,   283,   286,   289,
     292,   297,   300,   303,   308,   311,   314
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

#define YYPACT_NINF (-105)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-9)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,    10,     6,   -16,    38,    20,    13,     1,   106,    61,
     -14,    23,  -105,    14,     1,  -105,  -105,  -105,    54,    12,
      12,    61,    31,    75,    42,    27,  -105,   175,    61,    61,
      37,    44,  -105,    43,  -105,  -105,   217,    51,    61,    61,
      61,    61,    61,   129,    76,    61,    61,    86,   142,   180,
     174,    81,   129,  -105,   -13,   111,    96,    98,   105,   108,
     109,    61,  -105,   116,   107,   174,    68,    68,  -105,  -105,
    -105,  -105,    73,   120,   119,   193,    61,  -105,   118,   174,
    -105,    61,   129,    61,   -12,    61,   146,   150,    61,    46,
     142,  -105,   174,  -105,  -105,   122,    61,  -105,  -105,   142,
    -105,   125,  -105,   161,   159,   198,    61,    61,   164,   149,
     165,   143,   166,   157,   147,  -105,  -105,  -105,  -105,   205,
    -105,   189,  -105,   211,   181,    61,    61,    61,    61,    61,
      61,    61,    61,  -105,    61,   182,    61,   191,    61,  -105,
     174,   142,   142,   142,   142,   142,   142,   142,   142,   184,
     174,   194,    61,  -105,   197,  -105,   199,   223,  -105,  -105,
     213,   212,   209,   214,   245,   218,   174,    64,   174,   219,
     248,   250,   221,  -105,  -105,  -105,  -105
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,     0,     0,     0,     0,     0,     0,     6,     0,     0,
       9,     0,     1,     0,     4,     7,    65,    64,     0,     0,
       0,     0,     0,    59,     0,    47,    61,     0,     0,     0,
       0,     0,     5,    57,    62,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,    66,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,    19,    50,    51,    52,    53,
      54,    60,     0,    55,     0,     0,     0,    11,     0,     0,
      58,     0,     0,     0,    21,     0,     0,     0,     0,     8,
      29,    15,    17,    20,    14,     0,     0,    49,    48,    12,
       2,     0,    23,    30,     0,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,    18,    16,    56,     3,     0,
      28,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,    24,
       0,    41,    42,    37,    38,    44,    43,    39,    40,     0,
       0,     0,     0,    25,     0,    26,     0,     0,    31,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    45,    46,    35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,     4,   167,  -105,   -26,  -105,  -104,  -105,   -87,
    -105,    -9,   -93,   -39,  -105,    85
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    63,    64,   102,    65,   108,
     162,    23,    74,    24,    25,    26
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   112,   122,   117,    71,     1,     2,    28,    81,   106,
      10,    15,    36,    80,    11,    16,    17,    82,    32,    48,
      49,    29,    83,   107,    78,     1,     2,    13,     3,    66,
      67,    68,    69,    70,   153,    -8,    73,    75,    12,    93,
       8,   149,    21,   104,    31,     9,    95,    14,   158,   151,
     113,     2,    90,   101,    30,    54,    55,    45,    33,    56,
      57,    58,    46,    37,    16,    17,   115,    99,    59,    50,
      60,    61,   103,    44,   105,    51,   109,    54,    55,   109,
      52,    56,    57,    58,    62,    19,    20,    73,   170,   171,
      59,    21,    60,    61,    40,    41,    42,   103,   123,    38,
      39,    40,    41,    42,    34,    35,    94,    76,    72,    16,
      17,    18,    43,    79,   154,    84,   141,   142,   143,   144,
     145,   146,   147,   148,   156,    73,    85,   109,    86,   103,
      19,    20,    16,    17,    18,    87,    21,    22,    88,    89,
     169,    92,   172,   103,    38,    39,    40,    41,    42,    91,
      97,   100,   110,    19,    20,   116,   111,    96,   118,    21,
     125,   126,   127,   128,   129,   130,    38,    39,    40,    41,
      42,   131,   132,    38,    39,    40,    41,    42,    54,    55,
     134,   136,    56,    57,    58,    38,    39,    40,    41,    42,
     120,    59,     9,    60,    61,   124,   133,   135,   119,    38,
      39,    40,    41,    42,    38,    39,    40,    41,    42,   137,
     138,    47,   152,   140,   150,   155,    77,    38,    39,    40,
      41,    42,    38,    39,    40,    41,    42,   161,   157,    98,
     159,   163,   160,   164,   121,    38,    39,    40,    41,    42,
     165,    38,    39,    40,    41,    42,   166,   139,    53,   167,
     168,   174,   173,   175,   176,     0,   114
};

static const yytype_int16 yycheck[] =
{
       9,    88,   106,    96,    43,     4,     5,    21,    21,    21,
       4,     7,    21,    52,    30,     3,     4,    30,    14,    28,
      29,    35,    35,    35,    50,     4,     5,     7,     7,    38,
      39,    40,    41,    42,   138,    34,    45,    46,     0,    65,
      30,   134,    30,    82,    30,    35,    72,    34,   152,   136,
       4,     5,    61,    79,    31,     4,     5,    30,     4,     8,
       9,    10,    35,    32,     3,     4,    92,    76,    17,    32,
      19,    20,    81,    31,    83,    31,    85,     4,     5,    88,
      37,     8,     9,    10,    33,    24,    25,    96,    24,    25,
      17,    30,    19,    20,    26,    27,    28,   106,   107,    24,
      25,    26,    27,    28,    19,    20,    33,    21,    32,     3,
       4,     5,    37,    32,   140,     4,   125,   126,   127,   128,
     129,   130,   131,   132,   150,   134,    30,   136,    30,   138,
      24,    25,     3,     4,     5,    30,    30,    31,    30,    30,
     166,    34,   168,   152,    24,    25,    26,    27,    28,    33,
      31,    33,     6,    24,    25,    33,     6,    37,    33,    30,
      11,    12,    13,    14,    15,    16,    24,    25,    26,    27,
      28,    22,    23,    24,    25,    26,    27,    28,     4,     5,
      37,    34,     8,     9,    10,    24,    25,    26,    27,    28,
      31,    17,    35,    19,    20,    31,    31,    31,    37,    24,
      25,    26,    27,    28,    24,    25,    26,    27,    28,     4,
      21,    36,    21,    32,    32,    31,    36,    24,    25,    26,
      27,    28,    24,    25,    26,    27,    28,     4,    34,    36,
      33,    18,    33,    21,    36,    24,    25,    26,    27,    28,
      31,    24,    25,    26,    27,    28,    32,    36,    31,     4,
      32,     3,    33,     3,    33,    -1,    89
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
      19,    20,    33,    43,    44,    46,    49,    49,    49,    49,
      49,    51,    32,    49,    50,    49,    21,    36,    43,    32,
      51,    21,    30,    35,     4,    30,    30,    30,    30,    30,
      49,    33,    34,    43,    33,    43,    37,    31,    36,    49,
      33,    43,    45,    49,    51,    49,    21,    35,    47,    49,
       6,     6,    47,     4,    41,    43,    33,    50,    33,    37,
      31,    36,    45,    49,    31,    11,    12,    13,    14,    15,
      16,    22,    23,    31,    37,    31,    34,     4,    21,    36,
      32,    49,    49,    49,    49,    49,    49,    49,    49,    50,
      32,    47,    21,    45,    43,    31,    43,    34,    45,    33,
      33,     4,    48,    18,    21,    31,    32,     4,    32,    43,
      24,    25,    43,    33,     3,     3,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    39,    40,    40,    40,    40,    41,    41,
      41,    41,    41,    42,    42,    42,    42,    43,    43,    43,
      43,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      45,    45,    46,    46,    46,    46,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    48,    48,    49,    49,    49,
      49,    49,    49,    49,    49,    50,    50,    51,    51,    51,
      51,    52,    52,    52,    53,    53,    53
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     7,     2,     3,     1,     2,     0,     2,
       4,     5,     6,     5,     6,     6,     7,     2,     3,     1,
       2,     2,     4,     3,     5,     6,     6,     4,     4,     2,
       1,     5,     7,     7,    11,    11,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     5,     1,     4,     4,
       3,     3,     3,     3,     3,     1,     3,     2,     4,     1,
       3,     1,     2,     2,     1,     1,     3
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
#line 89 "trad1.y"
                                                { printf ("(defun main ()\n%s\n)\n", yyvsp[-1].code) ;
                                                fun_name = "main" ;
					                            yyval.code = gen_code (temp) ; }
#line 1314 "trad1.tab.c"
    break;

  case 3: /* axiom: bdeclare MAIN '(' ')' '{' body '}'  */
#line 93 "trad1.y"
                                                        { printf ("%s\n(defun main ()\n%s\n)\n", yyvsp[-6].code, yyvsp[-1].code) ;
					                            yyval.code = gen_code (temp) ; }
#line 1321 "trad1.tab.c"
    break;

  case 4: /* bdeclare: declare ';'  */
#line 98 "trad1.y"
                                                    { sprintf (temp, "%s ", yyvsp[-1].code) ;
                                    yyval.code = gen_code (temp) ; }
#line 1328 "trad1.tab.c"
    break;

  case 5: /* bdeclare: declare ';' bdeclare  */
#line 101 "trad1.y"
                                                { sprintf (temp, "%s \n%s ", yyvsp[-2].code, yyvsp[0].code) ;
						            yyval.code = gen_code (temp) ; }
#line 1335 "trad1.tab.c"
    break;

  case 6: /* bdeclare: function  */
#line 104 "trad1.y"
                                    { sprintf (temp, "%s ", yyvsp[0].code) ;
                                    yyval.code = gen_code (temp) ; }
#line 1342 "trad1.tab.c"
    break;

  case 7: /* bdeclare: function bdeclare  */
#line 107 "trad1.y"
                                    { sprintf (temp, "%s \n%s ", yyvsp[-1].code, yyvsp[0].code) ;
                                    yyval.code = gen_code (temp) ; }
#line 1349 "trad1.tab.c"
    break;

  case 9: /* declare: INTEGER IDENTIF  */
#line 113 "trad1.y"
                                                                { sprintf (temp, "(setq %s 0)", yyvsp[0].code) ;
					                                yyval.code = gen_code (temp) ; }
#line 1356 "trad1.tab.c"
    break;

  case 10: /* declare: INTEGER IDENTIF '=' expression  */
#line 116 "trad1.y"
                                                        { sprintf (temp, "(setq %s %d)", yyvsp[-2].code, yyvsp[0].value) ;
					                                yyval.code = gen_code (temp) ; }
#line 1363 "trad1.tab.c"
    break;

  case 11: /* declare: INTEGER IDENTIF '[' expression ']'  */
#line 119 "trad1.y"
                                                    { sprintf (temp, "(setq %s (make-array %s))", yyvsp[-3].code, yyvsp[-1].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1370 "trad1.tab.c"
    break;

  case 12: /* declare: IDENTIF '[' expression ']' '=' expression  */
#line 122 "trad1.y"
                                                    { sprintf (temp, "(setf (aref %s %s) %s", yyvsp[-5].code, yyvsp[-3].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1377 "trad1.tab.c"
    break;

  case 13: /* function: IDENTIF '(' ')' '{' '}'  */
#line 127 "trad1.y"
                                                    { sprintf (temp, "(defun %s ()\n)\n", yyvsp[-4].code) ;
                                                    fun_name = yyvsp[-4].code ;
                                                    yyval.code = gen_code (temp) ; }
#line 1385 "trad1.tab.c"
    break;

  case 14: /* function: IDENTIF '(' args ')' '{' '}'  */
#line 131 "trad1.y"
                                                    { sprintf (temp, "(defun %s (%s)\n)\n", yyvsp[-5].code, yyvsp[-3].code) ;
                                                    fun_name = yyvsp[-5].code ;
                                                    yyval.code = gen_code (temp) ; }
#line 1393 "trad1.tab.c"
    break;

  case 15: /* function: IDENTIF '(' ')' '{' body '}'  */
#line 135 "trad1.y"
                                                    { sprintf (temp, "(defun %s ()\n%s\n)\n", yyvsp[-5].code, yyvsp[-1].code) ;
                                                    fun_name = yyvsp[-5].code ;
                                                    yyval.code = gen_code (temp) ; }
#line 1401 "trad1.tab.c"
    break;

  case 16: /* function: IDENTIF '(' args ')' '{' body '}'  */
#line 139 "trad1.y"
                                                    { sprintf (temp, "(defun %s (%s)\n%s\n)\n", yyvsp[-6].code, yyvsp[-4].code, yyvsp[-1].code) ;
                                                    fun_name = yyvsp[-6].code ;
                                                    yyval.code = gen_code (temp) ; }
#line 1409 "trad1.tab.c"
    break;

  case 17: /* body: sentence ';'  */
#line 146 "trad1.y"
                                { sprintf (temp, "%s ", yyvsp[-1].code) ;
						        yyval.code = gen_code (temp) ; }
#line 1416 "trad1.tab.c"
    break;

  case 18: /* body: sentence ';' body  */
#line 149 "trad1.y"
                                    { sprintf (temp, "%s \n%s ", yyvsp[-2].code, yyvsp[0].code) ;
						        yyval.code = gen_code (temp) ; }
#line 1423 "trad1.tab.c"
    break;

  case 19: /* body: control  */
#line 152 "trad1.y"
                                { sprintf (temp, "%s ", yyvsp[0].code) ;
                                yyval.code = gen_code (temp) ; }
#line 1430 "trad1.tab.c"
    break;

  case 20: /* body: control body  */
#line 155 "trad1.y"
                                { sprintf (temp, "%s \n%s ", yyvsp[-1].code, yyvsp[0].code) ;
                                yyval.code = gen_code (temp) ; }
#line 1437 "trad1.tab.c"
    break;

  case 21: /* sentence: INTEGER IDENTIF  */
#line 160 "trad1.y"
                                                   { sprintf (temp, "(setq %s 0)", yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1444 "trad1.tab.c"
    break;

  case 22: /* sentence: INTEGER IDENTIF '=' assign  */
#line 163 "trad1.y"
                                                   { sprintf (temp, "(setq %s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1451 "trad1.tab.c"
    break;

  case 23: /* sentence: IDENTIF '=' assign  */
#line 166 "trad1.y"
                                                   { sprintf (temp, "(setq %s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1458 "trad1.tab.c"
    break;

  case 24: /* sentence: INTEGER IDENTIF '[' expression ']'  */
#line 169 "trad1.y"
                                                   { sprintf (temp, "(setq %s (make-array %s))", yyvsp[-3].code, yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1465 "trad1.tab.c"
    break;

  case 25: /* sentence: IDENTIF '[' expression ']' '=' assign  */
#line 172 "trad1.y"
                                                   { sprintf (temp, "(setf (aref %s %s) %s", yyvsp[-5].code, yyvsp[-3].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1472 "trad1.tab.c"
    break;

  case 26: /* sentence: PRINTF '(' STRING ',' lexpression ')'  */
#line 175 "trad1.y"
                                                   { sprintf (temp, "%s ", yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1479 "trad1.tab.c"
    break;

  case 27: /* sentence: PUTS '(' STRING ')'  */
#line 178 "trad1.y"
                                                   { sprintf (temp, "(print \"%s\") ", yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1486 "trad1.tab.c"
    break;

  case 28: /* sentence: IDENTIF '(' args ')'  */
#line 181 "trad1.y"
                                                   { sprintf (temp, "(%s %s) ", yyvsp[-3].code, yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1493 "trad1.tab.c"
    break;

  case 29: /* sentence: RETURN expression  */
#line 184 "trad1.y"
                                                   { sprintf (temp, "(return-from %s %s)", fun_name, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1500 "trad1.tab.c"
    break;

  case 30: /* assign: expression  */
#line 189 "trad1.y"
                                                    { sprintf (temp, "%s)", yyvsp[0].code) ;
					                                yyval.code = gen_code (temp) ; }
#line 1507 "trad1.tab.c"
    break;

  case 31: /* assign: expression ',' IDENTIF '=' assign  */
#line 192 "trad1.y"
                                                        { sprintf (temp, "%d) (setq %s %s", yyvsp[-4].value, yyvsp[-2].code, yyvsp[0].code) ;
					                                yyval.code = gen_code (temp) ; }
#line 1514 "trad1.tab.c"
    break;

  case 32: /* control: WHILE '(' condition ')' '{' body '}'  */
#line 197 "trad1.y"
                                                                    { sprintf (temp, "(loop while %s do %s\n)", yyvsp[-4].code, yyvsp[-1].code) ;
                                                                    yyval.code = gen_code (temp) ; }
#line 1521 "trad1.tab.c"
    break;

  case 33: /* control: IF '(' condition ')' '{' body '}'  */
#line 200 "trad1.y"
                                                                    { sprintf (temp, "(if %s\n%s\n)", yyvsp[-4].code, yyvsp[-1].code) ;
                                                                    yyval.code = gen_code (temp) ; }
#line 1528 "trad1.tab.c"
    break;

  case 34: /* control: IF '(' condition ')' '{' body '}' ELSE '{' body '}'  */
#line 203 "trad1.y"
                                                                    { sprintf (temp, "(if %s\n(progn %s)\n(progn %s)\n)", yyvsp[-8].code, yyvsp[-5].code, yyvsp[-1].code) ;
                                                                    yyval.code = gen_code (temp) ; }
#line 1535 "trad1.tab.c"
    break;

  case 35: /* control: FOR '(' declare ';' condition ';' incdec ')' '{' body '}'  */
#line 207 "trad1.y"
                                                                    { sprintf (temp, "%s\n(loop while %s do %s\n%s", yyvsp[-8].code, yyvsp[-6].code, yyvsp[-1].code, yyvsp[-4].code) ;
                                                                    yyval.code = gen_code (temp) ;}
#line 1542 "trad1.tab.c"
    break;

  case 36: /* condition: expression  */
#line 212 "trad1.y"
                                                    { sprintf (temp, "(/= 0 %s)", yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1549 "trad1.tab.c"
    break;

  case 37: /* condition: expression EQ expression  */
#line 215 "trad1.y"
                                                    { sprintf (temp, "(= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1556 "trad1.tab.c"
    break;

  case 38: /* condition: expression NEQ expression  */
#line 218 "trad1.y"
                                                    { sprintf (temp, "(/= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1563 "trad1.tab.c"
    break;

  case 39: /* condition: expression '<' expression  */
#line 221 "trad1.y"
                                                    { sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1570 "trad1.tab.c"
    break;

  case 40: /* condition: expression '>' expression  */
#line 224 "trad1.y"
                                                    { sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1577 "trad1.tab.c"
    break;

  case 41: /* condition: expression LEQ expression  */
#line 227 "trad1.y"
                                                    { sprintf (temp, "(<= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1584 "trad1.tab.c"
    break;

  case 42: /* condition: expression GEQ expression  */
#line 230 "trad1.y"
                                                    { sprintf (temp, "(>= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1591 "trad1.tab.c"
    break;

  case 43: /* condition: expression AND expression  */
#line 233 "trad1.y"
                                                    { sprintf (temp, "(and (/= 0 %s) (/= 0 %s))", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1598 "trad1.tab.c"
    break;

  case 44: /* condition: expression OR expression  */
#line 236 "trad1.y"
                                                    { sprintf (temp, "(or (/= 0 %s) (/= 0 %s))", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1605 "trad1.tab.c"
    break;

  case 45: /* incdec: IDENTIF '=' IDENTIF '+' NUMBER  */
#line 241 "trad1.y"
                                                { sprintf (temp, "(setq %s (+ %s %d))", yyvsp[-4].code, yyvsp[-4].code, yyvsp[-1].value) ;
                                                yyval.code = gen_code (temp) ; }
#line 1612 "trad1.tab.c"
    break;

  case 46: /* incdec: IDENTIF '=' IDENTIF '-' NUMBER  */
#line 244 "trad1.y"
                                                { sprintf (temp, "(setq %s (- %s %d))", yyvsp[-4].code, yyvsp[-4].code, yyvsp[-1].value) ;
                                                yyval.code = gen_code (temp) ; }
#line 1619 "trad1.tab.c"
    break;

  case 47: /* expression: term  */
#line 249 "trad1.y"
                                                { yyval = yyvsp[0] ; 
                                                yyval.code = gen_code (yyvsp[0].code) ; }
#line 1626 "trad1.tab.c"
    break;

  case 48: /* expression: term '[' expression ']'  */
#line 252 "trad1.y"
                                                { sprintf (temp, "(aref %s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1633 "trad1.tab.c"
    break;

  case 49: /* expression: term '(' lexpression ')'  */
#line 255 "trad1.y"
                                                { sprintf (temp, "(%s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1640 "trad1.tab.c"
    break;

  case 50: /* expression: expression '+' expression  */
#line 258 "trad1.y"
                                                { sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1647 "trad1.tab.c"
    break;

  case 51: /* expression: expression '-' expression  */
#line 261 "trad1.y"
                                                { sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1654 "trad1.tab.c"
    break;

  case 52: /* expression: expression '*' expression  */
#line 264 "trad1.y"
                                                { sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1661 "trad1.tab.c"
    break;

  case 53: /* expression: expression '/' expression  */
#line 267 "trad1.y"
                                                { sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1668 "trad1.tab.c"
    break;

  case 54: /* expression: expression '%' expression  */
#line 270 "trad1.y"
                                                { sprintf (temp, "(mod %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1675 "trad1.tab.c"
    break;

  case 55: /* lexpression: expression  */
#line 275 "trad1.y"
                                                        { sprintf (temp, "(print %s) ", yyvsp[0].code) ;
					                        yyval.code = gen_code (temp) ; }
#line 1682 "trad1.tab.c"
    break;

  case 56: /* lexpression: expression ',' lexpression  */
#line 278 "trad1.y"
                                                    { sprintf (temp, "(print %s) %s ", yyvsp[-2].code, yyvsp[0].code) ;
					                        yyval.code = gen_code (temp) ; }
#line 1689 "trad1.tab.c"
    break;

  case 57: /* args: INTEGER IDENTIF  */
#line 283 "trad1.y"
                                                    { sprintf (temp, "%s", yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1696 "trad1.tab.c"
    break;

  case 58: /* args: INTEGER IDENTIF ',' args  */
#line 286 "trad1.y"
                                                    { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1703 "trad1.tab.c"
    break;

  case 59: /* args: expression  */
#line 289 "trad1.y"
                                                    { sprintf (temp, "%s", yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1710 "trad1.tab.c"
    break;

  case 60: /* args: expression ',' args  */
#line 292 "trad1.y"
                                                    { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1717 "trad1.tab.c"
    break;

  case 61: /* term: operand  */
#line 297 "trad1.y"
                                                { yyval = yyvsp[0] ;
                                                yyval.code = gen_code (yyvsp[0].code) ; }
#line 1724 "trad1.tab.c"
    break;

  case 62: /* term: '+' operand  */
#line 300 "trad1.y"
                                                { sprintf (temp, "(+ %s)", yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1731 "trad1.tab.c"
    break;

  case 63: /* term: '-' operand  */
#line 303 "trad1.y"
                                                { sprintf (temp, "(- %s)", yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1738 "trad1.tab.c"
    break;

  case 64: /* operand: IDENTIF  */
#line 308 "trad1.y"
                                        { sprintf (temp, "%s", yyvsp[0].code) ;
                                        yyval = yyvsp[0] ; }
#line 1745 "trad1.tab.c"
    break;

  case 65: /* operand: NUMBER  */
#line 311 "trad1.y"
                                        { sprintf (temp, "%d", yyvsp[0].value) ;
                                        yyval.code = gen_code (temp) ; }
#line 1752 "trad1.tab.c"
    break;

  case 66: /* operand: '(' expression ')'  */
#line 314 "trad1.y"
                                        { yyval = yyvsp[-1] ; }
#line 1758 "trad1.tab.c"
    break;


#line 1762 "trad1.tab.c"

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

#line 317 "trad1.y"
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
