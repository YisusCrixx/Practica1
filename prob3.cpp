#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    bool aux=false;
    int mes,dia;
    cout<<"Escribe el numero de un dia:";
    cin>>dia;
    cout<<"Escribe el numero de un mes:";
    cin>>mes;
    if(mes>12){
        cout<<dia<<'/'<<mes<<" es una fecha invalida"<<endl;
        aux=true;
    }
    else if(dia>31 || dia <=0){
        cout<<dia<<'/'<<mes<<" es una fecha invalida"<<endl;
        aux=true;
    }
    else if(mes==2 && dia==29){
        cout<<mes<<'/'<<dia<<" es valido en bisiesto"<<endl;
        aux=true;
    }
    else if(aux==false){
        switch (mes) {
            case 1:if(dia>0 && dia<32)cout<<dia<<'/'<<mes<<" es una fecha valida"<<endl;
            break;
            case 2:if(dia>0 && dia<29)cout<<dia<<'/'<<mes<<" es una fecha valida"<<endl;
            else cout<<dia<<'/'<<mes<<" es una fecha invalida"<<endl;
            break;
            case 3:if(dia>0 && dia<32)cout<<dia<<'/'<<mes<<" es una fecha valida"<<endl;
            break;
            case 4:if(dia>0 && dia<31)cout<<dia<<'/'<<mes<<" es una fecha valida"<<endl;
            else cout<<dia<<'/'<<mes<<" es una fecha invalida"<<endl;
            break;
            case 5:if(dia>0 && dia<32)cout<<dia<<'/'<<mes<<" es una fecha valida"<<endl;
            break;
            case 6:if(dia>0 && dia<31)cout<<dia<<'/'<<mes<<" es una fecha valida"<<endl;
            else cout<<dia<<'/'<<mes<<" es una fecha invalida"<<endl;
            break;
            case 7:if(dia>0 && dia<32)cout<<dia<<'/'<<mes<<" es una fecha valida"<<endl;
            break;
            case 8:if(dia>0 && dia<32)cout<<dia<<'/'<<mes<<" es una fecha valida"<<endl;
            break;
            case 9:if(dia>0 && dia<31)cout<<dia<<'/'<<mes<<" es una fecha valida"<<endl;
            else cout<<dia<<'/'<<mes<<" es una fecha invalida"<<endl;
            break;
            case 10:if(dia>0 && dia<32)cout<<dia<<'/'<<mes<<" es una fecha valida"<<endl;
            break;
            case 11:if(dia>0 && dia<31)cout<<dia<<'/'<<mes<<" es una fecha valida"<<endl;
            else cout<<dia<<'/'<<mes<<" es una fecha invalida"<<endl;
            break;
            case 12:if(dia>0 && dia<32)cout<<dia<<'/'<<mes<<" es una fecha valida"<<endl;
        }
    }
    return 0;
}
