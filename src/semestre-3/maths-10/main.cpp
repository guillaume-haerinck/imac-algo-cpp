#include <Eigen/Dense>
#include <iostream>
#include <cassert>

/**
 * @brief Resolve given polynom at x value
 * 
 * @param p 
 * @param x 
 * @return double 
 */
double evalPolynomial(const Eigen::VectorXd &p, const double x) {
    double result = 0;
    double power_x = 1;
    for (unsigned int i = 0; i < p.size(); i++) {
        result += p[i] * power_x;
        power_x *= x;
    }
    return result;
}

/**
 * @brief Multiply given polynom by X at value power
 * 
 * @param p 
 * @param value 
 * @return Eigen::VectorXd 
 */
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

/**
 * @brief Multiply given polynom by given constant
 * 
 * @param p 
 * @param value 
 * @return Eigen::VectorXd 
 */
Eigen::VectorXd multiplyPolynomByConstant(Eigen::VectorXd p, const unsigned int value) {
    for (unsigned int i = 0; i < p.size(); i++) {
        p[i] *= value;
    }
    return p;
}

/**
 * @brief Substract p1 polynom by p2
 * 
 * @param p1 
 * @param p2 
 * @return Eigen::VectorXd 
 */
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

/**
 * @brief Returns a polynom from its root values
 * 
 * @param roots 
 * @return Eigen::VectorXd 
 */
Eigen::VectorXd polynomialFromRoots(const Eigen::VectorXd &roots) {
    Eigen::VectorXd p = Eigen::VectorXd::Ones(roots.size() + 1);

    // For the first root
    p(0) = -roots(0);

    // For the other roots
    for (unsigned int i = 0; i < roots.size(); i++) {
        for (unsigned int j = i; j > 0; j--) {
            p(j) = p(j-1)-roots(i)*p(j);
        }
        p(0) *= -roots(i);
    }
    

    return result;
}

int main(int argc, char const *argv[]) {
    Eigen::VectorXd myRoot(3);
    myRoot << 1, 2, 3;

    auto result = polynomialFromRoots(myRoot);
    std::cout << result << std::endl;
    return 0;
}
