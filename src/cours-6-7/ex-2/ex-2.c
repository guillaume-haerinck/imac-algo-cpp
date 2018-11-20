#include <stdio.h>
#include "int-array.h"

// gcc -Wall -O2 ex-2.c int-array.c -o ex-2.exe

int main() {
    intArray colors;
    colors.size = 4;
    colors.numbers[0] = GRIS;
    colors.numbers[1] = NOIR;
    colors.numbers[2] = ROUGE;
    colors.numbers[3] = ARGENTE;
    colors.language = ENG;

    displayIntArray(&colors);

    return 0;
}
