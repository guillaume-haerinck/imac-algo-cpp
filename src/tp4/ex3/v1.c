#include <stdio.h>

// gcc -Wall -O2 v1.c -o v1.exe

void incremente(int m);
void incrementeParAdresse(int *p);
void echange(int *p1, int *p2);

int main() {
    int num = 3;
    int* pNum = &num;

    incrementeParAdresse(pNum);
    return 0;
}

void incremente(int m) {
    m++;
    printf("%d \n", m);
}

void incrementeParAdresse(int *p) {
    (*p)++;
    printf("%d \n", *p);
}

void echange(int *p1, int *p2) {
    int* temp = *p1;
    *p1 = *p2;
    *p2 = *temp;
}