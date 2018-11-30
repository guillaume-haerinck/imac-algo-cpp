#include <stdio.h>
#include <stdlib.h>

// gcc -Wall -O2 v1.c -o v1.exe

int fact(int n);
int pgcd_euc(int a, int b);

int main() {
    printf("%d \n", 33810 % 4116);

    return EXIT_SUCCESS;
}

int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

int pgcd_euc(int a, int b) {
    if (a % b == 0) return b;
    return pgcd_euc(b, a % b);
}

