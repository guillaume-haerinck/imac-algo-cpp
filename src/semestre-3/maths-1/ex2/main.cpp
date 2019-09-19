#include <iostream>
#include <cstdlib>

/**
 * @brief Print binary value on screen
 */
void printUchar(const unsigned char x) {
    std::cout << (int)x << " : ";

    for (int i = 7; i >= 0; i--) {
        std::cout << int((x >> i) &1);
    }

    std::cout << std::endl;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " nb" << std::endl;
        return 0;
    }
    printUchar(atoi(argv[1]));

    return 1;
}
