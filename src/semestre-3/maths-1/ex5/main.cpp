#include <iostream>

enum Part {
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE
};

int main(int argc, char const *argv[]) {
    Part current = Part::FIVE;

    switch (current) {
    // Ne tombera pas égal
    case Part::ONE: {
        float a = 1.f;
        float b = 2.f - 1.f;
        if (a == b) {
            std::cout << "Egal" << std::endl;
        } else {
            std::cout << "Non egal" << std::endl;
        }
        break;
    }
    
    // Il vas y avoir un cast du int en float
    case Part::TWO: {
        int a = 1;
        float b = a / 3;
        break;
    }

    case Part::THREE: {
        float a = -5.f / 0.1f;
        std::cout << a << std::endl;
        break;
    }

    case Part::FOUR: {
        float a = powf(2.f, 40);
        std::cout << a << std::endl;

        int b = a;
        std::cout << b << std::endl;
        break;
    }

    // Stops at 0.25 because too small to be added to a
    case Part::FIVE: {
        for (float a = 0.f; a < 1000000; a += 0.00001) {
            std::cout << "À table !" << std::endl;
        }

        break;
    }

    default:
        break;
    }

    return 0;
}
