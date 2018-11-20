#include <stdlib.h>
#include <stdio.h>

#define GRIS 0x808080
#define NOIR 0x000000
#define ROUGE 0xFF0000
#define ARGENTE 0xC0C0C0
#define MAX_TAILLE 25

typedef struct intArray {
    unsigned int size;
    int numbers[MAX_TAILLE];
} intArray;

void displayIntArray(intArray* arr);

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

void displayIntArray(intArray* arr) {
    for(int i = 0; i < arr->size; i++) {
        printf("%X \n", arr->numbers[i]);
    }
}

