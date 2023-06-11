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
#define YYLAST   330

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  220

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
     142,   146,   149,   152,   155,   158,   161,   164,   167,   172,
     175,   180,   183,   186,   189,   192,   195,   198,   201,   204,
     207,   210,   215,   218,   223,   226,   231,   234,   239,   242,
     247,   250,   253,   256,   260,   266,   269,   272,   275,   278,
     281,   284,   287,   290,   295,   298,   303,   306,   309,   312,
     315,   318,   321,   324,   327,   332,   335,   340,   343,   346,
     349,   354,   357,   360,   365,   368,   371
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

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-11)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     106,   -24,    38,  -132,    44,    46,    17,     1,   153,    45,
     -18,    47,  -132,  -132,     1,  -132,  -132,  -132,     4,     4,
     153,   228,    51,  -132,    36,  -132,   153,   153,    37,    55,
    -132,  -132,  -132,   285,   153,   153,   153,   153,   153,    66,
      98,   153,    68,    27,   176,    86,   293,   233,    89,    93,
    -132,   107,   107,  -132,  -132,  -132,   153,  -132,   100,   246,
     105,     5,    75,    94,  -132,   144,   112,   293,  -132,  -132,
      75,    95,   151,   138,   141,   142,   149,   150,   153,   144,
    -132,   140,   148,   154,   144,  -132,    87,   152,   144,  -132,
     153,   162,   153,   185,    28,   153,   199,   218,   153,    16,
     190,   157,  -132,   144,   144,  -132,  -132,   158,  -132,   192,
     293,  -132,   197,   251,   189,   208,   153,   153,   226,   131,
     184,   200,   206,   143,   223,   241,   153,   144,  -132,  -132,
    -132,  -132,  -132,   227,   185,   153,  -132,   195,   264,   210,
    -132,   153,   153,   217,   153,   153,   153,   153,   153,   153,
    -132,   153,   230,   153,   229,  -132,   209,  -132,   153,  -132,
    -132,   259,  -132,   226,   249,  -132,   144,   293,   293,   293,
     293,   293,   293,   214,   235,   144,   269,   153,   153,   293,
     247,  -132,   234,   153,  -132,   248,   153,   280,  -132,   153,
    -132,  -132,   262,    40,   153,  -132,   252,   279,    42,   144,
     265,   254,   279,   266,   294,   270,   284,  -132,    69,   144,
     290,   298,   320,   291,   144,  -132,  -132,  -132,   292,  -132
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      10,    15,     0,     2,     0,     0,     0,     8,     0,     0,
      11,     0,     1,     4,     6,     9,    85,    84,     0,     0,
       0,     0,    66,    81,     0,    16,     0,     0,     0,     0,
       7,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,    12,     0,     0,     0,
      86,    70,    71,    72,    73,    74,     0,    68,     0,     0,
      77,     0,     0,     0,    13,     0,     0,    14,    69,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,    23,    80,     0,     0,     0,    78,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     0,
      39,     0,    19,    25,    21,    24,    18,     0,     3,     0,
      32,    37,     0,     0,    44,     0,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,     0,    27,    26,    22,
      20,     5,    38,     0,     0,     0,    30,    48,     0,    42,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,    40,    46,    28,     0,    45,
      41,     0,    33,     0,    63,    62,     0,    60,    61,    56,
      57,    58,    59,    75,     0,     0,     0,     0,     0,    34,
       0,    43,     0,     0,    35,     0,     0,     0,    47,     0,
      50,    76,    51,     0,     0,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,    64,    65,    54,     0,    53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,  -132,    29,  -132,  -132,  -132,  -132,   -15,
    -132,  -132,   163,   193,  -131,   139,  -132,   -96,   127,    -8,
     147,   -39,  -132,    96
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,    11,    29,     5,     6,     7,     9,    25,    81,
      82,    83,   140,   115,   155,   136,    84,   119,   201,   120,
     174,    45,    22,    23
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    58,   123,    26,   160,     1,     2,    16,    17,    71,
      72,     8,    33,    73,    74,    75,    44,    27,    46,    47,
     124,   125,    76,    85,    77,    78,    51,    52,    53,    54,
      55,    89,    44,    59,    20,   -10,    15,    79,    80,    16,
      17,    42,    10,    30,    12,   164,   165,   188,    67,   116,
      87,    14,   112,    13,    44,   141,   142,   141,   142,    61,
      18,    19,    44,   117,   101,   118,    20,    43,    48,   105,
     100,   107,    60,   109,   197,    24,   202,    28,    16,    17,
      42,    40,   110,    44,   113,    49,    41,    56,   128,   129,
     193,    71,    72,   211,   212,    73,    74,    75,   198,    18,
      19,    16,    17,    42,    76,    20,    77,    78,   137,   138,
       1,     2,   157,     3,    31,    32,    90,    63,   156,    79,
     106,    65,    18,    19,    66,    91,    86,   156,    20,    57,
      92,    68,    93,    36,    37,    38,   167,   168,   169,   170,
     171,   172,    70,   173,    88,   176,   141,   142,    71,    72,
     179,   182,    73,    74,    75,    94,    16,    17,   141,   142,
     185,    76,   143,    77,    78,    16,    17,    42,    95,   187,
     156,    96,    97,   102,   152,   173,    79,    18,    19,    98,
      99,   137,   103,    20,   203,   108,    18,    19,   104,   114,
     127,   130,    20,   111,   213,   144,   145,   146,   147,   218,
      34,    35,    36,    37,    38,   121,   148,   149,    34,    35,
      36,    37,    38,    62,    34,    35,    36,    37,    38,    34,
      35,    36,    37,    38,   122,   131,   134,   126,   132,   135,
     139,   150,   161,    34,    35,    36,    37,    38,    34,    35,
      36,    37,    38,   151,   153,   154,   178,   163,   158,   166,
     177,   183,    34,    35,    36,    37,    38,    34,    35,    36,
      37,    38,   175,   180,    39,   142,   184,   190,   189,    64,
      34,    35,    36,    37,    38,    34,    35,    36,    37,    38,
     196,   192,    69,   200,   199,   205,   204,   133,    34,    35,
      36,    37,    38,    34,    35,    36,    37,    38,   208,   207,
     162,   215,   209,   186,    34,    35,    36,    37,    38,    34,
      35,    36,    37,    38,   194,   210,    50,    34,    35,    36,
      37,    38,   214,   216,   217,   219,   181,   159,   195,   206,
     191
};

