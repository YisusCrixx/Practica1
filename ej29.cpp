#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num,bajo=0,alto=100;
    char oper='b';
    while(oper!='='){
        num=bajo+rand()%(alto+1-bajo);
        cout<<num<<endl;
        cout<<"Escribe si el numero es mayor,menor o igual(>,<,=):";
        cin>>oper;
        if(oper=='>')bajo=num+1;
        else if(oper=='<')alto=num;

    }
    cout<<"El numero ha sido encontrado"<<endl;
    return 0;
}
