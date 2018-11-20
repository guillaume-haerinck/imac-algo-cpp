#include <stdio.h>
#include "int-array.h"

void displayIntArray(intArray* arr) {
    for(int i = 0; i < arr->size; i++) {
        printf("%X \n", arr->numbers[i]);
    }
}
