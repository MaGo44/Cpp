#include <iostream>
/**
  *Capítulo 3 Ejercicio 5
  *Introducir las medidas del ángulo de dos angulos interiores opuestos en un triángulo. Determinar la medida de uno de los ángulos externos.
* */

//@MaGo44
//@27 Sep 2021

using namespace std;
int main()
{
    float a1, a2, a3,e;
    cout << "Ingrese las medidas de dos angulos internos opuestos\n";
    cout << "M1: ";
    cin >> a1;
    cout << "\nM2: ";
    cin >> a2;
    a3 = 180 - a1 - a2;
    e = 360 - a3;
    cout << "Angulo externo de c: " << e;
}

