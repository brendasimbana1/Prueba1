#include "punto.h"

int Punto::getX()
{
    return x;
}

int Punto::getY()
{
    return y;
}

string Punto::toString()
{
    return "P (" + to_string(x) + ", " + to_string(y) + ")";
}

Punto::Punto(): x(0),
y(0)
{

}

Punto::Punto(int x, int y) : x(x),
    y(y)
{}
