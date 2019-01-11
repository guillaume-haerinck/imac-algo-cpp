#ifndef DATE_H
#define DATE_H

/**
 * @brief Date in d/m/y format
 * 
 */
typedef struct Date {
    int jour;
    char mois[10];
    int annee;
} Date;

/**
 * @brief Print date on screen in d/m/y format
 * 
 * @param date 
 */
void lireDate(Date date);

/**
 * @brief Write dates
 * 
 * @param date 
 */
void ecrireDate(Date* date);

#endif