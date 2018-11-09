#include <stdio.h>
#define MAX_TAILLE 5

// int affiche_taille();

// gcc -Wall -O2 v1.c -o v1.exe

int main() {
    int array[MAX_TAILLE] = {3, 9, 7, 1, 9};

    for(int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
        printf("%d \n", array[i]);
    }

    return 0;
}