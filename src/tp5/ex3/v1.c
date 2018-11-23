#include <stdio.h>
#include <stdlib.h>

// voir stdlib pour constantes exit success et gestion erreurs
// gcc -Wall -O2 v1.c -o v1.exe

int longueur_chaine(char string[]);

int main() {
    char mystring[] = "ma chaine";
    longueur_chaine(mystring);
    return 0;
}

int longueur_chaine(char string[]) {
    int length = sizeof(*string) / sizeof(char);
    printf("%d \n", length);
    return 0;
}