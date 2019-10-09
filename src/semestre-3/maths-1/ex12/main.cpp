#include <iomanip>
#include <iostream>

int main(int argc, char const *argv[]) {
    float target = 123;
    
    float un = 1.0f;
    float unp1 = 0.0f;

    for (size_t i = 0; i < 200; i++) {
        unp1 = (un + i / un) / 2;
    }
    
    std::cout << std::setprecision(20) << unp1 << std::endl;
    
    return 0;
}
