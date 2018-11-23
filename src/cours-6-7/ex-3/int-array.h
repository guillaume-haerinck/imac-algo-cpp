#define MAX_TAILLE 25

// Public struct
typedef struct intArray {
    unsigned int size;
    int numbers[MAX_TAILLE];
    int language;
} intArray;

// Functions
void displayIntArray(intArray* arr);

/* Global constants */
// Colors
extern const int GRIS;
extern const int NOIR;
extern const int ROUGE;
extern const int ARGENTE;

// Languages
const int FR;
const int ENG;
