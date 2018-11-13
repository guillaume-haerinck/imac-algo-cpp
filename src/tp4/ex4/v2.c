#include <stdio.h>
#define MAX_TAILLE 9

// gcc -Wall -O2 v2.c -o v2.exe

void quotientEtReste(int diviseur, int dividende, int *quotient, int *reste);
void minEtMax(int *array, int size);

int main() {
    int array[3] = {3, 1, 9};
    minEtMax(array, 3);
    return 0;
}

void quotientEtReste(int diviseur, int dividende, int *quotient, int *reste) {
    *reste = dividende / diviseur;
    *quotient = dividende % diviseur;
}

void minEtMax(int *array, int size) {
   int min = array[0];
   int max = array[0];

   for(int i = 0; i < size; i++) {
       if(array[i] > max) {
           max = array[i];
       }
       if(array[i] < min) {
           min = array[i];
       }
   }

   printf("min: %d; max: %d \n", min, max);
}
