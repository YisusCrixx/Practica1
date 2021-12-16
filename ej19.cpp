#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num,count=1,prim=0;
    cout<<"Escribe un numero:";
    cin>>num;
    while(count<=num){
        if(num%count==0)prim++;
        count++;
    }
    if(prim==2)cout<<num<<" es un numero primo"<<endl;
    else cout<<num<<" no es un numero primo"<<endl;
    return 0;
}
