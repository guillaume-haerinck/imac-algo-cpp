#ifndef FICHE_H
#define FICHE_H

#define MAXNOTES 9
#include "date.h"

/**
 * @brief Fiche etudiant
 * 
 */
typedef struct Fiche {
    char nom[20];
    char prenom[20];
    Date dateDeNaissance;
    float notes[MAXNOTES];
    int nbNotes;
} Fiche;

/**
 * @brief Print fiche on screen
 * 
 * @param fiche 
 */
void lireFiche(Fiche* fiche);

/**
 * @brief Write note on fiche
 * 
 * @param fiche 
 * @param note
 * 
 * @return EXIT_SUCCESS or EXIT_FAILURE
 */
int ajoutNote(Fiche* fiche, float note);

/**
 * @brief Write full fiche
 * 
 * @param fiche 
 */
void ecrireFiche(Fiche* fiche);

#endif