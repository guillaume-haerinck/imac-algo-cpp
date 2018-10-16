#include <stdio.h>

// gcc -Wall -O2 ping-pong-v2.c -o ping-pong.exe
int main() {
    char msg[25];

    printf("Entrer un message (max 25 lettres)\n");
    scanf("%s", msg);
    printf("Message: %s \n", msg);
    return 0;
}
