#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    bool aux=false;
    int num,count1=1,count2=0,div,num1=0;
    cout<<"Escribe un numero:";
    cin>>num;
    while(aux==false){
        div=1;
        count2=0;
        num1=(count1*(count1+1))/2;
        while(div<=num1){
            if(num1%div==0)count2++;
            div++;
        }
        if(count2>num)aux=true;
        count1++;
    }
    cout<<"El numero es:"<<num1<<" que tiene "<<count2<<" divisores"<<endl;
    return 0;
}
