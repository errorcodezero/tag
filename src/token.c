#include "token.h"
#include <stdlib.h>

TokenList init_token_list() {
  Token *tokens = calloc(1, sizeof(Token));

  TokenList list = {.size = 0, .capacity = 1, .tokens = tokens};

  return list;
}

void push_token_list(TokenList *list, Token token) {
  if (list->size >= list->capacity) {
    list->capacity *= 2;
    list->tokens = realloc(list->tokens, list->capacity);
  }
  list->tokens[list->size++] = token;
}

Token *get_token_list(TokenList *list, size_t index) {
  if (index >= list->size) {
    return NULL;
  }

  return &list->tokens[index];
}
