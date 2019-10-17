#include "rectangle.h"

class Square : public Rectangle {
public:
    Square() = default;
    Square(double size);
    ~Square();

    ///////////////////////////////////////////////
    ////////////// GETTERS & SETTERS  /////////////
    ///////////////////////////////////////////////

    void width(double width) = delete;
    void height(double height) = delete;

    void cote(double cote);
    double cote() const;

    virtual std::string whoAmI() { return std::string("Square"); }
};

