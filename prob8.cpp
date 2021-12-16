#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num,count1=1,count2=2,div=1,prim=0;
    cout<<"Escribe un numero:";
    cin>>num;
    while(count1<=num){
        while(div<=count2){
            if(count2%div==0)prim++;
            div++;
        }
        if(prim==2)count1++;
        count2++;
        div=1;
        prim=0;
    }
    cout<<"El primo numero "<<num<<" es:"<<count2-1<<endl;
    return 0;
}
