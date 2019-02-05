#include <stdio.h>
#include <stdlib.h>

int i;

// gcc -Wall -O2 v1.c -o v1.exe

double suiteU(int n);
double suiteV(int n);

// Double recursivite donc mons optimise que v2

int main() {
    printf("%f \n", suiteV(10));
    printf("nombre d'appel pour 10: %d \n", i);

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