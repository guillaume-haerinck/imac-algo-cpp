#pragma once

#include <algorithm>

class VectorD {
public:
    VectorD(const size_t size);
    VectorD(const VectorD& vec);
    ~VectorD();

    unsigned int getSize() const { return m_size; }
    unsigned int* getData() const { return m_data; }

private:
    size_t m_size;
    unsigned int* m_data;
};

