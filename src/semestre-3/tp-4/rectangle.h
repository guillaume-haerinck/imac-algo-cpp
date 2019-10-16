#pragma once
class Rectangle {
public:
    Rectangle();
    ~Rectangle();

    ///////////////////////////////////////////////
    ////////////// GETTERS & SETTERS  /////////////
    ///////////////////////////////////////////////

    const double& width() const { return m_width; }
    void width(double width) { m_width = width; }

    const double& height() const { return m_height; }
    void height(double height) { m_height = height; }

    double surface() const { return m_height * m_width; }

private:
    double m_width;
    double m_height;
};


