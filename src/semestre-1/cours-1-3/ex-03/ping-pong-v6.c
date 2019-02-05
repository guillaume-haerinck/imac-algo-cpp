#include <stdio.h>
#include <string.h>

// gcc -Wall -O2 ping-pong-v6.c -o ping-pong.exe
int main() {
    char msg[25];
    char stopMsg[] = "fin";

    for (int i = 1; i <= 10; i++) {
        printf("[iteration %d] Entrez un message, la seconde lettre sera remplacee (max 24 lettres)\n", i);
        scanf("%24s", msg);

        if (strcmp(msg, stopMsg) == 0) {
            printf("Message de stop detecte, fin du programme\n");
            return 0;
        }
        if (msg[1] != 0) {
            msg[1] = 'o';
        }
        printf("%s \n", msg);
    }

    return 0;
}
