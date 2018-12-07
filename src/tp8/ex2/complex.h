#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct Complexe {
    double reel;
    double img;
} Complexe;

void initComplexe(Complexe *c, double reel, double img);
void afficheComplexe(Complexe c);
Complexe sommeComplexe(Complexe cUn, Complexe cDeux);
Complexe produitComplexe(Complexe cUn, Complexe cDeux);
Complexe conjuge(Complexe c);
void inverseComplexe(Complexe* c);

#endif