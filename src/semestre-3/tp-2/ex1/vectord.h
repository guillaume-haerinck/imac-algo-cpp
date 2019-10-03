#pragma once

#include <algorithm>

class VectorD {
public:
    VectorD(const size_t size);
    VectorD(const VectorD& vec);
    ~VectorD();

    size_t size() const { return m_size; }
    unsigned int* data() const { return m_data; }
    unsigned int* at(size_t i) { return &m_data[i]; }

    unsigned int dot(unsigned int x, unsigned int y);
    unsigned int norm();

private:
    size_t m_size;
    unsigned int* m_data;
};

