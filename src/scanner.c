#include "scanner.h"

Scanner init_scanner(uint8_t *source) {
  Scanner scanner = {.source = source};

  return scanner;
}

uint8_t get_character(Scanner *scanner) {
  return (scanner->source[scanner->current] == '\0')
             ? '\0'
             : scanner->source[scanner->current++];
}
