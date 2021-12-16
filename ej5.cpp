#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double num1,num2;
    cout<<"Escribe un numero:";
    cin>>num1;
    cout<<"Escribe un numero:";
    cin>>num2;
    cout<<num1<<'/'<<num2<<':'<<rint(num1/num2)<<endl; // rint() aproxima el resultado

    return 0;
}
