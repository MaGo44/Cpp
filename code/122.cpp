#include <iostream>
/**
  *Capítulo 2 Ejercicio 122
  *Encontrar la suma de una serie aritmética A+(A+D)+(A+2D)+...+(A+(N-1)D), para valores dados de A, D y N.
* */

//@MaGo44
//@27 Sep 2021

using namespace std;
int main()
{
    float a, d,sum=0,v=0;
    int n, i = 0;
    cout << "Ingrese los valores\n";
    cout << "A: ";
    cin >> a;
    cout << "\nD: ";
    cin >> d;
    cout << "\nN: ";
    cin >> n;
    while(i<n)
    {
        cout << a+(i*d)<<", ";
        v = a + (i * d);
        sum+=v;
        i++;
    }
    cout << "\nSumatoria: "<<sum;
}

