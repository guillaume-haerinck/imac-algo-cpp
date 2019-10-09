#include <iostream>
#include <sstream>
#include <assert.h>

// Authorized operations : <<, >>, +, -, %
// You cannot use *
// You need to multiply two float

int main(int argc, char *argv[])
{
    assert(argc == 3 && "You need to provide two number to multiply");

    // Get values from CLI
    int a = 0;
    std::stringstream ss(argv[1]);
    ss >> a;
    int b = 0;
    ss.clear();
    ss.str(argv[2]);
    ss >> b;
    int modSum = 0;

    if (a > b)
        std::swap(a, b);

    if (a == 0)
        return 0;

    // GUI
    std::cout << a << " * " << b << " = ";

    // Russian calculator
    while (a > 1) {
        if (a & 1) { // Pair ?
            int mod = a % 2;
            modSum += b / mod;
        }

        a = a >> 1; // multiply by two
        b = b << 1; // divide by two
    }

    std::cout << b + modSum << std::endl;
    
    return 0;
}
