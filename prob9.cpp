#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    bool aux1=false,aux2;
    int num1,count1=1,num2=0,count2;
    cout<<"Escribe un numero:";
    cin>>num1;
    while(aux1==false){
        num2=num1*count1;
        aux2=false;
        count2=1;
        while(count2<=num1){
            if(num2%count2!=0)aux2=true;
            count2++;
        }
        count1++;
        if(aux2==false)aux1=true;

    }
    cout<<"El minimo comun multiplo es:"<<num2<<endl;
    return 0;
}
