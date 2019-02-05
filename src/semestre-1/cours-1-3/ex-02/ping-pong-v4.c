#include <stdio.h>

// gcc -Wall -O2 ping-pong-v4.c -o ping-pong.exe
int main() {
    char msg[25];

    printf("Entrer un message, la seconde lettre sera remplacee (max 24 lettres)\n");
    scanf("%24s", msg);
    if (msg[1] != 0) {
        msg[1] = 'o';
    }
    printf("%s \n", msg);

    return 0;
}
