#include <stdio.h>

int main(int argc, char const *argv[])
{
    int toto;
    char* tata; // un pointeur en C pese toujours 8 octets
    printf("%ld \n", sizeof(char));
    printf("%ld \n", sizeof(unsigned char));
    printf("%ld \n", sizeof(int));
    printf("%ld \n", sizeof(unsigned int));
    printf("%ld \n", sizeof(float));
    printf("%ld \n", sizeof(double));
    printf("%ld \n", sizeof(long unsigned int));
    printf("%ld \n", sizeof(toto));
    printf("%ld \n", sizeof(tata));
    return 0;
}
