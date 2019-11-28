#include <Eigen/Dense>
#include <iostream>
#include <cassert>

double evalPolynomial(const Eigen::VectorXd &p, const double x) {
    double result = 0;
    double power_x = 1;
    for (unsigned int i = 0; i < p.size(); i++) {
        result += p[i] * power_x;
        power_x *= x;
    }
    return result;
}

Eigen::VectorXd multiplyPolynomByX(const Eigen::VectorXd &p, const unsigned int value) {
    Eigen::VectorXd result(p.size() + value);
    for (unsigned int i = 0; i < value; i++) {
        result[i] = 0;
    }
    for (unsigned int i = value; i < result.size(); i++) {
        result[i] = p[i - value];
    }
    return result;
}

Eigen::VectorXd multiplyPolynomByConstant(Eigen::VectorXd p, const unsigned int value) {
    for (unsigned int i = 0; i < p.size(); i++) {
        p[i] *= value;
    }
    return p;
}

Eigen::VectorXd substractPolynoms(const Eigen::VectorXd& p1, const Eigen::VectorXd& p2) {
    assert(p1.size() == p2.size() && "To be substracted, polynoms must be same size");
    Eigen::VectorXd result(p1.size());
    result[0] = -p2[0];
    result[result.size() - 1] = p1[result.size() - 1];

    for (unsigned int i = 1; i < result.size() - 1; i++) {
        result[i] = p1[i] - p2[i];
    }
    return result;
}

int main(int argc, char const *argv[]) {
    Eigen::VectorXd myPolynom1(3);
    myPolynom1 << 2, 3, 1;
    Eigen::VectorXd myPolynom2(3);
    myPolynom2 << 9, 5, 4;

    auto result = substractPolynoms(myPolynom1, myPolynom2);
    std::cout << result << std::endl;
    return 0;
}
