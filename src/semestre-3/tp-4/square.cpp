#include "square.h"

Square::Square(double size) : Rectangle(size, size)
{
}

Square::~Square()
{
}

void Square::cote(double cote) {
    m_height = cote;
    m_width = cote;
}

double Square::cote() const {
    return m_width;
}
