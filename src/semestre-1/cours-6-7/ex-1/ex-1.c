#include <stdio.h>

#include "int-array.h"

#define GRIS 0x808080
#define NOIR 0x000000
#define ROUGE 0xFF0000
#define ARGENTE 0xC0C0C0

// gcc -Wall -O2 ex-1.c int-array.c -o ex-1.exe

int main() {
    intArray colors;
    colors.size = 4;
    colors.numbers[0] = GRIS;
    colors.numbers[1] = NOIR;
    colors.numbers[2] = ROUGE;
    colors.numbers[3] = ARGENTE;

    displayIntArray(&colors);

    return 0;
}
