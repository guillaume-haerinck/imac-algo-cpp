#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    if (argc != 3) {
        printf("Nombre d'argument invalides ! \n");
        return -1;
    }

    if (strcmp(argv[1], argv[2]) == 0) {
        printf("Deux entree egales \n");
    }
    return 0;
}
