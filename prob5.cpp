#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1,num2=0,num3=1,count=2,sum1=0,sum2=0;
    cout<<"Escribe un numero:";
    cin>>num1;
    while(count<num1){
        if(num3%2==0)
        {
            sum1=sum1+num3;
            cout<<num3<<endl;
        }
        sum2=num2+num3;
        num2=num3;
        num3=sum2;
        count++;
    }
    cout<<"El resultado de la suma es:"<<sum1<<endl;
    return 0;
}
