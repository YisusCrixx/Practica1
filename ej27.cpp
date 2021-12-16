#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1,num2;
    char oper;
    cout << "Escribe un numero:";
    cin>>num1;
    cout << "Escribe un numero:";
    cin>>num2;
    cout<<"Escribe la operacion a realizar(+,-,*,/):";
    cin>>oper;
    if(oper=='+')cout<<num1<<'+'<<num2<<':'<<num1+num2<<endl;
    else if(oper=='-')cout<<num1<<'-'<<num2<<':'<<num1-num2<<endl;
    else if(oper=='*')cout<<num1<<'*'<<num2<<':'<<num1*num2<<endl;
    else cout<<num1<<'/'<<num2<<':'<<num1/num2<<endl;
    return 0;
}
