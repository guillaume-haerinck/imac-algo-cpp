#ifndef CLASSE_H
#define CLASSE_H

#include "fiche.h"
#include <stdbool.h>

/**
 * @brief Fiche etudiant
 * 
 */
typedef struct {
    Fiche *fiches; // Array
    int taille; // Used size
    int capacite; // Max size
} Classe;

/**
 * @brief Constructor for classe
 * @note You must call freeClasse when done
 * 
 * @param classe 
 * @return EXIT_SUCESS or EXIT_FAILURE
 */
int initialiseClasse(Classe* classe);

/**
 * @brief Destructor for classe
 * 
 * @param classe
 */
void freeClasse(Classe* classe);

/**
 * @brief Write class
 * 
 * @param classe 
 */
void ecrireClasse(Classe* classe);

/**
 * @brief Print the class on screen
 * 
 * @param classe 
 */
void lireClasse(Classe* classe);

/**
 * @brief Increase taille (but not more than capacity)
 * 
 * @param classe 
 * @param fiche 
 */
void ajouterFiche(Classe* classe, Fiche fiche);

/**
 * @brief Decrease taille (if not already empty)
 * 
 * @param classe 
 * @param fiche 
 * @return int 
 */
int supprimerFiche(Classe* classe, Fiche fiche);

/**
 * @brief Tell if the fiche already exist in classe
 * 
 * @param classe 
 * @param fiche 
 * @return true 
 * @return false 
 */
bool dejaPresente(Classe classe, Fiche fiche);

#endif