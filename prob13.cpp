#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,suma=1,aux=1;
    cout << "Escriba un numero impar:";
    cin >> n;
    if (n%2==1){
        for (int fila=2;fila<n;fila+=2) {
            int count=1;
            while (count<=4){
                aux+=fila;
                suma+=aux;
                count++;
            }
        }
        cout << "En una matriz de " << n << "*" << n << " la suma de las diagonales es:" << suma << endl;
    }

    else {
        cout << "El numero ingresado no es par" << endl;
    }
    return 0;
}
