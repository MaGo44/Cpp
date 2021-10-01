#include <iostream>
#include <math.h>
/**
  *Capítulo 3 Ejercicio 1
  *Dados los tres lados A,B y C, de un triángulo, encontrar los tres ángulos a,b y c. Suponer que todos los ángulos son agudos.
* */

//@MaGo44
//@27 Sep 2021

using namespace std;
double PI = 3.14159265;
float a, b, c;
void A() 
{
    double Op = ((-1) * (pow(a, 2) - pow(b, 2) - pow(c, 2))) / (2 * b * c);
    double A = acos(Op)*180/PI;
    Op = ((-1) * (pow(b, 2) - pow(a, 2) - pow(c, 2))) / (2 * a * c);
    double B = acos(Op) * 180 / PI;
    Op = ((-1) * (pow(c, 2) - pow(a, 2) - pow(b, 2))) / (2 * a * b);
    double C = acos(Op) * 180 / PI;
    cout << "Angulos: "<<A <<", "<< B <<", "<< C;
}
int main()
{
    cout << "Ingrese los valores para los lados:\n";
    cout << "A:";
    cin >> a;
    cout << "\nB:";
    cin >> b;
    cout << "\nC:";
    cin >> c;
    A();
}

