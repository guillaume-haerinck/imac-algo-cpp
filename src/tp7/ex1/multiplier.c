#include <stdio.h>

// gcc -Wall -O2 multiplier.c -o multiplier

int main(int argc, char const *argv[])
{
    int nb1 = 0;
    int nb2 = 0;
    sscanf(argv[1], "%d", &nb1);
    sscanf(argv[2], "%d", &nb2);
    printf("%d \n", nb1 * nb2);
    return 0;
}
