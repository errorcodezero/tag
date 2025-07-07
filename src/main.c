#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 2)
    return EXIT_FAILURE;
  printf("%s", argv[1]);

  return EXIT_SUCCESS;
}
