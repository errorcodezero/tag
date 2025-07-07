#ifndef INCLUDE_SRC_SCANNER_H_
#define INCLUDE_SRC_SCANNER_H_

#include <stddef.h>
#include <stdint.h>
#include <uchar.h>

typedef struct Scanner {
  uint8_t *source;
  size_t current;
} Scanner;

Scanner init_scanner(uint8_t *source);
uint8_t get_character(Scanner *scanner);

#endif // INCLUDE_SRC_SCANNER_H_
