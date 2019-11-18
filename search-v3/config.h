#pragma once

//#define DEBUG_PREPARE_MATH_QRY
//#define DEBUG_MATH_SEARCH
//#define DEBUG_MATH_SEARCH__STRUCT_SCORING
//#define DEBUG_MATH_SEARCH__SYMBOL_SCORING

#include "math-index-v3/config.h"
#define MAX_MATCHED_PATHS MAX_MATH_PATHS

// #define DEBUG_BIN_LP

// #define DEBUG_MATH_PRUNING

// #define DEBUG_MNC_SCORING

/* choose math pruning strategy */
//#define MATH_PRUNING_STRATEGY_NONE
//#define MATH_PRUNING_STRATEGY_MAXREF
//#define MATH_PRUNING_STRATEGY_GBP_NUM
  #define MATH_PRUNING_STRATEGY_GBP_LEN

#define MATH_SCORE_ETA 0.05f

#define MAX_MATH_OCCURS 8
#define MAX_TOTAL_OCCURS 8

#define SNIPPET_PADDING 320
#define MAX_SNIPPET_SZ 8192

#define DEFAULT_N_TOP_RESULTS 100
#define DEFAULT_RES_PER_PAGE  10

#define SYMBOL_SUBSCORE_FULL 1.0f
#define SYMBOL_SUBSCORE_HALF 0.9f
#define SYMBOL_SUBSCORE_BASE 0.8f

#define BM25_DEFAULT_B  0.75
#define BM25_DEFAULT_K1 1.2 /* lower TF upperbound, less rewards to TF */

#define MAX_SEARCH_INVLISTS 64

#include "txt-seg/config.h"
#define MAX_QUERY_BYTES     (MAX_TXT_SEG_BYTES * 32)
#define MAX_QUERY_WSTR_LEN  (MAX_TXT_SEG_LEN * 32)

#define PRINT_SEARCH_QUERIES
