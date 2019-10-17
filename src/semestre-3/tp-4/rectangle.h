#pragma once

#include <string>

class Rectangle {
public:
    Rectangle() = default;
    Rectangle(double width, double height);
    ~Rectangle();

    ///////////////////////////////////////////////
    ////////////// GETTERS & SETTERS  /////////////
    ///////////////////////////////////////////////

    const double& width() const { return m_width; }
    void width(double width) { m_width = width; }

    const double& height() const { return m_height; }
    void height(double height) { m_height = height; }

    double surface() const { return m_height * m_width; }

    virtual std::string whoAmI() { return std::string("Rectangle"); }

protected:
    double m_width = 0;
    double m_height = 0;
};


