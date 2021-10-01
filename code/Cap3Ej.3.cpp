#include <iostream>
/**
  *Capítulo 3 Ejercicio 3
  *Introducir D, los grados de un ángulo agudo y calcular la medida de su complemento y suplemento.
* */

//@MaGo44
//@27 Sep 2021

using namespace std;
int main()
{
    float a;
    cout << "Ingrese un angulo agudo\n";
    cin >> a;
    cout << "Complementario: " << 90 - a;
    cout << "\nSuplementario: " << 180 - a;
}

