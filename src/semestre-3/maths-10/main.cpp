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

int main(int argc, char const *argv[]) {
    Eigen::VectorXd myPolynom(3);
    myPolynom << 3, -6, 4;
    double result = evalPolynomial(myPolynom, 2);
    std::cout << result << std::endl;
    return 0;
}
