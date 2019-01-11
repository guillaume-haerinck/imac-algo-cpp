#include <stdio.h>
#include <stdlib.h>

// gcc -Wall -O2 ex1.c -o ex1.exe

typedef struct color {
    enum { RGB, BW } type;
    union {
        struct {
            unsigned char red;
            unsigned char green;
            unsigned char blue;
        } RGB;
        char BW;
    } value;
} color;

int main() {
    color* p;
    p = malloc(sizeof(color));
    p->type = BW;
    p->value.BW = 1;

    if (p->type == BW) {
        printf("Type is black and white\n");
        printf("Unaloc value is: %d \n", p->value.RGB.blue);
    }
    printf("%d \n", p->value.BW);
    free(p);

    /*
    enum transformType {
        addlum,
        dimlum,
        addcon,
        dimcon,
        invert,
        sepia
    };
    */
    return 0;
}