#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    bool aux=true;
    int num1,num2,num3,count1=0,sum=0;
    cout<<"Escribe un numero:";
    cin>>num1;
    cout<<"Escribe un numero:";
    cin>>num2;
    cout<<"Escribe un numero:";
    cin>>num3;
    for(int i=1;i*num1<num3;i++){
        count1=i*num1;
        if((i+1)*num1<num3)cout<<count1<<'+';
        else cout<<count1;
        sum=sum+count1;
    }
    count1=0;
    for(int i=1;i*num2<num3;i++){
        count1=i*num2;
        for(int j=1;j*num1<num3;j++){
            if(count1==j*num1)aux=false;
         }
        if(aux==true){
            cout<<'+'<<count1;
            sum=sum+count1;
        }
        aux=true;
    }
cout<<'='<<sum<<endl;
    return 0;
}
