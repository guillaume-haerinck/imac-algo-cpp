
#include <stdio.h>


int puissance(int base, int puis) {
    int result = 1;
    
    while (puis > 0) {
	result *= base;
	puis -= 1;
    }
    return result;
}


float partie_decimale(float f) {
    return f - (int)f;
}


int main(void) {
    printf("3 puissance 5 est %d.\n", puissance(3,5));
    printf("Partie decimale de 4.672 est %f.\n", partie_decimale(4.672));

    return 0;
}
    
