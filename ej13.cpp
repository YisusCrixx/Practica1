#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num,count=1;
    cout<<"Escribe un numero:";
    cin>>num;
    cout<<"Los divisores de "<<num<<" son:"<<endl;
    while(count<=num){
        if(num%count==0)cout<<count<<endl;
        count++;
    }
    return 0;
}
