#include <iostream>
/**
  *Capítulo 3 Ejercicio 9
  *Encontrar el tercer lado de un triángulo rectángulo mediante el teorema de Pitágoras.
* */

//@MaGo44
//@27 Sep 2021

using namespace std;
int main()
{
    double h, c1, c2;
    cout << "Introduzca hipotenusa: ";
    cin >> h;
    cout << "\nIntroduzca primer cateto: ";
    cin >> c1;
    c2 = pow(h, 2) - pow(c1, 2);
    c2 = pow(c2, 0.5);
    cout << "\nSegundo cateto: "<<c2;
}
