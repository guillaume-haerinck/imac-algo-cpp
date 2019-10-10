#include <iostream>
#include <Eigen/Dense>
#include <ctime>
#include <cassert>
#include "chrono.h"

double dot1(const Eigen::VectorXd &vec1, const Eigen::VectorXd &vec2) {
    assert(vec1.size() == vec2.size() && "Vectors must have the same size");
    double result = 0.0f;
    for (size_t i = 0; i < vec1.size(); ++i) {
        result += vec1[i] * vec2[i];
    }
    return result;
}

Eigen::MatrixXd matProduct(const Eigen::MatrixXd& mat1, const Eigen::MatrixXd& mat2) {
    assert(mat1.size() == mat2.size() && "Matrices must have the same size");
    Eigen::MatrixXd result = Eigen::MatrixXd::Zero(mat1.rows(), mat1.cols());
    
    for (size_t i = 0; i < result.rows(); i++) {
        for (size_t j = 0; j < result.cols(); j++) {
            for (size_t k = 0; k < mat1.cols(); k++) {
                result(i, j) += mat1(i, k) * mat2(k, j);
            }
        }
    }
    
    return result;
}

int main() {
    const size_t dimension = 500;
    TP_CPP_IMAC2::Chrono chrono;

    Eigen::MatrixXd A = Eigen::MatrixXd::Random(dimension, dimension);
    Eigen::MatrixXd B = Eigen::MatrixXd::Random(dimension, dimension);

    chrono.start();
    Eigen::MatrixXd eingenResult = A * B;
    std::cout << "Eignen mean : " << chrono.timeSpan() << std::endl;
    chrono.stop();

    chrono.start();
    Eigen::MatrixXd myResult = matProduct(A, B);
    std::cout << "My mean : " << chrono.timeSpan() << std::endl;
    chrono.stop();

    std::cout << (eingenResult - myResult).norm() << std::endl;

    /*

    chrono.start();
    std::cout << "mean : " << chrono.timeSpan() << std::endl;
    chrono.stop();
    
    Eigen::VectorXd vec1 = Eigen::VectorXd::Random(dimension);
    Eigen::VectorXd vec2 = Eigen::VectorXd::Random(dimension);

    std::cout << "My dot1 : " << dot1(vec1, vec2) << std::endl;
    std::cout << "My dot2 : " << dot2(vec1, vec2) << std::endl;
    std::cout << "Eignen dot : " << vec1.dot(vec2) << std::endl;
    */

    /*
    Eigen::VectorXd v1(5);
    v1 << 1, 2, 3, 4, 5;
    std::cout << "v1 : " << v1.transpose() << std::endl
              << std::endl;

    Eigen::Vector4f v2 = Eigen::Vector4f::Zero();
    std::cout << "v2 : " << v2.transpose() << std::endl
              << std::endl;

    v2 = Eigen::Vector4f::Ones();
    std::cout << "v2 : " << v2.transpose() << std::endl
              << std::endl;

    Eigen::Vector4f v3 = Eigen::Vector4f::Random();
    std::cout << "v3 : " << v3.transpose() << std::endl
              << std::endl;
    v3 = v3 + v2;
    std::cout << "v3 : " << v3.transpose() << std::endl
              << std::endl;

    Eigen::MatrixXd A = Eigen::MatrixXd::Random(3, 4);
    std::cout << "A :\n"
              << A << std::endl
              << std::endl;

    Eigen::Matrix4d B = Eigen::Matrix4d::Random(4, 4);
    std::cout << "B :\n"
              << B << std::endl
              << std::endl;

    Eigen::MatrixXd C(3, 4);

    clock_t begin = clock();
    C = A * B;
    clock_t end = clock();
    double tempsCalc = double(end - begin) / CLOCKS_PER_SEC;

    std::cout << "temps calcul du produit matriciel: " << tempsCalc << "s " << std::endl;
    std::cout << "A + 2*A :\n"
              << A + 2 * A << std::endl
              << std::endl;
    std::cout << "A * B :\n"
              << A * B << std::endl
              << std::endl;

              */

    return 0;
}
