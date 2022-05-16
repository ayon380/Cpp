#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number to be checked  : ";
    cin >> num;
    int s=0,a=num;
    while(num>0){
        s+=round(pow(num%10,3));
        num/=10;
    }
    if(s==a)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"Not a Armstrong number";
    }
    return 0;
}