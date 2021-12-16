#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num,sum=0,prim=2,div=1,count=0;
    cout<<"Escribe un numero:";
    cin>>num;
    while(prim<num){
        while(div<=prim){
            if(prim%div==0)count++;
            div++;
        }
        if(count==2)sum=sum+prim;
        prim++;
        div=1;
        count=0;
    }
    cout<<"El resultado de la suma es:"<<sum<<endl;
    return 0;
}
