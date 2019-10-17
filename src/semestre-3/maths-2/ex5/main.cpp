#include <Eigen/Dense>
#include <iostream>

Eigen::MatrixXd StrassenMultiply(const Eigen::MatrixXd& A, const Eigen::MatrixXd& B) {
    if (A.rows() > 128) {
        return A * B;
    }

    unsigned int rows = A.rows() / 2;
    unsigned int cols = A.cols() / 2;

    auto a = A.topLeftCorner(rows, cols);
    auto b = A.topRightCorner(rows, cols);
    auto c = A.bottomLeftCorner(rows, cols);
    auto d = A.bottomRightCorner(rows, cols);
    auto e = B.topLeftCorner(rows, cols);
    auto f = B.topRightCorner(rows, cols);
    auto g = B.bottomLeftCorner(rows, cols);
    auto h = B.bottomRightCorner(rows, cols);

    Eigen::MatrixXd P1 = StrassenMultiply(a, f - h);
    Eigen::MatrixXd P2 = StrassenMultiply(a + b, h);
    Eigen::MatrixXd P3 = StrassenMultiply(c + d, e);
    Eigen::MatrixXd P4 = StrassenMultiply(d, g - e);
    Eigen::MatrixXd P5 = StrassenMultiply(a + d, e + h);
    Eigen::MatrixXd P6 = StrassenMultiply(b - d, g + h);
    Eigen::MatrixXd P7 = StrassenMultiply(a - c, e + f);

    Eigen::MatrixXd r = P5 + P4 - P2 + P6;
    Eigen::MatrixXd s = P1 + P2;
    Eigen::MatrixXd t = P3 + P4;
    Eigen::MatrixXd u = P1 + P5 - P3 - P7;

    // TODO return matrix rstu
}

int main(int argc, char const *argv[]) {
    Eigen::MatrixXd A = Eigen::MatrixXd::Random(2, 2);
    Eigen::MatrixXd B = Eigen::MatrixXd::Random(2, 2);

    Eigen::MatrixXd result = StrassenMultiply(A, B);
    std::cout << "Multiplication done !" << std::endl;

    return 0;
}
