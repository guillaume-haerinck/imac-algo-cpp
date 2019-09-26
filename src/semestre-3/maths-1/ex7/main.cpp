#include <iostream>
#include <sstream>
#include <assert.h>

// Authorized operations : <<, >>, +, -, %
// You cannot use *
// You need to multiply two float

int main(int argc, char *argv[])
{
    assert(argc == 3);

    // Get values from CLI
    int a = 0;
    std::stringstream ss(argv[1]);
    ss >> a;
    int b = 0;
    ss.clear();
    ss.str(argv[2]);
    ss >> b;
    int modSum = 0;

    // GUI
    std::cout << a << " * " << b << "= ";

    // Russian calculator
    while (a > 1) {
        if (a % 2 != 0) {
            int mod = a % 2;
            modSum += b / mod;
        }

        a /= 2;
        b *= 2;
    }

    std::cout << b + modSum << std::endl;
    
    return 0;
}
