#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1,num2,count=1,sum=0,pot;
    cout<<"Escribe un numero:";
    cin>>num1;
    while(num1!=0){
        num2=num1%10;
        num1=num1/10;
        pot=num2;
        while(count<num2){
            pot=num2*pot;
            count++;
        }
        sum=sum+pot;
        count=1;
    }
    cout<<"El resultado de la suma es:"<<sum<<endl;
    return 0;
}
