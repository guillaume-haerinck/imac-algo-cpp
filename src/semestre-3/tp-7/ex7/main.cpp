#include <vector>
#include <string>
#include <iostream>
#include <functional>

class Majuscule {
public:
    Majuscule() {}
    ~Majuscule() {}
 
    const char operator()(const char* minLetter) {
        return *minLetter - 32;
    }
};

int main(int argc, char const *argv[]) {
    Majuscule maj;
    auto test = maj("d");
    std::cout << test;


    return 0;
}
