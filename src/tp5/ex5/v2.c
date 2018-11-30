#include <stdio.h>
#include <stdlib.h>

int i;

// gcc -Wall -O2 v2.c -o v2.exe

double suiteU(int n);

// Version beaucoups plus optimise que v1 car moins d'appels

int main() {
    printf("%f \n", suiteU(10));
    printf("%d \n", i);

    return EXIT_SUCCESS;
}

double suiteU(int n) {
    i++;
    if (n == 0) return 2;
    return suiteU(n - 1) + 2 / n;
}
