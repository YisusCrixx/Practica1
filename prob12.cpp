#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1=999,num2=999,num=0,palin=0,copia,count=0,aux1=0,aux2=0;
    while(num1>100){
        num=num1*num2;
        copia=num;
        palin=0;
        while(num!=0){
            palin=palin+num%10;
            palin=palin*10;
            num=num/10;
        }
        if(palin/10==copia){
            if(palin/10>count){
                count=palin/10;
                aux1=num1;
                aux2=num2;
            }
        }
        num2--;
        if(num2==100){
            num2=999;
            num1--;
        }
    }
    cout<<aux1<<'*'<<aux2<<'='<<count<<endl;
    return 0;
}
