#include <iostream>
/**
  *Capítulo 2 Ejercicio 125
  *Calcular la suma de 120 términos en una serie aritmética. Usar la fórmula S=1/2n(n+1). En este problema n=120.
* */

//@MaGo44
//@27 Sep 2021

using namespace std;

int main()
{   
    int i = 1, n = 120;
    float  sum=0;
    while (i < n) 
    {
        sum += 1 / (2 * i)*(i + 1);
        i++;
    }
    cout << "\n Sumatoria: "<<sum;
}
