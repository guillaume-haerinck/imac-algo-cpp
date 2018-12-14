#include <stdio.h>
#include <math.h>
#include "complex.h"

void initComplexe(Complexe* c, double reel, double img) {
    c->reel = reel;
    c->img = img;
}

void afficheComplexe(Complexe c) {
    printf("%lf + %lf*i\n", c.reel, c.img);
}

Complexe sommeComplexe(Complexe cUn, Complexe cDeux) {
    Complexe result;
    result.reel = cUn.reel + cDeux.reel;
    result.img = cUn.img + cDeux.img;
    return result;
}

Complexe produitComplexe(Complexe cUn, Complexe cDeux) {
    Complexe result;
    result.reel = cUn.reel * cDeux.reel;
    result.img = cUn.img * cDeux.img;
    return result;
}

Complexe conjuge(Complexe c) {
    Complexe result;
    result.reel = c.reel;
    result.img = -c.img;
    return result;
}

double moduleComplexe(Complexe c){
    return sqrt(pow(c.reel, 2) + pow(c.img, 2));
}

void inverseComplexe(Complexe* c) {

}
