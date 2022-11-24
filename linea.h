#ifndef LINEA_H
#define LINEA_H
#include <punto.h>

class Linea
{
private:
    float d;
    float m;
    Punto *p1;
    Punto *p2;
public:
    static int num_lineas;
    Linea();
    Linea(Punto *p1, Punto *p2);
    float getD();
    string toString();
    Punto *getP1();
    Punto *getP2();
    float getM();
};

#endif // LINEA_H
