#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1,num2,count=1,aux=0;
    cout << "Escribe un numero:";
    cin>>num1;
    cout << "Escribe un numero:";
    cin>>num2;
    if (num1<num2)count=num1+1;
    else count=num2+1;
    while(count<=num1*num2){
        if(count%num1==0 && count%num2==0){
            aux=count;
            count=num1*num2;
        }
        count++;
    }
    cout<<"El MCM entre "<<num1<<" y "<<num2<<" es:"<<aux<<endl;
    return 0;
}
