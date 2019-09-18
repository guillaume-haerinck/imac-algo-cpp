#include <iostream>

int maxValue(int* array, int size) {
    int max = array[0];
    for (int i = 0; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

int main(int argc, char const *argv[]) {
    int size = 0;
    std::cin >> size;
    int* array = new int[size];

    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }

    for (int i = 0; i < size; i++) {
        std::cout << array[i] << std::endl;
    }

    // Addresse memoires
    for (int i = 0; i < size; i++) {
        std::cout << &array[i] << std::endl;
    }

    std::cout << "Access elements without []" << std::endl;
    // 1er element
    std::cout << array + 0 << std::endl;
    // 4e element
    std::cout << array + 4 << std::endl;

    std::cout << "Max value : " << maxValue(array, size) << std::endl;

    delete array;
    return 0;
}
