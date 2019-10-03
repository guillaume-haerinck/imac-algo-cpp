#include "vectord.h"

#include <iostream>

int main(int argc, char const *argv[]) {
    VectorD myVector(9);
    VectorD myOtherVector = myVector;
    myVector.at(3) = 3;

    std::cout << "Here" << std::endl;

    return 0;
}
