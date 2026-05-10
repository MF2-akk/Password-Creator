#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
    size_t length;
    char pass[64];
    const char alphabet[] =
    "abcdefghijklmnopqrstuvwxyz"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "0123456789"
    "!@#$%^&*()-_=+[]{};:,.<>/?";
    int sizeOfAlphabet = strlen(alphabet);
    int inputValue = scanf("%zu", &length);
    if (inputValue != 1) {
	    printf("Invalide value");
	    return 1;
    }

    if (length >= sizeof pass) {
	    return 1;
    }

    srand((unsigned)time(NULL));

    for (size_t i = 0; i < length; ++i) {
	  int randomIndex = rand() % (int)sizeOfAlphabet;
	  pass[i] = alphabet[randomIndex];
    }
    pass[length] = '\0';
    puts(pass);

    return 0;
}
