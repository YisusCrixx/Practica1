#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num,sum=0,count=1;
    cout<<"Escribe un numero:";
    cin>>num;
    while(count<=num){
        sum=sum+count;
        count++;
    }
    cout<<"La sumatoria desde 0 hasta "<<num<<" es:"<<sum<<endl;
    return 0;
}
