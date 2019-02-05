#include <stdio.h>
#include "int-array.h"

/* Global constants */
// Colors
const int GRIS = 0x808080;
const int NOIR = 0x000000;
const int ROUGE = 0xFF0000;
const int ARGENTE = 0xC0C0C0;

// Languages
const int FR = 1;
const int ENG = 2;

void displayIntArray(intArray* arr) {
    for(int i = 0; i < arr->size; i++) {
        switch(arr->numbers[i]) {
            case (int) GRIS:
                if (arr->language == FR) {
                    printf("Couleur grise \n");
                } else {
                    printf("Grey color \n");
                }
                break;

            case (int) ARGENTE:
                if (arr->language == FR) {
                    printf("Couleur argent \n");
                } else {
                    printf("Metal color \n");
                }
                break;

            case (int) NOIR:
                if (arr->language == FR) {
                    printf("Couleur noire \n");
                } else {
                    printf("Black color \n");
                }
                break;

            case (int) ROUGE:
                if (arr->language == FR) {
                    printf("Couleur rouge \n");
                } else {
                    printf("Red color \n");
                }
                break;

            default: 
                if (arr->language == FR) {
                    printf("Couleur inconnue !\n");
                } else {
                    printf("Unknown color !\n");
                }
        }
    }
}
