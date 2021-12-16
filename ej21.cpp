#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout<<"Escribe un caracter:";
    char carac;
    cin>>carac;
    if(carac>=65 && carac<=90){
        carac=carac+32;
        cout<<"Letra convertida:"<<carac<<endl;
    }
    else if(carac>=97 && carac<=122) {
        carac=carac-32;
        cout<<"Letra convertida:"<<carac<<endl;
    }
    else cout<<carac<<" No es una letra"<<endl;
    return 0;
}
