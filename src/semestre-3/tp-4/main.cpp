#include "rectangle.h"
#include "square.h"

#include <vector>
#include <iostream>

int main() {
    std::vector<Rectangle*> rects;

    {
        rects.push_back(new Rectangle(1, 3));
        rects.push_back(new Square(3));
    }

    for (const auto& el : rects) {
        std::cout << el->whoAmI() << std::endl;
    }

    return 0;
}
