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

    return p;
}

/**
 * @brief 
 * 
 * @param p - Polynom to solve
 * @return Eigen::VectorXd 
 */
Eigen::VectorXd findRoots(const Eigen::VectorXd &p, unsigned int nbIter) {
    Eigen::VectorXd pUnit = p / p(p.size() - 1);
    Eigen::MatrixXd c = Eigen::MatrixXd::Zero(p.size() - 1, p.size() - 1);
    c.bottomLeftCorner(c.rows() - 1, c.cols() - 1).setIdentity();
    c.rightCols(1) = -pUnit.head(pUnit.size() - 1);

    // Iterative solver
    for (size_t i = 0; i < nbIter; i++) {
        Eigen::HouseholderQR<Eigen::MatrixXd> qr(c);
        Eigen::MatrixXd q = qr.householderQ();
        Eigen::MatrixXd r = qr.matrixQR().triangularView<Eigen::Upper>();
        c = r * q;
    }
    
    return c.diagonal();
}

/**
 * @brief Returns the derivate of a polynom
 * 
 * @param p 
 * @return Eigen::VectorXd 
 */
Eigen::VectorXd derivative(const Eigen::VectorXd& p) {
    Eigen::VectorXd derivate(p.size() - 1);
    for (unsigned int i = 0; i < derivate.size(); ++i) {
        derivate(i) = (i + 1) * p(i + 1);
    }
    return derivate;
}

/**
 * @brief 
 * 
 * @param p 
 * @param roots 
 * @return Eigen::VectorXd 
 */
Eigen::VectorXd rootsRafinement(const Eigen::VectorXd& p, Eigen::VectorXd roots, const unsigned int nbIter = 10) {
    Eigen::VectorXd pDerivative = derivative(p);

    for (unsigned int i = 0; i < roots.size(); i++) {
        if (abs(roots(i)) > 0) {
            for (unsigned int j = 0; j < nbIter; j++) {
                roots(i) = roots(i) - ( evalPolynomial(p, roots(i)) / evalPolynomial(pDerivative, roots(i)) );
            }
        }
    }
    
    return roots;
}

int main(int argc, char const *argv[]) {
    Eigen::VectorXd myRoot(5);
    myRoot << 1, 2, 2, 3, 4;
    auto myPolynom = polynomialFromRoots(myRoot);

    auto foundRoot = findRoots(myPolynom, 10);
    auto foundRootRaf = rootsRafinement(myPolynom, foundRoot, 50);

    std::cout << foundRootRaf << std::endl;
    return 0;
}
