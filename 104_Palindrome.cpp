#include <iostream>
using namespace std;
int main()
{
    int num ,d,r=0,a;
    cout<<"Enter the number  : ";
    cin>>num;
    a=num;
    while(num>0)
    {
        d=num%10;
        r=r*10+d;
        num/=10;
    }
    if(a==r)
    {
        cout<<"Palindrome no";
    }
    else
    {
        cout<<"Not a  Palindrome no";
    }
    return 0;
}