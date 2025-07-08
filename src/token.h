#ifndef INCLUDE_SRC_TOKEN_H_
#define INCLUDE_SRC_TOKEN_H_

#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef enum TokenType {
  T_STRING_LITERAL,
  T_INTEGER_LITERAL,
  T_BOOL_LITERAL,
  T_IDENTIFIER,
  T_ASSIGNMENT,
  T_EOF
} TokenType;

typedef union TokenData {
  uint64_t integer;
  double_t floating;
  bool boolean;
} TokenData;

typedef struct Token {
  TokenType type;
  TokenData *data;
} Token;

typedef struct TokenList {
  size_t size;
  size_t capacity;
  Token *tokens;
} TokenList;

TokenList init_token_list();
void push_token_list(TokenList *list, Token token);
Token *get_token_list(TokenList *list, size_t index);

#endif // INCLUDE_SRC_TOKEN_H_
