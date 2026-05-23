#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "passwordCreator.h"

const char alphabet[] =
"abcdefghijklmnopqrstuvwxyz"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"0123456789"
"!@#$%^&*()-_=+[]{};:,.<>/?";

int generate(size_t length) {
    char pass[MAX_PASSWORD_LENGTH];

    short sizeOfAlphabet = strlen(alphabet);
    srand((unsigned)time(NULL));

    if (length <= 0) {
      printf("Invalide value\n");
      return 1;
    }

    for (size_t i = 0; i < length; ++i) {
        int randomIndex = rand() % (short)sizeOfAlphabet;
        pass[i] = alphabet[randomIndex];
    }
    pass[length] = '\0';
    puts(pass);
    return 0;
}
