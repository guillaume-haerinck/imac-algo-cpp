#include <iostream>

int main(int argc, char const *argv[])
{
    // Supposed to always equal 1/3, but does not work
    // Because of float error propagation

    float u0 = 1.f / 3.f;
    float un = u0;
    for (int i = 0; i < 5; i++) {
        un = 4 * un - 1;
        std::cout << un << std::endl;
    }

    return 0;
}
