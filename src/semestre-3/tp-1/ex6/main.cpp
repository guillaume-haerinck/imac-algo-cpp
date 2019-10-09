#include <vector>
#include <iostream>
#include "chrono.h"

float mean(const std::vector<int>& vec) {
    double sum;
    for (auto& data : vec) {
        sum += data;
    }
    return sum / vec.size();
}

float meanCopy(const std::vector<int> vec) {
    double sum;
    for (auto& data : vec) {
        sum += data;
    }
    return sum / vec.size();
}

int main(int argc, char const *argv[]) {
    TP_CPP_IMAC2::Chrono chrono;

    std::vector<int> vec;
    vec.resize(300);
    for (size_t i = 0; i < vec.size(); i++) {
        vec.at(i) = i;
    }

    chrono.start();
    mean(vec);
    std::cout << "mean : " << chrono.timeSpan() << std::endl;
    chrono.stop();

    chrono.start();
    meanCopy(vec);
    std::cout << "meanCopy : " << chrono.timeSpan() << std::endl;
    chrono.stop();

    return 0;
}
