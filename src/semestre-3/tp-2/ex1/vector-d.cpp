#include "vector-d.h"

#include <iostream>
#include <ostream>
#include <cmath>
#include <fstream>
#include <sstream>
#include <algorithm>

/***** CONSTRUCTORS & DESTRUCTOR *****/

VectorD::VectorD(const size_t size) : m_size(size) {
	m_data = new double[m_size];
	if (!m_data) {
		std::cerr << "ERRORRRRR" << std::endl;
		exit(1);
	}
}

VectorD::VectorD(VectorD const& src) : VectorD(src.m_size) {
	std::copy(src.m_data, src.m_data + src.m_size, m_data);
}

VectorD::~VectorD() {
	delete[] m_data;
}



/***** OPERATORS *****/

VectorD& VectorD::operator=(VectorD const& src) {
	if(this != &src) {
		if(m_size == src.m_size) {
			std::copy(src.m_data, src.m_data + src.m_size, m_data);
		}
		else {
			std::cerr << "PAS LA BONNE TAILLE" << std::endl;
			exit(EXIT_FAILURE);
		}
	}

	return *this;
}

VectorD VectorD::operator+(VectorD const& vec) const {
    if (m_size != vec.m_size) { 
        return *this;
    }

	VectorD res(m_size);
    std::transform(m_data, m_data + m_size, vec.m_data, res.m_data, std::plus<double>());
    return res;
}


double& VectorD::operator[](const size_t i) {
	return m_data[i];
}

const double& VectorD::operator[](const size_t i) const {
	return m_data[i];
}

std::ostream& operator<< (std::ostream& stream, const VectorD &vec) {
    if (vec.m_size == 0) return stream;

    stream << "(";
    for (size_t i = 0; i < vec.size() - 1; ++i) {
        stream << vec[i] << ", ";
    }
    stream << vec[vec.size() - 1] << ")";
}

/***** CLASSIC METHODS *****/

size_t VectorD::size() const {
	return m_size;
}

double* VectorD::data() const {
	return m_data;
}

void VectorD::print() const {
	for(size_t i(0); i < m_size; ++i) {
		std::cout << m_data[i] << std::endl;
	}
}



/***** NORMALIZE *****/

double VectorD::dot(VectorD const& vec) const {
	double dotResult = 0.;

	for(size_t i(0); i < m_size; ++i) {
		dotResult += m_data[i]*vec.m_data[i];
	}

	return dotResult;
}

double VectorD::norm() const {
	return std::sqrt(this->dot(*this));
}

void VectorD::normalize() {
	double myNorm = norm();

	for(size_t i(0); i < m_size; ++i) {
		m_data[i] /= myNorm;
	}
}

void VectorD::save(const char* filepath) {
    std::ofstream file;
    file.open(filepath);
    for (size_t i = 0; i < m_size; ++i) {
        file << m_data[i] << " ";
    }
    file.close();
}
