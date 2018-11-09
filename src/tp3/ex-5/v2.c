#include <stdio.h>
#define MAX_TAILLE 5

void affiche_tab(int * array, int size);
void remplir_tab(int * array, int size);

// gcc -Wall -O2 v2.c -o v2.exe

int main() {
    int array[MAX_TAILLE] = {3, 9, 7, 1, 9};

    remplir_tab(array, MAX_TAILLE);
    affiche_tab(array, MAX_TAILLE);

    return 0;
}


void affiche_tab(int * array, int size) {
    printf("Valeurs du tableau \n");
    for(int i = 0; i < size; i++) {
        printf("%d \n", array[i]);
    }
}

void remplir_tab(int * array, int size) {
    printf("Remplir le tableau d'entier \n");

    for(int i = 0; i < size; i++) {
        scanf("%d \n", &(array[i]));
    }
}
