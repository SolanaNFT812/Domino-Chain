#pragma once
/**
 * @brief Domino string and memory system calls and utilities
 */

#include <domi/types.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Copies memory
 */
static void dom_memcpy(void *dst, const void *src, int len) {
  for (int i = 0; i < len; i++) {
    *((uint8_t *)dst + i) = *((const uint8_t *)src + i);
  }
}

/**
 * Compares memory
 */
static int dom_memcmp(const void *s1, const void *s2, int n) {
  for (int i = 0; i < n; i++) {
    uint8_t diff = *((uint8_t *)s1 + i) - *((const uint8_t *)s2 + i);
    if (diff) {
      return diff;
    }
  }
  return 0;
}

/**
 * Fill a byte string with a byte value
 */
static void *dom_memset(void *b, int c, size_t len) {
  uint8_t *a = (uint8_t *) b;
  while (len > 0) {
    *a = c;
    a++;
    len--;
  }
}

/**
 * Find length of string
 */
static size_t dom_strlen(const char *s) {
  size_t len = 0;
  while (*s) {
    len++;
    s++;
  }
  return len;
}

/**
 * Internal memory alloc/free function
 */
void *dom_alloc_free_(uint64_t size, void *ptr);

/**
 * Alloc zero-initialized memory
 */
static void *dom_calloc(size_t nitems, size_t size) {
  return dom_alloc_free_(nitems * size, 0);
}

/**
 * Deallocates the memory previously allocated by dom_calloc
 */
static void dom_free(void *ptr) {
  (void) dom_alloc_free_(0, ptr);
}

#ifdef __cplusplus
}
#endif

/**@}*/
