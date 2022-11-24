#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Punto
{
private:
    int x;
    int y;
public:
    Punto();
    Punto(int x, int y);
    int getX();
    int getY();
    string toString();
};

#endif // PUNTO_H
