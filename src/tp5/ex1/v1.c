#include <stdio.h>

// gcc -Wall -O2 v1.c -o v1.exe

int main() {
    char lettre = 't';
    printf("lettre: %c, ASCII: %d \n", lettre, lettre);
    lettre += 2;
    printf("lettre: %c, ASCII: %d \n", lettre, lettre);
    return 0;
}
