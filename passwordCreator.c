#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
 
#define MAX_PASSWORD_LENGTH 64

const char alphabet[] =
    "abcdefghijklmnopqrstuvwxyz"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "0123456789"
    "!@#$%^&*()-_=+[]{};:,.<>/?";
   
int generate(size_t length) {
  char pass[MAX_PASSWORD_LENGTH];
  
  short sizeOfAlphabet = strlen(alphabet);
  if (length >= sizeof pass) {
    return 1;
  }

  srand((unsigned)time(NULL));

  for (size_t i = 0; i < length; ++i) {
    int randomIndex = rand() % (short)sizeOfAlphabet;
    pass[i] = alphabet[randomIndex];
  }
  pass[length] = '\0';
  puts(pass);
  return 0;
}

int main() {
    char function[10];
    size_t length;
    if (scanf("%s %zu", function, &length) == 2) {
      if (strcmp(function, "generate") == 0) {
        generate(length);
      }
    } else {
      printf("Invalide value");
      return 1;
    }

    return 0;
}
