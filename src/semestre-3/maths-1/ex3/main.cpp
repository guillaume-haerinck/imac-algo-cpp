#include <iostream>
#include <bitset>
#include <cstring>
#include <cstdlib>

int main(int argc, char **argv) {
    // read float
    float a = 0;
    if (argc == 2)
        a = static_cast<float>(atof(argv[1]));
    std::cout << "float : " << a << std::endl;

    int x = *(int *)&a; // Store float as int with same binary layout of float
    std::bitset<sizeof(int) * 8> binary(x);

    std::string stringBinary;
    stringBinary = binary.to_string();

    // description
    std::cout << "s exponent mantiss" << std::endl;

    // sign
    std::cout << stringBinary[0] << " ";

    // exponent
    for (unsigned int i = 1; i < 9; i++)
        std::cout << stringBinary[i];
    std::cout << " ";

    // mantiss
    for (unsigned int i = 9; i < 32; i++)
        std::cout << stringBinary[i];
    std::cout << std::endl;

    return 0;
}
