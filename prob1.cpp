#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    bool aux=true;
    char carac;
    cout<<"Escribe un caracter:";
    cin>>carac;
    switch (carac) {
        case 'a':cout<< carac<<" es una vocal"<<endl;
        aux=false;
        break;
        case 'e':cout<< carac<<" es una vocal"<<endl;
        aux=false;
        break;
        case 'i':cout<< carac<<" es una vocal"<<endl;
        aux=false;
        break;
        case 'o':cout<< carac<<" es una vocal"<<endl;
        aux=false;
        break;
        case 'u':cout<< carac<<" es una vocal"<<endl;
        aux=false;
        break;
        case 'A':cout<< carac<<" es una vocal"<<endl;
        aux=false;
        break;
        case 'E':cout<< carac<<" es una vocal"<<endl;
        aux=false;
        break;
        case 'I':cout<< carac<<" es una vocal"<<endl;
        aux=false;
        break;
        case 'O':cout<< carac<<" es una vocal"<<endl;
        aux=false;
        break;
        case 'U':cout<< carac<<" es una vocal"<<endl;
        aux=false;
        break;
    }
    if(aux==true){
        if(carac>65 && carac<=90)cout<<carac<<" es una consonante"<<endl;
        else if(carac>97 && carac<=120)cout<<carac<<" es una consonante"<<endl;
        else cout<<"No es una letra"<<endl;
    }
    return 0;
}
