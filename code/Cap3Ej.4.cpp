#include <iostream>
/**
  *Capítulo 3 Ejercicio 4
  *Determinar el ángulo entre dos líneas que se intersectan
* */

//@MaGo44
//@27 Sep 2021

using namespace std;
int main()
{
    float p1, p2 ;
    double a,PI= 3.14159265;
    cout << "Ingrese las pendientes\n";
    cout << "P1: ";
    cin >> p1;
    cout << "\nP2: ";
    cin >> p2;
    a = atan((p1 - p2) / (1 + p1 * p2))*180/PI;
    cout << "\nAngulo: " << a;
}

