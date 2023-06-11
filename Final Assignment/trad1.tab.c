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

char fun_name [256] ;    // Global variable to store the name of the function being processed

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
  YYSYMBOL_40_1 = 40,                      /* $@1  */
  YYSYMBOL_41_2 = 41,                      /* $@2  */
  YYSYMBOL_bdeclare = 42,                  /* bdeclare  */
  YYSYMBOL_declare = 43,                   /* declare  */
  YYSYMBOL_function = 44,                  /* function  */
  YYSYMBOL_45_3 = 45,                      /* $@3  */
  YYSYMBOL_rfunction = 46,                 /* rfunction  */
  YYSYMBOL_body = 47,                      /* body  */
  YYSYMBOL_localvar = 48,                  /* localvar  */
  YYSYMBOL_sentence = 49,                  /* sentence  */
  YYSYMBOL_moreid = 50,                    /* moreid  */
  YYSYMBOL_multid = 51,                    /* multid  */
  YYSYMBOL_multexpr = 52,                  /* multexpr  */
  YYSYMBOL_assign = 53,                    /* assign  */
  YYSYMBOL_control = 54,                   /* control  */
  YYSYMBOL_condition = 55,                 /* condition  */
  YYSYMBOL_incdec = 56,                    /* incdec  */
  YYSYMBOL_expression = 57,                /* expression  */
  YYSYMBOL_lexpression = 58,               /* lexpression  */
  YYSYMBOL_args = 59,                      /* args  */
  YYSYMBOL_term = 60,                      /* term  */
  YYSYMBOL_operand = 61                    /* operand  */
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
#define YYLAST   318

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  213

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
       0,    89,    89,    89,    93,    93,    98,   101,   104,   107,
     111,   113,   116,   119,   122,   127,   127,   133,   136,   139,
     142,   146,   149,   152,   155,   158,   161,   166,   169,   174,
     177,   180,   183,   186,   189,   192,   195,   198,   201,   204,
     209,   212,   217,   220,   225,   228,   233,   236,   241,   244,
     247,   250,   254,   260,   263,   266,   269,   272,   275,   278,
     281,   284,   289,   292,   297,   300,   303,   306,   309,   312,
     315,   318,   321,   326,   329,   334,   337,   340,   343,   348,
     351,   354,   359,   362,   365
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
  "'{'", "'}'", "';'", "'['", "']'", "','", "$accept", "axiom", "$@1",
  "$@2", "bdeclare", "declare", "function", "$@3", "rfunction", "body",
  "localvar", "sentence", "moreid", "multid", "multexpr", "assign",
  "control", "condition", "incdec", "expression", "lexpression", "args",
  "term", "operand", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-131)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-11)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     104,   -26,    18,  -131,    11,     6,     5,     1,   155,    17,
     -18,    41,  -131,  -131,     1,  -131,  -131,  -131,     4,     4,
     155,   220,   -20,  -131,    73,  -131,   155,   155,    10,    43,
    -131,  -131,  -131,   274,   155,   155,   155,   155,   155,    72,
     126,   155,    90,    93,    95,    74,   162,   233,   107,    87,
    -131,    86,    86,  -131,  -131,  -131,   155,  -131,   110,   238,
     123,    55,   140,   129,  -131,   195,   131,   162,  -131,  -131,
     140,    31,   163,   142,   143,   146,   148,   161,   155,  -131,
     168,   177,   179,   195,  -131,    82,   169,   195,  -131,   155,
     144,   155,   212,    32,   155,   211,   224,   155,    45,   182,
    -131,   195,   195,  -131,  -131,   185,  -131,   198,   162,  -131,
     203,   251,   199,   214,   155,   155,   228,    64,   170,   206,
     213,    69,    75,   217,   155,  -131,  -131,  -131,  -131,  -131,
     232,   212,   155,  -131,   196,   256,   218,  -131,   155,   155,
     222,   155,   155,   155,   155,   155,   155,  -131,   155,   235,
     155,   155,  -131,   201,   155,  -131,  -131,   245,  -131,   228,
     252,  -131,   195,   162,   162,   162,   162,   162,   162,   215,
     239,   195,   269,     9,   155,   162,   250,  -131,   240,   155,
    -131,   253,   155,   268,  -131,   155,  -131,  -131,   267,    21,
     270,   257,  -131,   258,   268,   285,   272,   195,   275,   103,
     195,   276,   278,   304,   305,   279,  -131,   195,  -131,  -131,
    -131,   280,  -131
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      10,    15,     0,     2,     0,     0,     0,     8,     0,     0,
      11,     0,     1,     4,     6,     9,    83,    82,     0,     0,
       0,     0,    64,    79,     0,    16,     0,     0,     0,     0,
       7,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,    12,     0,     0,     0,
      84,    68,    69,    70,    71,    72,     0,    66,     0,     0,
      75,     0,     0,     0,    13,     0,     0,    14,    67,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,     0,    23,    78,     0,     0,     0,    76,     0,
       0,     0,     0,    27,     0,     0,     0,     0,    10,    37,
      19,    25,    21,    24,    18,     0,     3,     0,    30,    35,
       0,     0,    42,     0,     0,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,    26,    22,    20,     5,    36,
       0,     0,     0,    28,    46,     0,    40,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,    38,    44,     0,    43,    39,     0,    31,     0,
      61,    60,     0,    58,    59,    54,    55,    56,    57,    73,
       0,     0,     0,     0,     0,    32,     0,    41,     0,     0,
      33,     0,     0,     0,    45,     0,    48,    74,    49,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,    62,    63,
      51,     0,    52
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,  -131,  -131,  -131,     7,   216,  -131,  -131,  -131,   -45,
    -131,  -131,   152,   184,  -130,   132,  -131,   -93,   122,    -8,
     139,   -39,  -131,   135
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,    11,    29,     5,     6,     7,     9,    25,    80,
      81,    82,   137,   113,   152,   133,    83,   117,   191,   118,
     170,    45,    22,    23
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    58,   156,    26,   121,     1,     2,    16,    17,     8,
      40,    12,    33,    13,    15,    41,    44,    27,    46,    47,
      86,    30,    10,    84,   138,   139,    51,    52,    53,    54,
      55,    88,    44,    59,    20,   -10,   138,   139,   103,    14,
     105,    48,   107,   183,   184,   160,   161,    24,    67,   122,
       2,   110,    89,   114,    44,   194,   125,   126,   173,    71,
      72,    90,    44,    73,    74,    75,    91,   115,    92,   116,
      99,    28,    76,    49,    77,    78,    16,    17,    42,   138,
     139,   108,    44,   111,   138,   139,    71,    72,    79,   189,
      73,    74,    75,    56,    60,   140,   150,    18,    19,    76,
     149,    77,    78,    20,    43,    63,   134,   135,     1,     2,
       8,     3,    36,    37,    38,   104,   153,   178,    66,    34,
      35,    36,    37,    38,   153,    61,   181,   203,   204,    16,
      17,    42,    62,   163,   164,   165,   166,   167,   168,    65,
     169,    68,   172,    16,    17,    42,   175,    16,    17,    42,
      18,    19,   201,    31,    32,   205,    20,    57,    16,    17,
      70,    85,   211,    87,    18,    19,   153,    93,    18,    19,
      20,   169,    94,    95,    20,   109,    96,   134,    97,    18,
      19,   141,   142,   143,   144,    20,    34,    35,    36,    37,
      38,    98,   145,   146,    34,    35,    36,    37,    38,    71,
      72,   100,   106,    73,    74,    75,    34,    35,    36,    37,
      38,   101,    76,   102,    77,    78,   112,   119,   127,   124,
      34,    35,    36,    37,    38,    34,    35,    36,    37,    38,
     120,   128,   136,   157,   129,   132,   131,   147,   174,    34,
      35,    36,    37,    38,    34,    35,    36,    37,    38,   176,
     148,   151,   179,   154,   162,   159,    39,    34,    35,    36,
      37,    38,    34,    35,    36,    37,    38,   171,   139,    64,
     180,   185,   190,   186,    69,    34,    35,    36,    37,    38,
      34,    35,    36,    37,    38,   193,   188,   130,   196,   199,
     197,   195,   158,    34,    35,    36,    37,    38,    34,    35,
      36,    37,    38,   182,   200,    50,   202,   208,   209,   206,
     207,   177,   210,   212,   123,   155,   198,   192,   187
};

