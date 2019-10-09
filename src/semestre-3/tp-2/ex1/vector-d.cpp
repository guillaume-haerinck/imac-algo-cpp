#include "vector-d.h"

#include <iostream>
#include <cmath>
#include <fstream>
#include <sstream>

/***** CONSTRUCTORS & DESTRUCTOR *****/

VectorD::VectorD(const size_t size) : m_size(size) {
	m_data = new double[m_size];
	if(!m_data) {
		std::cerr << "ERRORRRRR" <<std::endl;
		exit(1);
	}

	std::cout << "Construction classique" << std::endl;
}

VectorD::VectorD(VectorD const& src) : VectorD(src.m_size) {
	std::copy(src.m_data, src.m_data + src.m_size, m_data);

	std::cout << "Construction par recopie" << std::endl;
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

VectorD VectorD::operator+(VectorD const& other) const {
	if(m_size != other.m_size) {
		std::cerr << "ERROR: vectors don't have the same size" << std::endl;
		exit(EXIT_FAILURE);
	}

	VectorD result(m_size);

	for(size_t i(0); i < result.m_size; ++i) {
		result[i] = m_data[i] + other.m_data[i]; 
	}
	return result;
}


double& VectorD::operator[](const size_t i) {
	return m_data[i];
}

const double& VectorD::operator[](const size_t i) const {
	return m_data[i];
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


/***** FILE STREAM *****/

void VectorD::writeInFile() const {
	const std::string filePath("data/save.txt");
	std::ofstream fp(filePath, std::ofstream::app); //Opening file with append mode

	if(!fp) exit(EXIT_FAILURE);

	for(size_t i(0); i < m_size; ++i) {
		fp << m_data[i] << " ";
	}
	fp << std::endl;

	fp.close();
}

void VectorD::resetFile() const {
	const std::string filePath("data/save.txt");
	std::ofstream fp(filePath);

	fp.close();
}

void VectorD::readVector(const int index) {
	const std::string filePath("data/save.txt");
	std::ifstream fp(filePath); //Opening file

	if(!fp) exit(EXIT_FAILURE);

	std::string line;
	int currentLine(0);

	while(std::getline(fp, line)) {
		if(currentLine == index) {
			std::stringstream ss(line);
			std::string tmp;
			size_t i(0);

			// Transform elements to double and put them in the vector
			while(ss >> tmp) {
				double element = std::stod(tmp);
				m_data[i] = element;
				++i;
			}
			break;
		}
		else {
			++currentLine;
		}
	}

	fp.close();
}
