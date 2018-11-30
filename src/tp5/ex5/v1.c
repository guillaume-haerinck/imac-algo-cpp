#include <stdio.h>
#include <stdlib.h>

int i;

// gcc -Wall -O2 v1.c -o v1.exe

double suiteU(int n);
double suiteV(int n);

// Voir calcul de racine de 2 sur pc hyper optimise

int main() {
    printf("%f \n", suiteV(10));
    printf("%d \n", i);

    return EXIT_SUCCESS;
}

double suiteU(int n) {
    i++;
    if (n == 0) return 2;
    return suiteU(n - 1) + suiteV(n - 1) / 2;
}

double suiteV(int n) {
    return 2 / suiteU(n);
}