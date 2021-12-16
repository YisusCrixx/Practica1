#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1,num2,count=0;
    cout << "Escribe un numero:";
    cin>>num1;
    num2=num1;
    while(num1!=0){
        num1=num1/10;
        count++;
    }
    cout<<"El numero "<<num2<<" tiene "<<count<<" digitos"<<endl;
    return 0;
}
