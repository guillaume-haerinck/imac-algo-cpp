#include <stdio.h>
#include "complex.h"

void initComplexe(Complexe* c, double reel, double img) {
    c->reel = reel;
    c->img = img;
}

void afficheComplexe(Complexe c) {
    printf("%lf + %lf*i\n", c.reel, c.img);
}

Complexe sommeComplexe(Complexe cUn, Complexe cDeux) {
    return cUn;
}

Complexe produitComplexe(Complexe cUn, Complexe cDeux) {
    return cUn;
}

Complexe conjuge(Complexe c) {
    return c;
}

void inverseComplexe(Complexe* c) {

}
