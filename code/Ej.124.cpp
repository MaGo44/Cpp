#include <iostream>
#include <math.h>
/**
  *Capítulo 2 Ejercicio 124
  *Encontrar la suma de una serie geométrica A+AR+AR^2+...+AR^N-1, para valores de A,R y N.
* */

//@MaGo44
//@27 Sep 2021

using namespace std;

int main()
{
    float a, r,sum=0,v=0;
    int n,i=0;
    cout << "Ingrese el valor para A, R y N\n";
    cout << "A: ";
    cin >> a;
    cout << "\nR: ";
    cin >> r;
    cout << "\nN: ";
    cin >> n;
    while(i<n)
    {
        cout << a * pow(r, i)<< ", ";
        v = a * pow(r, i);
        sum += v;
        i++;
    }
    cout << "\nSumatoria: "<<sum;
}
