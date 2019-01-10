#ifndef FICHE_H
#define FICHE_H

#define MAXNOTES 9
#include "date.h"

typedef struct Fiche {
    char nom[20];
    char prenom[20];
    Date dateDeNaissance;
    float notes[MAXNOTES];
    int nbNotes;
} Fiche;

void lireFiche(Fiche* fiche);
void ajoutNote(Fiche* fiche);
void ecrireFiche(Fiche* fiche);

#endif