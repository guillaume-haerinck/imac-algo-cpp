#include "fiche.h"
#include <stdlib.h>
#include <stdio.h>

void lireFiche(Fiche* fiche) {
    printf("Nom : %s\n", fiche->nom);
    printf("Prenom : %s\n", fiche->prenom);
    printf("Date de naissance : ");
    lireDate(fiche->dateDeNaissance);
    printf("Notes : ");
    // TODO print the notes
};

int ajoutNote(Fiche* fiche, float note) {
    if (fiche->nbNotes >= MAXNOTES) {
        printf("ajoutNote: array is full\n");
        return EXIT_FAILURE;
    }

    fiche->notes[fiche->nbNotes] = note;
    fiche->nbNotes++;
    return EXIT_SUCCESS;
};

void ecrireFiche(Fiche* fiche){
	fiche->nbNotes = 0;
	printf("Entrez le nom\n");
	scanf("%s", fiche->nom);
	printf("Entrez le prénom\n");
	scanf("%s", fiche->prenom);
    // FIXME
	// ecrireDate(fiche->dateDeNaissance);
}


