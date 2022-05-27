#include "poligon.hpp"

poligon::poligon() {
    xp = 0;
    yp = 0;
    zp = 0;
}

poligon::poligon(int valxp, int valyp, int valzp)
{
    xp = valxp;
    yp = valyp;
    zp = valzp;
}

std::string poligon::draw() 
{
    return "soy un poligono";
}