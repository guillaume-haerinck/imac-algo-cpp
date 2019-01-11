#include "date.h"
#include <stdio.h>

void lireDate(Date date){
	printf("%d %s %d\n", date.jour, date.mois, date.annee);
}

void ecrireDate(Date* date){
	printf("Entrez le jour en chiffre\n");
	scanf("%d", date->jour);
	printf("Entrez le mois en lettre\n");
	scanf("%s", date->mois);
	printf("Entrez l'année en chiffre\n");
	scanf("%d", date->annee);
}