static const yytype_uint8 yycheck[] =
{
       8,    40,   132,    21,    97,     4,     5,     3,     4,    35,
      30,     0,    20,     7,     7,    35,    24,    35,    26,    27,
      65,    14,     4,    62,    15,    16,    34,    35,    36,    37,
      38,    70,    40,    41,    30,    34,    15,    16,    83,    34,
      85,    31,    87,    34,   174,   138,   139,    30,    56,     4,
       5,    90,    21,    21,    62,    34,   101,   102,   151,     4,
       5,    30,    70,     8,     9,    10,    35,    35,    37,    37,
      78,    30,    17,    30,    19,    20,     3,     4,     5,    15,
      16,    89,    90,    91,    15,    16,     4,     5,    33,   182,
       8,     9,    10,    21,     4,    31,    21,    24,    25,    17,
      31,    19,    20,    30,    31,    31,   114,   115,     4,     5,
      35,     7,    26,    27,    28,    33,   124,   162,    31,    24,
      25,    26,    27,    28,   132,    32,   171,    24,    25,     3,
       4,     5,    37,   141,   142,   143,   144,   145,   146,    32,
     148,    31,   150,     3,     4,     5,   154,     3,     4,     5,
      24,    25,   197,    18,    19,   200,    30,    31,     3,     4,
      37,    32,   207,    32,    24,    25,   174,     4,    24,    25,
      30,   179,    30,    30,    30,    31,    30,   185,    30,    24,
      25,    11,    12,    13,    14,    30,    24,    25,    26,    27,
      28,    30,    22,    23,    24,    25,    26,    27,    28,     4,
       5,    33,    33,     8,     9,    10,    24,    25,    26,    27,
      28,    34,    17,    34,    19,    20,     4,     6,    33,    37,
      24,    25,    26,    27,    28,    24,    25,    26,    27,    28,
       6,    33,     4,    37,    31,    21,    37,    31,    37,    24,
      25,    26,    27,    28,    24,    25,    26,    27,    28,     4,
      37,    34,    37,    21,    32,    37,    36,    24,    25,    26,
      27,    28,    24,    25,    26,    27,    28,    32,    16,    36,
      31,    21,     4,    33,    36,    24,    25,    26,    27,    28,
      24,    25,    26,    27,    28,    18,    33,    36,    31,     4,
      32,    21,    36,    24,    25,    26,    27,    28,    24,    25,
      26,    27,    28,    34,    32,    31,    31,     3,     3,    33,
      32,   159,    33,    33,    98,   131,   194,   185,   179
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     7,    39,    42,    43,    44,    35,    45,
       4,    40,     0,     7,    34,    42,     3,     4,    24,    25,
      30,    57,    60,    61,    30,    46,    21,    35,    30,    41,
      42,    61,    61,    57,    24,    25,    26,    27,    28,    36,
      30,    35,     5,    31,    57,    59,    57,    57,    31,    30,
      31,    57,    57,    57,    57,    57,    21,    31,    59,    57,
       4,    32,    37,    31,    36,    32,    31,    57,    31,    36,
      37,     4,     5,     8,     9,    10,    17,    19,    20,    33,
      47,    48,    49,    54,    59,    32,    47,    32,    59,    21,
      30,    35,    37,     4,    30,    30,    30,    30,    30,    57,
      33,    34,    34,    47,    33,    47,    33,    47,    57,    31,
      59,    57,     4,    51,    21,    35,    37,    55,    57,     6,
       6,    55,     4,    43,    37,    47,    47,    33,    33,    31,
      36,    37,    21,    53,    57,    57,     4,    50,    15,    16,
      31,    11,    12,    13,    14,    22,    23,    31,    37,    31,
      21,    34,    52,    57,    21,    51,    52,    37,    36,    37,
      55,    55,    32,    57,    57,    57,    57,    57,    57,    57,
      58,    32,    57,    55,    37,    57,     4,    50,    47,    37,
      31,    47,    34,    34,    52,    21,    33,    58,    33,    55,
       4,    56,    53,    18,    34,    21,    31,    32,    56,     4,
      32,    47,    31,    24,    25,    47,    33,    32,     3,     3,
      33,    47,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    40,    39,    41,    39,    42,    42,    42,    42,
      43,    43,    43,    43,    43,    45,    44,    46,    46,    46,
      46,    47,    47,    47,    47,    47,    47,    48,    48,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      50,    50,    51,    51,    52,    52,    53,    53,    54,    54,
      54,    54,    54,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    59,    59,    59,    59,    60,
      60,    60,    61,    61,    61
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     7,     0,     8,     2,     3,     1,     2,
       0,     2,     4,     5,     6,     0,     3,     4,     5,     5,
       6,     2,     3,     1,     2,     2,     3,     2,     4,     4,
       3,     5,     6,     6,     4,     3,     4,     2,     4,     5,
       1,     3,     1,     3,     1,     3,     1,     5,     7,     7,
      11,    11,    13,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     5,     1,     4,     3,     4,     3,     3,
       3,     3,     3,     1,     3,     2,     4,     1,     3,     1,
       2,     2,     1,     1,     3
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
  case 2: /* $@1: %empty  */
#line 89 "trad1.y"
                                            { strcpy (fun_name, yyvsp[0].code) ; }
#line 1353 "trad1.tab.c"
    break;

  case 3: /* axiom: MAIN $@1 '(' ')' '{' body '}'  */
#line 90 "trad1.y"
                                            { printf ("(defun main ()\n%s\n)\n", yyvsp[-1].code) ; 
                                            yyval.code = gen_code (temp) ; }
#line 1360 "trad1.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 93 "trad1.y"
                                                { strcpy (fun_name, "main") ; }
#line 1366 "trad1.tab.c"
    break;

  case 5: /* axiom: bdeclare MAIN $@2 '(' ')' '{' body '}'  */
#line 94 "trad1.y"
                                            { printf ("%s\n(defun main ()\n%s\n)\n", yyvsp[-7].code, yyvsp[-1].code) ; }
#line 1372 "trad1.tab.c"
    break;

  case 6: /* bdeclare: declare ';'  */
#line 98 "trad1.y"
                                                    { sprintf (temp, "%s ", yyvsp[-1].code) ;
                                    yyval.code = gen_code (temp) ; }
#line 1379 "trad1.tab.c"
    break;

  case 7: /* bdeclare: declare ';' bdeclare  */
#line 101 "trad1.y"
                                                { sprintf (temp, "%s\n%s ", yyvsp[-2].code, yyvsp[0].code) ;
						            yyval.code = gen_code (temp) ; }
#line 1386 "trad1.tab.c"
    break;

  case 8: /* bdeclare: function  */
#line 104 "trad1.y"
                                    { sprintf (temp, "%s ", yyvsp[0].code) ;
                                    yyval.code = gen_code (temp) ; }
#line 1393 "trad1.tab.c"
    break;

  case 9: /* bdeclare: function bdeclare  */
#line 107 "trad1.y"
                                    { sprintf (temp, "%s\n%s ", yyvsp[-1].code, yyvsp[0].code) ;
                                    yyval.code = gen_code (temp) ; }
#line 1400 "trad1.tab.c"
    break;

  case 11: /* declare: INTEGER IDENTIF  */
#line 113 "trad1.y"
                                                                { sprintf (temp, "(setq %s 0)", yyvsp[0].code) ;
					                                yyval.code = gen_code (temp) ; }
#line 1407 "trad1.tab.c"
    break;

  case 12: /* declare: INTEGER IDENTIF '=' expression  */
#line 116 "trad1.y"
                                                        { sprintf (temp, "(setq %s %d)", yyvsp[-2].code, yyvsp[0].value) ;
					                                yyval.code = gen_code (temp) ; }
#line 1414 "trad1.tab.c"
    break;

  case 13: /* declare: INTEGER IDENTIF '[' expression ']'  */
#line 119 "trad1.y"
                                                    { sprintf (temp, "(setq %s (make-array %s))", yyvsp[-3].code, yyvsp[-1].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1421 "trad1.tab.c"
    break;

  case 14: /* declare: IDENTIF '[' expression ']' '=' expression  */
#line 122 "trad1.y"
                                                    { sprintf (temp, "(setf (aref %s %s) %s", yyvsp[-5].code, yyvsp[-3].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1428 "trad1.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 127 "trad1.y"
                                                    { strcpy (fun_name, yyvsp[0].code) ; }
#line 1434 "trad1.tab.c"
    break;

  case 16: /* function: IDENTIF $@3 rfunction  */
#line 128 "trad1.y"
                                                    { sprintf (temp, "(defun %s%s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1441 "trad1.tab.c"
    break;

  case 17: /* rfunction: '(' ')' '{' '}'  */
#line 133 "trad1.y"
                                                    { sprintf (temp, "() )") ;
                                                    yyval.code = gen_code (temp) ; }
#line 1448 "trad1.tab.c"
    break;

  case 18: /* rfunction: '(' args ')' '{' '}'  */
#line 136 "trad1.y"
                                                    { sprintf (temp, "(%s) )", yyvsp[-3].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1455 "trad1.tab.c"
    break;

  case 19: /* rfunction: '(' ')' '{' body '}'  */
#line 139 "trad1.y"
                                                    { sprintf (temp, "()\n%s", yyvsp[-1].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1462 "trad1.tab.c"
    break;

  case 20: /* rfunction: '(' args ')' '{' body '}'  */
#line 142 "trad1.y"
                                                    { sprintf (temp, "(%s)\n%s", yyvsp[-4].code, yyvsp[-1].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1469 "trad1.tab.c"
    break;

  case 21: /* body: sentence ';'  */
#line 146 "trad1.y"
                                { sprintf (temp, "%s", yyvsp[-1].code) ;
						        yyval.code = gen_code (temp) ; }
#line 1476 "trad1.tab.c"
    break;

  case 22: /* body: sentence ';' body  */
#line 149 "trad1.y"
                                    { sprintf (temp, "%s\n%s ", yyvsp[-2].code, yyvsp[0].code) ;
						        yyval.code = gen_code (temp) ; }
#line 1483 "trad1.tab.c"
    break;

  case 23: /* body: control  */
#line 152 "trad1.y"
                                { sprintf (temp, "%s", yyvsp[0].code) ;
                                yyval.code = gen_code (temp) ; }
#line 1490 "trad1.tab.c"
    break;

  case 24: /* body: control body  */
#line 155 "trad1.y"
                                { sprintf (temp, "%s\n%s ", yyvsp[-1].code, yyvsp[0].code) ;
                                yyval.code = gen_code (temp) ; }
#line 1497 "trad1.tab.c"
    break;

  case 25: /* body: localvar ';'  */
#line 158 "trad1.y"
                                { sprintf (temp, "(let (%s)) ", yyvsp[-1].code) ;
                                yyval.code = gen_code (temp) ; }
#line 1504 "trad1.tab.c"
    break;

  case 26: /* body: localvar ';' body  */
#line 161 "trad1.y"
                                { sprintf (temp, "(let (%s)\n%s\n)", yyvsp[-2].code, yyvsp[0].code) ;
                                yyval.code = gen_code (temp) ; }
#line 1511 "trad1.tab.c"
    break;

  case 27: /* localvar: INTEGER IDENTIF  */
#line 166 "trad1.y"
                                                   { sprintf (temp, "(%s 0)", yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1518 "trad1.tab.c"
    break;

  case 28: /* localvar: INTEGER IDENTIF '=' assign  */
#line 169 "trad1.y"
                                                   { sprintf (temp, "(%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1525 "trad1.tab.c"
    break;

  case 29: /* sentence: INTEGER IDENTIF ',' moreid  */
#line 174 "trad1.y"
                                                   { sprintf (temp, "(setq %s 0)\n%s", yyvsp[-2].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1532 "trad1.tab.c"
    break;

  case 30: /* sentence: IDENTIF '=' expression  */
#line 177 "trad1.y"
                                                   { sprintf (temp, "(setq %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1539 "trad1.tab.c"
    break;

  case 31: /* sentence: INTEGER IDENTIF '[' expression ']'  */
#line 180 "trad1.y"
                                                   { sprintf (temp, "(setq %s (make-array %s))", yyvsp[-3].code, yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1546 "trad1.tab.c"
    break;

  case 32: /* sentence: IDENTIF '[' expression ']' '=' expression  */
#line 183 "trad1.y"
                                                        { sprintf (temp, "(setf (aref %s %s) %s)", yyvsp[-5].code, yyvsp[-3].code, yyvsp[0].code) ;
                                                        yyval.code = gen_code (temp) ; }
#line 1553 "trad1.tab.c"
    break;

  case 33: /* sentence: PRINTF '(' STRING ',' lexpression ')'  */
#line 186 "trad1.y"
                                                   { sprintf (temp, "%s ", yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1560 "trad1.tab.c"
    break;

  case 34: /* sentence: PUTS '(' STRING ')'  */
#line 189 "trad1.y"
                                                   { sprintf (temp, "(print \"%s\") ", yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1567 "trad1.tab.c"
    break;

  case 35: /* sentence: IDENTIF '(' ')'  */
#line 192 "trad1.y"
                                                   { sprintf (temp, "(%s) ", yyvsp[-2].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1574 "trad1.tab.c"
    break;

  case 36: /* sentence: IDENTIF '(' args ')'  */
#line 195 "trad1.y"
                                                   { sprintf (temp, "(%s %s) ", yyvsp[-3].code, yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1581 "trad1.tab.c"
    break;

  case 37: /* sentence: RETURN expression  */
#line 198 "trad1.y"
                                                   { sprintf (temp, "(return-from %s %s)", fun_name, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1588 "trad1.tab.c"
    break;

  case 38: /* sentence: RETURN expression ',' multexpr  */
#line 201 "trad1.y"
                                                   { sprintf (temp, "(return-from %s (values %s %s))", fun_name, yyvsp[-2].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1595 "trad1.tab.c"
    break;

  case 39: /* sentence: IDENTIF ',' multid '=' multexpr  */
#line 204 "trad1.y"
                                                    { sprintf (temp, "(setf (values %s %s) %s)", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1602 "trad1.tab.c"
    break;

  case 40: /* moreid: IDENTIF  */
#line 209 "trad1.y"
                                                    { sprintf (temp, "(setq %s 0)", yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1609 "trad1.tab.c"
    break;

  case 41: /* moreid: IDENTIF ',' moreid  */
#line 212 "trad1.y"
                                                    { sprintf (temp, "(setq %s 0)\n%s", yyvsp[-2].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1616 "trad1.tab.c"
    break;

  case 42: /* multid: IDENTIF  */
#line 217 "trad1.y"
                                                    { sprintf (temp, "%s", yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1623 "trad1.tab.c"
    break;

  case 43: /* multid: IDENTIF ',' multid  */
#line 220 "trad1.y"
                                                    { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1630 "trad1.tab.c"
    break;

  case 44: /* multexpr: expression  */
#line 225 "trad1.y"
                                                    { yyval = yyvsp[0] ;
                                                    yyval.code = gen_code (temp) ; }
#line 1637 "trad1.tab.c"
    break;

  case 45: /* multexpr: expression ',' multexpr  */
#line 228 "trad1.y"
                                                    { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1644 "trad1.tab.c"
    break;

  case 46: /* assign: expression  */
#line 233 "trad1.y"
                                                    { sprintf (temp, "%s)", yyvsp[0].code) ;
					                                yyval.code = gen_code (temp) ; }
#line 1651 "trad1.tab.c"
    break;

  case 47: /* assign: expression ',' IDENTIF '=' assign  */
#line 236 "trad1.y"
                                                        { sprintf (temp, "%d) (%s %s", yyvsp[-4].value, yyvsp[-2].code, yyvsp[0].code) ;
					                                yyval.code = gen_code (temp) ; }
#line 1658 "trad1.tab.c"
    break;

  case 48: /* control: WHILE '(' condition ')' '{' body '}'  */
#line 241 "trad1.y"
                                                                    { sprintf (temp, "(loop while %s do %s\n)", yyvsp[-4].code, yyvsp[-1].code) ;
                                                                    yyval.code = gen_code (temp) ; }
#line 1665 "trad1.tab.c"
    break;

  case 49: /* control: IF '(' condition ')' '{' body '}'  */
#line 244 "trad1.y"
                                                                    { sprintf (temp, "(if %s\n(progn %s)\n)", yyvsp[-4].code, yyvsp[-1].code) ;
                                                                    yyval.code = gen_code (temp) ; }
#line 1672 "trad1.tab.c"
    break;

  case 50: /* control: IF '(' condition ')' '{' body '}' ELSE '{' body '}'  */
#line 247 "trad1.y"
                                                                    { sprintf (temp, "(if %s\n(progn %s)\n(progn %s)\n)", yyvsp[-8].code, yyvsp[-5].code, yyvsp[-1].code) ;
                                                                    yyval.code = gen_code (temp) ; }
#line 1679 "trad1.tab.c"
    break;

  case 51: /* control: FOR '(' declare ';' condition ';' incdec ')' '{' body '}'  */
#line 251 "trad1.y"
                                                                    { sprintf (temp, "%s\n(loop while %s do %s\n%s)", yyvsp[-8].code, yyvsp[-6].code, yyvsp[-1].code, yyvsp[-4].code) ;
                                                                    yyval.code = gen_code (temp) ;}
#line 1686 "trad1.tab.c"
    break;

  case 52: /* control: FOR '(' IDENTIF '=' expression ';' condition ';' incdec ')' '{' body '}'  */
#line 255 "trad1.y"
                                                                    { sprintf (temp, "(setq %s %s)\n(loop while %s do %s\n%s)", yyvsp[-10].code, yyvsp[-8].code, yyvsp[-6].code, yyvsp[-1].code, yyvsp[-4].code) ;
                                                                    yyval.code = gen_code (temp) ;}
#line 1693 "trad1.tab.c"
    break;

  case 53: /* condition: expression  */
#line 260 "trad1.y"
                                                    { sprintf (temp, "(/= 0 %s)", yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1700 "trad1.tab.c"
    break;

  case 54: /* condition: expression EQ expression  */
#line 263 "trad1.y"
                                                    { sprintf (temp, "(= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1707 "trad1.tab.c"
    break;

  case 55: /* condition: expression NEQ expression  */
#line 266 "trad1.y"
                                                    { sprintf (temp, "(/= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1714 "trad1.tab.c"
    break;

  case 56: /* condition: expression '<' expression  */
#line 269 "trad1.y"
                                                    { sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1721 "trad1.tab.c"
    break;

  case 57: /* condition: expression '>' expression  */
#line 272 "trad1.y"
                                                    { sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1728 "trad1.tab.c"
    break;

  case 58: /* condition: expression LEQ expression  */
#line 275 "trad1.y"
                                                    { sprintf (temp, "(<= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1735 "trad1.tab.c"
    break;

  case 59: /* condition: expression GEQ expression  */
#line 278 "trad1.y"
                                                    { sprintf (temp, "(>= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1742 "trad1.tab.c"
    break;

  case 60: /* condition: condition AND condition  */
#line 281 "trad1.y"
                                                  { sprintf (temp, "(and %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1749 "trad1.tab.c"
    break;

  case 61: /* condition: condition OR condition  */
#line 284 "trad1.y"
                                                  { sprintf (temp, "(or %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1756 "trad1.tab.c"
    break;

  case 62: /* incdec: IDENTIF '=' IDENTIF '+' NUMBER  */
#line 289 "trad1.y"
                                                { sprintf (temp, "(setq %s (+ %s %d))", yyvsp[-4].code, yyvsp[-4].code, yyvsp[0].value) ;
                                                yyval.code = gen_code (temp) ; }
#line 1763 "trad1.tab.c"
    break;

  case 63: /* incdec: IDENTIF '=' IDENTIF '-' NUMBER  */
#line 292 "trad1.y"
                                                { sprintf (temp, "(setq %s (- %s %d))", yyvsp[-4].code, yyvsp[-4].code, yyvsp[0].value) ;
                                                yyval.code = gen_code (temp) ; }
#line 1770 "trad1.tab.c"
    break;

  case 64: /* expression: term  */
#line 297 "trad1.y"
                                                { yyval = yyvsp[0] ; 
                                                yyval.code = gen_code (yyvsp[0].code) ; }
#line 1777 "trad1.tab.c"
    break;

  case 65: /* expression: term '[' expression ']'  */
#line 300 "trad1.y"
                                                { sprintf (temp, "(aref %s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1784 "trad1.tab.c"
    break;

  case 66: /* expression: term '(' ')'  */
#line 303 "trad1.y"
                                                { sprintf (temp, "(%s)", yyvsp[-2].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1791 "trad1.tab.c"
    break;

  case 67: /* expression: term '(' args ')'  */
#line 306 "trad1.y"
                                                { sprintf (temp, "(%s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1798 "trad1.tab.c"
    break;

  case 68: /* expression: expression '+' expression  */
#line 309 "trad1.y"
                                                { sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1805 "trad1.tab.c"
    break;

  case 69: /* expression: expression '-' expression  */
#line 312 "trad1.y"
                                                { sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1812 "trad1.tab.c"
    break;

  case 70: /* expression: expression '*' expression  */
#line 315 "trad1.y"
                                                { sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1819 "trad1.tab.c"
    break;

  case 71: /* expression: expression '/' expression  */
#line 318 "trad1.y"
                                                { sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1826 "trad1.tab.c"
    break;

  case 72: /* expression: expression '%' expression  */
#line 321 "trad1.y"
                                                { sprintf (temp, "(mod %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1833 "trad1.tab.c"
    break;

  case 73: /* lexpression: expression  */
#line 326 "trad1.y"
                                                        { sprintf (temp, "(print %s) ", yyvsp[0].code) ;
					                        yyval.code = gen_code (temp) ; }
#line 1840 "trad1.tab.c"
    break;

  case 74: /* lexpression: expression ',' lexpression  */
#line 329 "trad1.y"
                                                    { sprintf (temp, "(print %s) %s ", yyvsp[-2].code, yyvsp[0].code) ;
					                        yyval.code = gen_code (temp) ; }
#line 1847 "trad1.tab.c"
    break;

  case 75: /* args: INTEGER IDENTIF  */
#line 334 "trad1.y"
                                                    { sprintf (temp, "%s", yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1854 "trad1.tab.c"
    break;

  case 76: /* args: INTEGER IDENTIF ',' args  */
#line 337 "trad1.y"
                                                    { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1861 "trad1.tab.c"
    break;

  case 77: /* args: expression  */
#line 340 "trad1.y"
                                                    { sprintf (temp, "%s", yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1868 "trad1.tab.c"
    break;

  case 78: /* args: expression ',' args  */
#line 343 "trad1.y"
                                                    { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1875 "trad1.tab.c"
    break;

  case 79: /* term: operand  */
#line 348 "trad1.y"
                                                { yyval = yyvsp[0] ;
                                                yyval.code = gen_code (yyvsp[0].code) ; }
#line 1882 "trad1.tab.c"
    break;

  case 80: /* term: '+' operand  */
#line 351 "trad1.y"
                                                { sprintf (temp, "(+ %s)", yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1889 "trad1.tab.c"
    break;

  case 81: /* term: '-' operand  */
#line 354 "trad1.y"
                                                { sprintf (temp, "(- %s)", yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1896 "trad1.tab.c"
    break;

  case 82: /* operand: IDENTIF  */
#line 359 "trad1.y"
                                        { sprintf (temp, "%s", yyvsp[0].code) ;
                                        yyval = yyvsp[0] ; }
#line 1903 "trad1.tab.c"
    break;

  case 83: /* operand: NUMBER  */
#line 362 "trad1.y"
                                        { sprintf (temp, "%d", yyvsp[0].value) ;
                                        yyval.code = gen_code (temp) ; }
#line 1910 "trad1.tab.c"
    break;

  case 84: /* operand: '(' expression ')'  */
#line 365 "trad1.y"
                                        { yyval = yyvsp[-1] ; }
#line 1916 "trad1.tab.c"
    break;


#line 1920 "trad1.tab.c"

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

#line 368 "trad1.y"
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
