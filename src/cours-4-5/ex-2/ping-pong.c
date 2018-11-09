/* ping-pong.c */
#include <stdio.h>
#include <string.h>
#include "ping-pong.h"

void ping_pong() {
    char msg[25];
    char stopMsg[] = "fin";

    for (int i = 1; i <= 10; i++) {
        printf("[iteration %d] Entrez un message, entrez fin pour arreter\n", i);
        scanf("%24s", msg);

        if (strcmp(msg, stopMsg) == 0) {
            printf("Message de stop detecte, fin du programme\n");
            return;
        }
        printf("%s \n", msg);
    }
}
