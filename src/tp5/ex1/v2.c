#include <stdio.h>

// gcc -Wall -O2 v2.c -o v2.exe

int main() {
    char lettre = 'A';
    while(lettre <= 'Z') {
        printf("lettre: %c, ASCII: %d \n", lettre, lettre);
        lettre++;
    }
    return 0;
}
