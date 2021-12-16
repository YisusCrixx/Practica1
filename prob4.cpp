#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num,count1=1,fact=1,count2=1;
    float euler=0;
    cout<<"Escribe un numero:";
    cin>>num;
    while(count1<=num){
        count2=1;
        fact=1;
        while(count2<count1){
            fact=fact*count2;
            count2++;
        }
        euler=euler+(1/float(fact));
        count1++;
    }
    cout<<"Euler es aproximadamente:"<<euler<<endl;
    return 0;
}
