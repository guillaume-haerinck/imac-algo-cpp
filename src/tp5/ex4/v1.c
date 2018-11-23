#include <stdio.h>
#include <stdlib.h>

int fact(int n);
int pgcd_euc(int a, int b);

int main() {
    printf("%d \n", fact(3));

    return EXIT_SUCCESS;
}

int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}

int pgcd_euc(int a, int b) {

}

