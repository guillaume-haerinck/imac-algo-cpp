#include <stdio.h>
#include "complex.h"

int main() {
    Complexe myvar;
    initComplexe(&myvar, 1, 9);
    afficheComplexe(myvar);
    return 0;
}