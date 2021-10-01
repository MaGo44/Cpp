#include <iostream>
/**
  *Capítulo 2 Ejercicio 126
  *Introducir 30 elementos de un arreglo A. Cambiar posiciones de los siguientes elementos: A(2) y A(16); A(5) y A(25); A(26) y A(12). Imprimir arreglo.
* */

//@MaGo44
//@27 Sep 2021

using namespace std;

int numeros[30];
void llenado() 
{
    for (int i=0;i<30;i++) 
    {
        cin >> numeros[i];
    }
}
void Intercambio()
{
    int b2 = numeros[1];
    int b16 = numeros[15];
    int b5 = numeros[4];
    int b25 = numeros[24];
    int b26 = numeros[25];
    int b12 = numeros[11];
    numeros[1] = b16;
    numeros[15] = b2;
    numeros[4] = b25;
    numeros[24] = b5;
    numeros[11] = b26;
    numeros[25] = b12;
}
int main()
{
    cout << "Ingrese 30 numeros\n";
    llenado();
    Intercambio();

    cout << "\nResultado:";
    cout << "\n[";
    for (int i = 0;i < 30;i++)
    {
        cout << numeros[i]<<" ,";
    }
    cout << "]" << endl;
}