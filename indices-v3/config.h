#include "common/common.h"

#define MAX_CORPUS_FILE_SZ  (16 MB)

#define DEFAULT_TERM_INDEX_CACHE_SZ 300 /* MiB */
#define DEFAULT_MATH_INDEX_CACHE_SZ 500 /* MiB */

// #define SUPPORT_MATH_WILDCARDS

// #define DEBUG_INDEXER
// #define DEBUG_INDEXER_LEXER

//#define INDICES_TXT_LEXER lex_mix_file
  #define INDICES_TXT_LEXER lex_eng_file

#define INDICES_MAX_TEXT_TERM_LEN 21