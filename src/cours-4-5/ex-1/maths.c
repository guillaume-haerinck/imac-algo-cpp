#include "maths.h"

// FIXME
int power2(int n) {
    int eq1 = (n - 1);
    eq1 = eq1 + eq1;
    int eq2 = (n + n) - 1;

    return eq1 + eq2;
}
