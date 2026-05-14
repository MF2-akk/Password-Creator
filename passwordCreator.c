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

int main(int argc, char *argv[]) {
  if (argc == 3)  {
    if (strcmp(argv[1], "generate") == 0) {
        if (generate((size_t)atoi(argv[2])) != 0) {
          return 1;
        }
        }
  } else  {
  printf("Invalide operation\n");
  return 1;
  }
    return 0;
}
