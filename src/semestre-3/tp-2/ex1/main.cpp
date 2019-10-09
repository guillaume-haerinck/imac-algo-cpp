#include "vector-d.h"

#include <iostream>

int main(int argc, char const *argv[]) {
    VectorD vec1(10);
	VectorD vec2(10);
	VectorD vec3(10);

	for(size_t i(0); i < 10; ++i) {
		vec1[i] = i;
		vec2[i] = 2*i;
	}

    vec1.save("export.txt");

	std::cout << vec1 + vec2 << std::endl;

    

    return 0;
}
