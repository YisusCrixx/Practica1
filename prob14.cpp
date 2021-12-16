#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num,count1=2,count2,copi1=0,copi2=0,aux;
    cout<<"Escribe un numero:";
    cin>>num;
    cout<<1<<':'<<1<<endl;
    while(count1<=num){
        aux=count1;
        count2=1;
        cout<<aux<<':'<<aux<<',';
        while(aux>1){
            if(aux%2==0)aux=aux/2;
            else aux=(3*aux)+1;
            if (aux==1)cout<<aux;
            else cout<<aux<<',';
            count2++;
        }
        cout<<endl;
        if(count2>=copi1){
            copi2=count1;
            copi1=count2;
        }
        count1++;
    }
    cout<<endl;
    cout<<"La serie mas larga es con la semilla: "<<copi2<<" teniendo "<<copi1<<" terminos"<<endl;
    return 0;
}
