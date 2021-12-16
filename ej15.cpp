#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    bool aux=false;
    int num,sum=0;
    while(aux==false){
        cout<<"Esbribe un numero:";
        cin>>num;
        sum=sum+num;
        if(num==0)aux=true;
    }
    cout<<"El resultado de la sumatoria es:"<<sum<<endl;
}
