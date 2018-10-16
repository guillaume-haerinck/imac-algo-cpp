#include <stdio.h>

// gcc -Wall -O2 ping-pong-v3.c -o ping-pong.exe
int main() {
    char msg[25];

    printf("Entrer un message avec i en second (max 25 lettres)\n");
    scanf("%s", msg);

    if (msg[1] == 'i') {
        printf("pong \n");
    } else {
        printf("i n'est pas la seconde lettre \n");
    }
    return 0;
}
