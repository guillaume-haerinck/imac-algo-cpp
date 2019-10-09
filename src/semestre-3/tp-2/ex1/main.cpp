#include "vector-d.h"

int main(int argc, char const *argv[]) {
    VectorD vec1(10);
	VectorD vec2(10);
	VectorD vec3(10);

	for(size_t i(0); i < 10; ++i) {
		vec1[i] = i;
		vec2[i] = 2*i;
	}

	vec3 = vec1 + vec2;

	vec1.resetFile();
	vec1.writeInFile();
	vec2.writeInFile();
	vec3.writeInFile();

	VectorD vec4(10);
	VectorD vec5(10);
	VectorD vec6(10);

	vec4.readVector(0);
	vec5.readVector(1);
	vec6.readVector(2);

	vec4.print();
	vec5.print();
	vec6.print();
    
    return 0;
}
