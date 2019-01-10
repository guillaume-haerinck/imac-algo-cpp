#ifndef DATE_H
#define DATE_H

typedef struct Date {
    int jour;
    char mois[10];
    int annee;
} Date;

void ecrireDate(Date date);


#endif