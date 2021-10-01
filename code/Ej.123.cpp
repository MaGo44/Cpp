#include <iostream>
/**
  *Capítulo 2 Ejercicio 123
  *Determinar la suma de la serie 1+2+4+8+16+...+2^n para cualquier valor entero positivo en n.
* */

//@MaGo44
//@27 Sep 2021
using namespace std;

int main()
{
    int n, i=1, sum=0;
    cout << "Ingrese el numero de valores de la serie\n";
    cin >> n;
    while (i <= n) 
    {
        cout << 2*i<< ", ";
        sum += 2*i;
        i++;
    }
    cout << "\nLa sumatoria es: "<< sum;
}
