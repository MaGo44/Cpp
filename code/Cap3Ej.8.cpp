#include <iostream>
/**
  *Capítulo 3 Ejercicio 8
  *Encontrar el área de cualquier rectángulo con la fórmula Area=lw, donde l es la longitud y w es el ancho.
* */

//@MaGo44
//@27 Sep 2021

using namespace std;
int main()
{
    float l, w, Area;
    cout << "Introduzca longitud y ancho\n";
    cout << "L: ";
    cin >> l;
    cout << "\nA: ";
    cin >> w;
    Area = l * w;
    cout << "Area: " << Area;
}

