#include "classe.h"
#include <stdio.h>
#include <stdlib.h>

int initialiseClasse(Classe* classe) {
    printf("Entrez la capacite de la classe en chiffre\n");
	scanf("%d", &(classe->capacite));
    classe->taille = classe->capacite;
    classe->fiches = malloc(sizeof(Fiche) * classe->capacite);
    
    if (classe->fiches == NULL) {
        printf("initialiseClasse: cannot allocate memory");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
};

void freeClasse(Classe* classe) {
    free(classe->fiches);
};

void ecrireClasse(Classe* classe) {
    for (int i = 0; i < classe->taille; i++) {
        ecrireFiche(&(classe->fiches[i]));
    }
};

bool dejaPresente(Classe classe, Fiche fiche) {

};

void lireClasse(Classe* classe) {
    for (int i = 0; i < classe->taille; i++) {
        lireFiche(&(classe->fiches[i]));
    }
};

void ajouterFiche(Classe* classe, Fiche fiche) {

};

int supprimerFiche(Classe* classe, Fiche fiche) {

};