static const yytype_uint8 yycheck[] =
{
       8,    40,    98,    21,   135,     4,     5,     3,     4,     4,
       5,    35,    20,     8,     9,    10,    24,    35,    26,    27,
       4,     5,    17,    62,    19,    20,    34,    35,    36,    37,
      38,    70,    40,    41,    30,    34,     7,    32,    33,     3,
       4,     5,     4,    14,     0,   141,   142,   178,    56,    21,
      65,    34,    91,     7,    62,    15,    16,    15,    16,    32,
      24,    25,    70,    35,    79,    37,    30,    31,    31,    84,
      78,    86,     4,    88,    34,    30,    34,    30,     3,     4,
       5,    30,    90,    91,    92,    30,    35,    21,   103,   104,
     186,     4,     5,    24,    25,     8,     9,    10,   194,    24,
      25,     3,     4,     5,    17,    30,    19,    20,   116,   117,
       4,     5,   127,     7,    18,    19,    21,    31,   126,    32,
      33,    32,    24,    25,    31,    30,    32,   135,    30,    31,
      35,    31,    37,    26,    27,    28,   144,   145,   146,   147,
     148,   149,    37,   151,    32,   153,    15,    16,     4,     5,
     158,   166,     8,     9,    10,     4,     3,     4,    15,    16,
     175,    17,    31,    19,    20,     3,     4,     5,    30,   177,
     178,    30,    30,    33,    31,   183,    32,    24,    25,    30,
      30,   189,    34,    30,   199,    33,    24,    25,    34,     4,
      33,    33,    30,    31,   209,    11,    12,    13,    14,   214,
      24,    25,    26,    27,    28,     6,    22,    23,    24,    25,
      26,    27,    28,    37,    24,    25,    26,    27,    28,    24,
      25,    26,    27,    28,     6,    33,    37,    37,    31,    21,
       4,    31,    37,    24,    25,    26,    27,    28,    24,    25,
      26,    27,    28,    37,    21,     4,    37,    37,    21,    32,
      21,    37,    24,    25,    26,    27,    28,    24,    25,    26,
      27,    28,    32,     4,    36,    16,    31,    33,    21,    36,
      24,    25,    26,    27,    28,    24,    25,    26,    27,    28,
      18,    33,    36,     4,    32,    31,    21,    36,    24,    25,
      26,    27,    28,    24,    25,    26,    27,    28,     4,    33,
      36,     3,    32,    34,    24,    25,    26,    27,    28,    24,
      25,    26,    27,    28,    34,    31,    31,    24,    25,    26,
      27,    28,    32,     3,    33,    33,   163,   134,   189,   202,
     183
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
      37,     4,     5,     8,     9,    10,    17,    19,    20,    32,
      33,    47,    48,    49,    54,    59,    32,    47,    32,    59,
      21,    30,    35,    37,     4,    30,    30,    30,    30,    30,
      57,    47,    33,    34,    34,    47,    33,    47,    33,    47,
      57,    31,    59,    57,     4,    51,    21,    35,    37,    55,
      57,     6,     6,    55,     4,     5,    37,    33,    47,    47,
      33,    33,    31,    36,    37,    21,    53,    57,    57,     4,
      50,    15,    16,    31,    11,    12,    13,    14,    22,    23,
      31,    37,    31,    21,     4,    52,    57,    47,    21,    51,
      52,    37,    36,    37,    55,    55,    32,    57,    57,    57,
      57,    57,    57,    57,    58,    32,    57,    21,    37,    57,
       4,    50,    47,    37,    31,    47,    34,    57,    52,    21,
      33,    58,    33,    55,    34,    53,    18,    34,    55,    32,
       4,    56,    34,    47,    21,    31,    56,    33,     4,    32,
      31,    24,    25,    47,    32,     3,     3,    33,    47,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    40,    39,    41,    39,    42,    42,    42,    42,
      43,    43,    43,    43,    43,    45,    44,    46,    46,    46,
      46,    47,    47,    47,    47,    47,    47,    47,    47,    48,
      48,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    50,    50,    51,    51,    52,    52,    53,    53,
      54,    54,    54,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    56,    56,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    58,    59,    59,    59,
      59,    60,    60,    60,    61,    61,    61
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     7,     0,     8,     2,     3,     1,     2,
       0,     2,     4,     5,     6,     0,     3,     4,     5,     5,
       6,     2,     3,     1,     2,     2,     3,     3,     4,     2,
       4,     4,     3,     5,     6,     6,     4,     3,     4,     2,
       4,     5,     1,     3,     1,     3,     1,     3,     1,     5,
       7,     7,    11,    14,    13,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     5,     1,     4,     3,     4,
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
  case 2: /* $@1: %empty  */
#line 89 "trad1.y"
                                            { strcpy (fun_name, yyvsp[0].code) ; }
#line 1357 "trad1.tab.c"
    break;

  case 3: /* axiom: MAIN $@1 '(' ')' '{' body '}'  */
#line 90 "trad1.y"
                                            { printf ("(defun main ()\n%s\n)\n", yyvsp[-1].code) ; 
                                            yyval.code = gen_code (temp) ; }
#line 1364 "trad1.tab.c"
    break;

  case 4: /* $@2: %empty  */
#line 93 "trad1.y"
                                                { strcpy (fun_name, "main") ; }
#line 1370 "trad1.tab.c"
    break;

  case 5: /* axiom: bdeclare MAIN $@2 '(' ')' '{' body '}'  */
#line 94 "trad1.y"
                                            { printf ("%s\n(defun main ()\n%s\n)\n", yyvsp[-7].code, yyvsp[-1].code) ; }
#line 1376 "trad1.tab.c"
    break;

  case 6: /* bdeclare: declare ';'  */
#line 98 "trad1.y"
                                                    { sprintf (temp, "%s ", yyvsp[-1].code) ;
                                    yyval.code = gen_code (temp) ; }
#line 1383 "trad1.tab.c"
    break;

  case 7: /* bdeclare: declare ';' bdeclare  */
#line 101 "trad1.y"
                                                { sprintf (temp, "%s\n%s ", yyvsp[-2].code, yyvsp[0].code) ;
						            yyval.code = gen_code (temp) ; }
#line 1390 "trad1.tab.c"
    break;

  case 8: /* bdeclare: function  */
#line 104 "trad1.y"
                                    { sprintf (temp, "%s ", yyvsp[0].code) ;
                                    yyval.code = gen_code (temp) ; }
#line 1397 "trad1.tab.c"
    break;

  case 9: /* bdeclare: function bdeclare  */
#line 107 "trad1.y"
                                    { sprintf (temp, "%s\n%s ", yyvsp[-1].code, yyvsp[0].code) ;
                                    yyval.code = gen_code (temp) ; }
#line 1404 "trad1.tab.c"
    break;

  case 11: /* declare: INTEGER IDENTIF  */
#line 113 "trad1.y"
                                                                { sprintf (temp, "(setq %s 0)", yyvsp[0].code) ;
					                                yyval.code = gen_code (temp) ; }
#line 1411 "trad1.tab.c"
    break;

  case 12: /* declare: INTEGER IDENTIF '=' expression  */
#line 116 "trad1.y"
                                                        { sprintf (temp, "(setq %s %d)", yyvsp[-2].code, yyvsp[0].value) ;
					                                yyval.code = gen_code (temp) ; }
#line 1418 "trad1.tab.c"
    break;

  case 13: /* declare: INTEGER IDENTIF '[' expression ']'  */
#line 119 "trad1.y"
                                                    { sprintf (temp, "(setq %s (make-array %s))", yyvsp[-3].code, yyvsp[-1].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1425 "trad1.tab.c"
    break;

  case 14: /* declare: IDENTIF '[' expression ']' '=' expression  */
#line 122 "trad1.y"
                                                    { sprintf (temp, "(setf (aref %s %s) %s", yyvsp[-5].code, yyvsp[-3].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1432 "trad1.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 127 "trad1.y"
                                                    { strcpy (fun_name, yyvsp[0].code) ; }
#line 1438 "trad1.tab.c"
    break;

  case 16: /* function: IDENTIF $@3 rfunction  */
#line 128 "trad1.y"
                                                    { sprintf (temp, "(defun %s%s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1445 "trad1.tab.c"
    break;

  case 17: /* rfunction: '(' ')' '{' '}'  */
#line 133 "trad1.y"
                                                    { sprintf (temp, "() )") ;
                                                    yyval.code = gen_code (temp) ; }
#line 1452 "trad1.tab.c"
    break;

  case 18: /* rfunction: '(' args ')' '{' '}'  */
#line 136 "trad1.y"
                                                    { sprintf (temp, "(%s) )", yyvsp[-3].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1459 "trad1.tab.c"
    break;

  case 19: /* rfunction: '(' ')' '{' body '}'  */
#line 139 "trad1.y"
                                                    { sprintf (temp, "()\n%s", yyvsp[-1].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1466 "trad1.tab.c"
    break;

  case 20: /* rfunction: '(' args ')' '{' body '}'  */
#line 142 "trad1.y"
                                                    { sprintf (temp, "(%s)\n%s", yyvsp[-4].code, yyvsp[-1].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1473 "trad1.tab.c"
    break;

  case 21: /* body: sentence ';'  */
#line 146 "trad1.y"
                                { sprintf (temp, "%s", yyvsp[-1].code) ;
						        yyval.code = gen_code (temp) ; }
#line 1480 "trad1.tab.c"
    break;

  case 22: /* body: sentence ';' body  */
#line 149 "trad1.y"
                                    { sprintf (temp, "%s\n%s ", yyvsp[-2].code, yyvsp[0].code) ;
						        yyval.code = gen_code (temp) ; }
#line 1487 "trad1.tab.c"
    break;

  case 23: /* body: control  */
#line 152 "trad1.y"
                                { sprintf (temp, "%s", yyvsp[0].code) ;
                                yyval.code = gen_code (temp) ; }
#line 1494 "trad1.tab.c"
    break;

  case 24: /* body: control body  */
#line 155 "trad1.y"
                                { sprintf (temp, "%s\n%s ", yyvsp[-1].code, yyvsp[0].code) ;
                                yyval.code = gen_code (temp) ; }
#line 1501 "trad1.tab.c"
    break;

  case 25: /* body: localvar ';'  */
#line 158 "trad1.y"
                                { sprintf (temp, "(let (%s)) ", yyvsp[-1].code) ;
                                yyval.code = gen_code (temp) ; }
#line 1508 "trad1.tab.c"
    break;

  case 26: /* body: localvar ';' body  */
#line 161 "trad1.y"
                                { sprintf (temp, "(let (%s)\n%s\n)", yyvsp[-2].code, yyvsp[0].code) ;
                                yyval.code = gen_code (temp) ; }
#line 1515 "trad1.tab.c"
    break;

  case 27: /* body: '{' body '}'  */
#line 164 "trad1.y"
                                { sprintf (temp, "%s", yyvsp[-1].code) ;
                                yyval.code = gen_code (temp) ; }
#line 1522 "trad1.tab.c"
    break;

  case 28: /* body: '{' body '}' body  */
#line 167 "trad1.y"
                                { sprintf (temp, "%s\n%s ", yyvsp[-2].code, yyvsp[0].code) ;
                                yyval.code = gen_code (temp) ; }
#line 1529 "trad1.tab.c"
    break;

  case 29: /* localvar: INTEGER IDENTIF  */
#line 172 "trad1.y"
                                                   { sprintf (temp, "(%s 0)", yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1536 "trad1.tab.c"
    break;

  case 30: /* localvar: INTEGER IDENTIF '=' assign  */
#line 175 "trad1.y"
                                                   { sprintf (temp, "(%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1543 "trad1.tab.c"
    break;

  case 31: /* sentence: INTEGER IDENTIF ',' moreid  */
#line 180 "trad1.y"
                                                   { sprintf (temp, "(setq %s 0)\n%s", yyvsp[-2].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1550 "trad1.tab.c"
    break;

  case 32: /* sentence: IDENTIF '=' expression  */
#line 183 "trad1.y"
                                                   { sprintf (temp, "(setq %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1557 "trad1.tab.c"
    break;

  case 33: /* sentence: INTEGER IDENTIF '[' expression ']'  */
#line 186 "trad1.y"
                                                   { sprintf (temp, "(setq %s (make-array %s))", yyvsp[-3].code, yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1564 "trad1.tab.c"
    break;

  case 34: /* sentence: IDENTIF '[' expression ']' '=' expression  */
#line 189 "trad1.y"
                                                        { sprintf (temp, "(setf (aref %s %s) %s)", yyvsp[-5].code, yyvsp[-3].code, yyvsp[0].code) ;
                                                        yyval.code = gen_code (temp) ; }
#line 1571 "trad1.tab.c"
    break;

  case 35: /* sentence: PRINTF '(' STRING ',' lexpression ')'  */
#line 192 "trad1.y"
                                                   { sprintf (temp, "%s ", yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1578 "trad1.tab.c"
    break;

  case 36: /* sentence: PUTS '(' STRING ')'  */
#line 195 "trad1.y"
                                                   { sprintf (temp, "(print \"%s\") ", yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1585 "trad1.tab.c"
    break;

  case 37: /* sentence: IDENTIF '(' ')'  */
#line 198 "trad1.y"
                                                   { sprintf (temp, "(%s) ", yyvsp[-2].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1592 "trad1.tab.c"
    break;

  case 38: /* sentence: IDENTIF '(' args ')'  */
#line 201 "trad1.y"
                                                   { sprintf (temp, "(%s %s) ", yyvsp[-3].code, yyvsp[-1].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1599 "trad1.tab.c"
    break;

  case 39: /* sentence: RETURN expression  */
#line 204 "trad1.y"
                                                   { sprintf (temp, "(return-from %s %s)", fun_name, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1606 "trad1.tab.c"
    break;

  case 40: /* sentence: RETURN expression ',' multexpr  */
#line 207 "trad1.y"
                                                   { sprintf (temp, "(return-from %s (values %s %s))", fun_name, yyvsp[-2].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1613 "trad1.tab.c"
    break;

  case 41: /* sentence: IDENTIF ',' multid '=' multexpr  */
#line 210 "trad1.y"
                                                    { sprintf (temp, "(setf (values %s %s) %s)", yyvsp[-4].code, yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1620 "trad1.tab.c"
    break;

  case 42: /* moreid: IDENTIF  */
#line 215 "trad1.y"
                                                    { sprintf (temp, "(setq %s 0)", yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1627 "trad1.tab.c"
    break;

  case 43: /* moreid: IDENTIF ',' moreid  */
#line 218 "trad1.y"
                                                    { sprintf (temp, "(setq %s 0)\n%s", yyvsp[-2].code, yyvsp[0].code) ;
                                                   yyval.code = gen_code (temp) ; }
#line 1634 "trad1.tab.c"
    break;

  case 44: /* multid: IDENTIF  */
#line 223 "trad1.y"
                                                    { sprintf (temp, "%s", yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1641 "trad1.tab.c"
    break;

  case 45: /* multid: IDENTIF ',' multid  */
#line 226 "trad1.y"
                                                    { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1648 "trad1.tab.c"
    break;

  case 46: /* multexpr: expression  */
#line 231 "trad1.y"
                                                    { yyval = yyvsp[0] ;
                                                    yyval.code = gen_code (temp) ; }
#line 1655 "trad1.tab.c"
    break;

  case 47: /* multexpr: expression ',' multexpr  */
#line 234 "trad1.y"
                                                    { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1662 "trad1.tab.c"
    break;

  case 48: /* assign: expression  */
#line 239 "trad1.y"
                                                    { sprintf (temp, "%s)", yyvsp[0].code) ;
					                                yyval.code = gen_code (temp) ; }
#line 1669 "trad1.tab.c"
    break;

  case 49: /* assign: expression ',' IDENTIF '=' assign  */
#line 242 "trad1.y"
                                                        { sprintf (temp, "%d) (%s %s", yyvsp[-4].value, yyvsp[-2].code, yyvsp[0].code) ;
					                                yyval.code = gen_code (temp) ; }
#line 1676 "trad1.tab.c"
    break;

  case 50: /* control: WHILE '(' condition ')' '{' body '}'  */
#line 247 "trad1.y"
                                                                    { sprintf (temp, "(loop while %s do %s\n)", yyvsp[-4].code, yyvsp[-1].code) ;
                                                                    yyval.code = gen_code (temp) ; }
#line 1683 "trad1.tab.c"
    break;

  case 51: /* control: IF '(' condition ')' '{' body '}'  */
#line 250 "trad1.y"
                                                                    { sprintf (temp, "(if %s\n(progn %s)\n)", yyvsp[-4].code, yyvsp[-1].code) ;
                                                                    yyval.code = gen_code (temp) ; }
#line 1690 "trad1.tab.c"
    break;

  case 52: /* control: IF '(' condition ')' '{' body '}' ELSE '{' body '}'  */
#line 253 "trad1.y"
                                                                    { sprintf (temp, "(if %s\n(progn %s)\n(progn %s)\n)", yyvsp[-8].code, yyvsp[-5].code, yyvsp[-1].code) ;
                                                                    yyval.code = gen_code (temp) ; }
#line 1697 "trad1.tab.c"
    break;

  case 53: /* control: FOR '(' INTEGER IDENTIF '=' expression ';' condition ';' incdec ')' '{' body '}'  */
#line 257 "trad1.y"
                                                                    { sprintf (temp, "(let ((%s %s))\n(loop while %s do %s\n%s))", yyvsp[-10].code, yyvsp[-8].code, yyvsp[-6].code, yyvsp[-1].code, yyvsp[-4].code) ;
                                                                    yyval.code = gen_code (temp) ;}
#line 1704 "trad1.tab.c"
    break;

  case 54: /* control: FOR '(' IDENTIF '=' expression ';' condition ';' incdec ')' '{' body '}'  */
#line 261 "trad1.y"
                                                                    { sprintf (temp, "(setq %s %s)\n(loop while %s do %s\n%s)", yyvsp[-10].code, yyvsp[-8].code, yyvsp[-6].code, yyvsp[-1].code, yyvsp[-4].code) ;
                                                                    yyval.code = gen_code (temp) ;}
#line 1711 "trad1.tab.c"
    break;

  case 55: /* condition: expression  */
#line 266 "trad1.y"
                                                    { sprintf (temp, "(/= 0 %s)", yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1718 "trad1.tab.c"
    break;

  case 56: /* condition: expression EQ expression  */
#line 269 "trad1.y"
                                                    { sprintf (temp, "(= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1725 "trad1.tab.c"
    break;

  case 57: /* condition: expression NEQ expression  */
#line 272 "trad1.y"
                                                    { sprintf (temp, "(/= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1732 "trad1.tab.c"
    break;

  case 58: /* condition: expression '<' expression  */
#line 275 "trad1.y"
                                                    { sprintf (temp, "(< %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1739 "trad1.tab.c"
    break;

  case 59: /* condition: expression '>' expression  */
#line 278 "trad1.y"
                                                    { sprintf (temp, "(> %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1746 "trad1.tab.c"
    break;

  case 60: /* condition: expression LEQ expression  */
#line 281 "trad1.y"
                                                    { sprintf (temp, "(<= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1753 "trad1.tab.c"
    break;

  case 61: /* condition: expression GEQ expression  */
#line 284 "trad1.y"
                                                    { sprintf (temp, "(>= %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1760 "trad1.tab.c"
    break;

  case 62: /* condition: condition AND condition  */
#line 287 "trad1.y"
                                                    { sprintf (temp, "(and %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1767 "trad1.tab.c"
    break;

  case 63: /* condition: condition OR condition  */
#line 290 "trad1.y"
                                                    { sprintf (temp, "(or %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1774 "trad1.tab.c"
    break;

  case 64: /* incdec: IDENTIF '=' IDENTIF '+' NUMBER  */
#line 295 "trad1.y"
                                                { sprintf (temp, "(setq %s (+ %s %d))", yyvsp[-4].code, yyvsp[-4].code, yyvsp[0].value) ;
                                                yyval.code = gen_code (temp) ; }
#line 1781 "trad1.tab.c"
    break;

  case 65: /* incdec: IDENTIF '=' IDENTIF '-' NUMBER  */
#line 298 "trad1.y"
                                                { sprintf (temp, "(setq %s (- %s %d))", yyvsp[-4].code, yyvsp[-4].code, yyvsp[0].value) ;
                                                yyval.code = gen_code (temp) ; }
#line 1788 "trad1.tab.c"
    break;

  case 66: /* expression: term  */
#line 303 "trad1.y"
                                                { yyval = yyvsp[0] ; 
                                                yyval.code = gen_code (yyvsp[0].code) ; }
#line 1795 "trad1.tab.c"
    break;

  case 67: /* expression: term '[' expression ']'  */
#line 306 "trad1.y"
                                                { sprintf (temp, "(aref %s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1802 "trad1.tab.c"
    break;

  case 68: /* expression: term '(' ')'  */
#line 309 "trad1.y"
                                                { sprintf (temp, "(%s)", yyvsp[-2].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1809 "trad1.tab.c"
    break;

  case 69: /* expression: term '(' args ')'  */
#line 312 "trad1.y"
                                                { sprintf (temp, "(%s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1816 "trad1.tab.c"
    break;

  case 70: /* expression: expression '+' expression  */
#line 315 "trad1.y"
                                                { sprintf (temp, "(+ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1823 "trad1.tab.c"
    break;

  case 71: /* expression: expression '-' expression  */
#line 318 "trad1.y"
                                                { sprintf (temp, "(- %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1830 "trad1.tab.c"
    break;

  case 72: /* expression: expression '*' expression  */
#line 321 "trad1.y"
                                                { sprintf (temp, "(* %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1837 "trad1.tab.c"
    break;

  case 73: /* expression: expression '/' expression  */
#line 324 "trad1.y"
                                                { sprintf (temp, "(/ %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1844 "trad1.tab.c"
    break;

  case 74: /* expression: expression '%' expression  */
#line 327 "trad1.y"
                                                { sprintf (temp, "(mod %s %s)", yyvsp[-2].code, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1851 "trad1.tab.c"
    break;

  case 75: /* lexpression: expression  */
#line 332 "trad1.y"
                                                        { sprintf (temp, "(print %s) ", yyvsp[0].code) ;
					                        yyval.code = gen_code (temp) ; }
#line 1858 "trad1.tab.c"
    break;

  case 76: /* lexpression: expression ',' lexpression  */
#line 335 "trad1.y"
                                                    { sprintf (temp, "(print %s) %s ", yyvsp[-2].code, yyvsp[0].code) ;
					                        yyval.code = gen_code (temp) ; }
#line 1865 "trad1.tab.c"
    break;

  case 77: /* args: INTEGER IDENTIF  */
#line 340 "trad1.y"
                                                    { sprintf (temp, "%s", yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1872 "trad1.tab.c"
    break;

  case 78: /* args: INTEGER IDENTIF ',' args  */
#line 343 "trad1.y"
                                                    { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1879 "trad1.tab.c"
    break;

  case 79: /* args: expression  */
#line 346 "trad1.y"
                                                    { sprintf (temp, "%s", yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1886 "trad1.tab.c"
    break;

  case 80: /* args: expression ',' args  */
#line 349 "trad1.y"
                                                    { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1893 "trad1.tab.c"
    break;

  case 81: /* term: operand  */
#line 354 "trad1.y"
                                                { yyval = yyvsp[0] ;
                                                yyval.code = gen_code (yyvsp[0].code) ; }
#line 1900 "trad1.tab.c"
    break;

  case 82: /* term: '+' operand  */
#line 357 "trad1.y"
                                                { sprintf (temp, "(+ %s)", yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1907 "trad1.tab.c"
    break;

  case 83: /* term: '-' operand  */
#line 360 "trad1.y"
                                                { sprintf (temp, "(- %s)", yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1914 "trad1.tab.c"
    break;

  case 84: /* operand: IDENTIF  */
#line 365 "trad1.y"
                                        { sprintf (temp, "%s", yyvsp[0].code) ;
                                        yyval = yyvsp[0] ; }
#line 1921 "trad1.tab.c"
    break;

  case 85: /* operand: NUMBER  */
#line 368 "trad1.y"
                                        { sprintf (temp, "%d", yyvsp[0].value) ;
                                        yyval.code = gen_code (temp) ; }
#line 1928 "trad1.tab.c"
    break;

  case 86: /* operand: '(' expression ')'  */
#line 371 "trad1.y"
                                        { yyval = yyvsp[-1] ; }
#line 1934 "trad1.tab.c"
    break;


#line 1938 "trad1.tab.c"

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

#line 374 "trad1.y"
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
