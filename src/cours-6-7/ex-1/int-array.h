#define MAX_TAILLE 25

// Public struct
typedef struct intArray {
    unsigned int size;
    int numbers[MAX_TAILLE];
} intArray;

void displayIntArray(intArray* arr);
