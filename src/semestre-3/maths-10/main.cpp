#include <Eigen/Dense>
#include <iostream>

double evalPolynomial(const Eigen::VectorXd &p, const double x) {
    double result = 0;
    double power_x = 1;
    for (unsigned int i = 0; i < p.size(); i++) {
        result += p[i] * power_x;
        power_x *= x;
    }
    return result;
}

Eigen::VectorXd multiplyPolynom(const Eigen::VectorXd &p, const unsigned int value) {
    Eigen::VectorXd result(p.size() + value);
    for (size_t i = 0; i < value; i++) {
        result[i] = 0;
    }
    for (size_t i = value; i < result.size(); i++) {
        result[i] = p[i - value];
    }
    return result;
}

int main(int argc, char const *argv[]) {
    Eigen::VectorXd myPolynom(3);
    myPolynom << 2, 3, 1;
    auto result = multiplyPolynom(myPolynom, 4);
    std::cout << result << std::endl;
    return 0;
}
