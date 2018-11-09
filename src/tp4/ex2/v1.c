#include <stdio.h>

int main() {
    int n = 1;
    int* p = &n;

    printf("%p \n", &n);
    printf("%p \n", p);

    *p = 2;
    printf("%d \n", n);

    return 0;
}
