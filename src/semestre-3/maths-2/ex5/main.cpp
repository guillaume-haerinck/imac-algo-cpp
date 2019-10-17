#include <Eigen/Dense>
#include <iostream>

Eigen::MatrixXd StrassenMultiply(const Eigen::MatrixXd& A, const Eigen::MatrixXd& B) {
    if (A.rows() > 128) {
        return A * B;
    }

    // TODO recursive algorithm
    
}

int main(int argc, char const *argv[]) {
    Eigen::MatrixXd A = Eigen::MatrixXd::Random(2, 2);
    Eigen::MatrixXd B = Eigen::MatrixXd::Random(2, 2);

    Eigen::MatrixXd result = StrassenMultiply(A, B);
    std::cout << "Multiplication done !" << std::endl;

    return 0;
}
