#include <iostream>
/**
  *Capítulo 2 Ejercicio 127
  *Calcular la suma, diferencia, producto y cociente de parejas de números complejos asignados como datos.
* */

//@MaGo44
//@27 Sep 2021
using namespace std;

float r1, r2, i1, i2;
void suma()
{
    float r = r1 + r2;
    float i = i1 + i2;
    cout<<"\nSumatoria: "<<r<<" + "<<i<<"i";
}
void diferencia()
{
    float r = r1 - r2;
    float i = i1 - i2;
    cout << "\nDiferencia: " << r << " + " << i << "i";
}
void multiplicacion()
{
    float a = r1 * r2;
    float b = (r1 * i2)+(i1*r2);
    float c = (i1 * i2)*(-1);
    a = a + c;
    cout << "\nProducto: " << a << " + " << b << "i";
}
void cociente()
{
    float ic1, ic2;
    ic2 = i2 * (-1);
    float a1 = r1 * r2;
    float b1 = (r1 * ic2) + (i1 * r2);
    float c1 = (i1 * ic2) * (-1);
    a1 = a1 + c1;
    float a2 = r2 * r2;
    float b2 = (r2 * ic2) + (i2 * r2);
    float c2 = (i2 * ic2) * (-1);
    a2 = a2 + c2;
    cout << "\nCociente: " << a1 << " + " << b1 << "i / "<<a2;
}
int main()
{
    cout << "Ingrese el primer numero imaginario\n";
    cout << "R1: ";
    cin >> r1;
    cout << "I1: ";
    cin >> i1;
    cout << "\nIngrese el segundo numero imaginario\n";
    cout << "R2: ";
    cin >> r2;
    cout << "I2: ";
    cin >> i2;
    suma();
    diferencia();
    multiplicacion();
    cociente();
}
