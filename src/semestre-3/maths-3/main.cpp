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
            double sum = 0.0;
            for (size_t j = 0; j < A.cols(); j++) {
                if (j != i) {
                    sum += A(i, j) * x(j);
                }
                x(i) = (b(i) - sum) / A(i, i);
            }
        }

        std::cout << "iter : " << static_cast<unsigned int>(iter) << " : " << (A * x - b).norm() << std::endl;
    }
    return x;
}

int main(int argc, char const *argv[]) {
    Eigen::MatrixXd A = Eigen::MatrixXd::Random(5, 5);
    Eigen::VectorXd b = Eigen::VectorXd::Random(5);

    buildSystem(A, b, A.size());
    Eigen::VectorXd x = GS(A, b, 16);

    return 0;
}
