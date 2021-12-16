#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Escribe una cantidad de dinero:";
    cin>>num;
    while(num>=50){
        if(num>=50000){
            count=num/50000;
            num=num%50000;
        }
        cout<<"50000:"<<count<<endl;
        count=0;
        if(num>=20000){
            count=num/20000;
            num=num%20000;
        }
        cout<<"20000:"<<count<<endl;
        count=0;
        if(num>=10000){
            count=num/10000;
            num=num%10000;
        }
        cout<<"10000:"<<count<<endl;
        count=0;
        if(num>=5000){
            count=num/5000;
            num=num%5000;
        }
        cout<<"5000:"<<count<<endl;
        count=0;
        if(num>=2000){
            count=num/2000;
            num=num%2000;
        }
        cout<<"2000:"<<count<<endl;
        count=0;
        if(num>=1000){
            count=num/1000;
            num=num%1000;
        }
        cout<<"1000:"<<count<<endl;
        count=0;
        if(num>=500){
            count=num/500;
            num=num%500;
        }
        cout<<"500:"<<count<<endl;
        count=0;
        if(num>=200){
            count=num/200;
            num=num%200;
        }
        cout<<"200:"<<count<<endl;
        count=0;
        if(num>=100){
            count=num/100;
            num=num%100;
        }
        cout<<"100:"<<count<<endl;
        count=0;
        if(num>=50){
            count=num/50;
            num=num%50;
        }
        cout<<"50:"<<count<<endl;
    }
    cout<<"Faltante:"<<num<<endl;
    return 0;
}
