#include "rectangle.h"

class Square : public Rectangle {
public:
    Square() = default;
    Square(double size);
    ~Square();

    void width(double width) = delete;
    void height(double height) = delete;
};

