#include <stdio.h>
#define MAX_TAILLE 9

// gcc -Wall -O2 v2.c -o v2.exe

void quotientEtReste(int diviseur, int dividende, int *quotient, int *reste);

int main() {

    return 0;
}

void quotientEtReste(int diviseur, int dividende, int *quotient, int *reste) {
    *reste = dividende / diviseur;
    *quotient = dividende % diviseur;
}

void minEtMax(int *array, int size) {
   
}
