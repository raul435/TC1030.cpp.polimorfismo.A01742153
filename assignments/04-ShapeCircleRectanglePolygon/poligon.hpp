#pragma once

#include "Shape.hpp"
class poligon : public Shape
{
private:
    int xp;
    int yp;
    int zp;

public:
    poligon();
    poligon(int, int, int);
    std::string draw() override;    
};