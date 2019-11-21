#include <Eigen/Dense>
#include <iostream>
#include <chrono.h>

void buildSystem(Eigen::MatrixXd& A, Eigen::VectorXd& b, const unsigned int dim) {
    A = Eigen::MatrixXd::Random(dim, dim);
    A.diagonal() += (dim + 1) * Eigen::VectorXd::Ones(dim);
    
    b = Eigen::VectorXd::Random(dim);
    assert(b.norm() > DBL_EPSILON);
}

Eigen::VectorXd GS(const Eigen::MatrixXd& A, const Eigen::VectorXd& b, const unsigned int nbIter) {
    auto x = b;
    for (size_t iter = 0; iter < nbIter; ++iter) {
        for (size_t i = 0; i < A.rows(); i++) {
            double sum = 0.0;
            for (size_t j = 0; j < A.cols(); j++) {
                if (j != i) {
                    sum += A(i, j) * x(j);
                }
                x(i) = (b(i) - sum) / A(i, i);
            }
        }
    }
    return x;
}

int main(int argc, char const *argv[]) {
    const unsigned int arraySize = 5;
    Eigen::MatrixXd A = Eigen::MatrixXd::Random(arraySize, arraySize);
    Eigen::VectorXd b = Eigen::VectorXd::Random(arraySize);
    buildSystem(A, b, A.size());

    TP_CPP_IMAC2::Chrono chrono;

    // Jacobi
    chrono.start();
    Eigen::VectorXd x = GS(A, b, 28);
    chrono.stop();
    std::cout << "Jacobi : " << chrono.timeSpan() << std::endl;

    // Lu
    chrono.start();
    Eigen::PartialPivLU<Eigen::MatrixXd> lu(A);
    x = A * lu.solve(b);
    chrono.stop();
    std::cout << "Lu : " << chrono.timeSpan() << std::endl;

    // QR
    chrono.start();
    Eigen::ColPivHouseholderQR<Eigen::MatrixXd> qr(A);
    x = A * qr.solve(b);
    chrono.stop();
    std::cout << "QR : " << chrono.timeSpan() << std::endl;

    // SVD
    chrono.start();
    Eigen::JacobiSVD<Eigen::MatrixXd> svd(A, Eigen::ComputeThinU | Eigen::ComputeThinV);
    x = A * svd.solve(b);
    chrono.stop();
    std::cout << "SVD : " << chrono.timeSpan() << std::endl;

    return 0;
}

