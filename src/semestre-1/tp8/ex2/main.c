#include <stdio.h>
#include "complex.h"

int main() {
    Complexe myvar;
    initComplexe(&myvar, 3, 4);
    afficheComplexe(myvar);
    printf("%f \n", moduleComplexe(myvar));
    return 0;
}