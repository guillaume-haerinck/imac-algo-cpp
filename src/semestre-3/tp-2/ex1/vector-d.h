#pragma once

#include <ostream>

class VectorD {
	public:
		VectorD(const size_t size = 1);
		VectorD(VectorD const& src);
		~VectorD();

		// OPERATORS
		VectorD& operator=(VectorD const& src);
		VectorD operator+(VectorD const& vec) const;

		double& operator[](const size_t i); // Setter
		const double& operator[](const size_t i) const; // Getter

		friend std::ostream& operator<< (std::ostream& stream, const VectorD &vec);

		// CLASSIC METHODS
		size_t size() const;
		double* data() const;
		void print() const;

		// NORMALIZE
		double dot(VectorD const& vec) const;
		double norm() const;
		void normalize();

		// FILE STREAM
		void writeInFile() const;
		void resetFile() const;
		void readVector(const int index);

	protected:
		size_t m_size;
		double* m_data;
};
