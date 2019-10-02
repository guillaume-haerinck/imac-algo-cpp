#include "vectord.h"

VectorD::VectorD(const size_t size) : m_size(size) {
    m_data = new unsigned int[size];
}

VectorD::VectorD(const VectorD& vec) {
    m_size = vec.getSize();
    m_data = new unsigned int[vec.getSize()];
    for (size_t i = 0; i < vec.getSize(); i++) {
        m_data[i] = vec.getData()[i];
    }
}

VectorD::~VectorD() {
    delete[] m_data;
}
