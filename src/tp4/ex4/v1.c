#include <stdio.h>
#define MAX_TAILLE 9

void quotientEtReste(int diviseur, int dividende, int *quotient, int *reste);

int main() {
    int result = 0;
    int modulus = 0;

    quotientEtReste(2, 53, &result, &modulus);

    printf("quotient: %d, reste %d \n", result, modulus);
    return 0;
}

void quotientEtReste(int diviseur, int dividende, int *quotient, int *reste) {
    *reste = dividende / diviseur;
    *quotient = dividende % diviseur;
}
