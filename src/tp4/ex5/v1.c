#include <stdio.h>

// gcc -Wall -O2 v1.c -o v1.exe

int quotientEtReste(int diviseur, int dividende, int *quotient, int *reste);

int main() {
    int result = 0;
    int modulus = 0;

    if (quotientEtReste(9, 0, &result, &modulus) == 0) {
        printf("ERREUR division \n");
    }

    return 0;
}

int quotientEtReste(int diviseur, int dividende, int *quotient, int *reste) {
    if (dividende == 0) {
        printf("Division par 0 impossible ! \n");
        return 0;
    } else {
        *reste = dividende / diviseur;
        *quotient = dividende % diviseur;
    }
    return 1;
}