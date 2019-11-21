#include <Eigen/Dense>
#include <iostream>

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
            double sum = 0.0f;
            for (size_t j = 0; i < A.cols(); j++) {
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
    Eigen::MatrixXd A = Eigen::MatrixXd::Random(60, 60);
    Eigen::VectorXd b = Eigen::VectorXd::Random(60);

    buildSystem(A, b, A.size());
    Eigen::VectorXd x = GS(A, b, 40);

    auto erreur = (A * x - b).norm();
    std::cout << erreur << std::endl;

    return 0;
}
