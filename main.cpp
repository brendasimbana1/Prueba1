/*Prueba 1
 * Nombre: Brenda Damaris Simbaña Gualavisí
 * Cédula: 1750568188
 * Correo: bsimbanag1@est.ups.edu.ec
 * Fecha: 24 de noviembre de 2022
 * */
#include <iostream>
#include "linea.h"

using namespace std;
int Linea::num_lineas = 0;

int main()
{
    cout << "\t---Prueba Parcial 1 ---" << endl;
    cout << "Brenda Simbaña G.\n" << endl;
    Punto p1(-7, 4);
    Punto p2(2, 9);
    cout << p1.toString()<< endl;
    cout << p2.toString()<< endl << endl;
    Linea l(&p1, &p2);
    cout << l.toString() << endl;
    return 0;
}
