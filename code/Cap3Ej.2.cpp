#include <iostream>
/**
  *Capítulo 3 Ejercicio 2
  *Dada una medida angular mayor de 0 grados pero menor que 180 grados, clasificar el angulo como obtuso, recto o agudo.
* */

//@MaGo44
//@27 Sep 2021

using namespace std;
float m;
int main()
{
    cout << "De una medida angular entre 0 y 180\n";
    cin >> m;
    if (m < 90) 
    {
        cout << "Angulo agudo";
    }
    else if (m == 90) 
    {
        cout << "Angulo recto";
    }
    else 
    {
        cout << "Angulo obtuso";
    }
}

