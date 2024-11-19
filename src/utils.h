#ifndef RAFT_UTILS_H_
#define RAFT_UTILS_H_

#include <stdint.h>

/* Various utility functions and macros */

#define LIKELY(x) __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)

#define DBG() fprintf(stderr, "%s:%d\n", __func__, __LINE__)

#endif /* RAFT_UTILS_H_ */
