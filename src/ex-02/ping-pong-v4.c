#include <stdio.h>

// gcc -Wall -O2 ping-pong-v3.c -o ping-pong.exe
int main() {
    char msg[25];

    printf("Entrer un message avec i en second (max 25 lettres)\n");
    scanf("%s", msg);
    msg[1] = 'o';
    printf("%s \n", msg);

    return 0;
}
