#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Escribe un numero:";
    cin>>num1;
    cout<<"Escribe un numero:";
    cin>>num2;
    if(num1>num2){
        cout<<"El mayor es:"<<num1<<endl;
    }
    else{
        cout<<"El mayor es:"<<num2<<endl;
    }
    return 0;
}
