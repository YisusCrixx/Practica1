#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num,count=2,div,prim=0,multi=1,copi;
    cout<<"Escribe un numero:";
    cin>>num;
    copi=0;
    while(count<=num){
        prim=0;
        div=1;
        while(div<=count){
            if(count%div==0)prim++;
            div++;
        }
        if(prim==2){
            multi=1;
            while(count*multi<=num){
                if(count*multi==num)copi=count;
                 multi++;
            }
        }
        count++;
    }
    cout<<"El mayor factor primo de "<<num<<" es:"<<copi<<endl;
    return 0;
}
