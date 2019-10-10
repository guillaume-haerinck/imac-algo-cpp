#include <iostream>
#include <Eigen/Dense>
#include <ctime>

double dot1(const Eigen::VectorXd &vec1, const Eigen::VectorXd &vec2) {
    double result = 0.0f;
    for (size_t i = 0; i < vec1.size(); ++i) {
        result += vec1[i] * vec2[i];
    }
    return result;
}

double dot2(const Eigen::VectorXd &vec1, const Eigen::VectorXd &vec2) {
    double result = 0.0f;

    return result;
}

int main() {
    const size_t dimension = 1000;
    Eigen::VectorXd vec1 = Eigen::VectorXd::Random(dimension);
    Eigen::VectorXd vec2 = Eigen::VectorXd::Random(dimension);


    std::cout << "My dot1 : " << dot1(vec1, vec2) << std::endl;
    std::cout << "Eignen dot : " << vec1.dot(vec2) << std::endl;

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
