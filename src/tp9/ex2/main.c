#include <stdio.h>
#include <stdlib.h>

#include "classe.h"

int main(int argc, char const *argv[])
{
    Classe classe;
    initialiseClasse(&classe);

    ecrireClasse(&classe);
    lireClasse(&classe);

    freeClasse(&classe);
    return EXIT_SUCCESS;
}
