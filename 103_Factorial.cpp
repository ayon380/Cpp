#include <iostream>
using namespace std;
int main()
{
    int num,m=1;
    cout<<"Enter the number";
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        m*=i;
    }
    cout<<"The Factorial is : "<<m;
    return 0;
}