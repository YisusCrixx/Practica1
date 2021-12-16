#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    bool aux=false;
    int num,sum=0,may=0;
    while(aux==false){
        cout<<"Esbribe un numero:";
        cin>>num;
        if(num>may)may=num;
        if(num==0)aux=true;
    }
    cout<<"El numero mayor fue:"<<may<<endl;
    return 0;
}
