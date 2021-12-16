#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double pi=3.1416,area,perim;
    int num;
    cout<<"Escribe un numero:";
    cin>>num;
    area=pi*(num*num);
    perim=2*pi*num;
    cout<<"perimetro:"<<perim<<endl;
    cout<<"Area:"<<area<<endl;
    return 0;
}
