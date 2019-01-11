#ifndef CLASSE_H
#define CLASSE_H

#include "fiche.h"
#include <stdbool.h>

/**
 * @brief Fiche etudiant
 * 
 */
typedef struct {
    Fiche *fiches;
    int taille; // Used size
    int capacite; // Max size
} Classe;

int initialiseClasse(Classe* classe);
bool dejaPresente(Classe classe, Fiche fiche);
void lireClasse(Classe* classe);
void ecrireClasse(Classe classe);
void ajouterFiche(Classe* classe, Fiche fiche);
int supprimerFiche(Classe* classe, Fiche fiche);

#endif