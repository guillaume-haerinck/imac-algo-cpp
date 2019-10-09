#include "vectord.h"

#include "math.h"

VectorD::VectorD(const size_t size) : m_size(size) {
    m_data = new unsigned int[size];
}

VectorD::VectorD(const VectorD& vec) : m_size(vec.size()) {
    std::copy(vec.data(), vec.data() + vec.size(), m_data);
}

VectorD::~VectorD() {
    delete[] m_data;
}

unsigned int VectorD::dot(unsigned int x, unsigned int y) {
    return sqrt(x * y);
}

unsigned int VectorD::norm() {
    unsigned int norm = 0;
    for (size_t i = 0; i < m_size; i++) {
        norm += dot(m_data[i], m_data[i]);
    }
}
