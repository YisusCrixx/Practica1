#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num,count=1,mult=1;
    cout<<"Escribe un numero:";
    cin>>num;
    while(count<=10){
        mult=num*count;
        cout<<count<<'*'<<num<<'='<<mult<<endl;
        count++;
    }
    return 0;
}
