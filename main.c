#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "passwordCreator.h"

int main(int argc, char *argv[]) {
  if (argc == 3)  {
    if (strcmp(argv[1], "generate") == 0) {
      int val = generate((size_t)atoi(argv[2])); 
        if (val != 0) {
          return 1;
        }
        }
  } else  {
  printf("Invalide operation\n");
  return 1;
  }
    return 0;
}
