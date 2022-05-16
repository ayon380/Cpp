#include <iostream>
using namespace std;
int sum(int a ,int b)
{
    return (a+b);
}
int product(int a , int b ,int c)
{
    return(a*b*c);
}
int main()
{
    int a=2,b=3,c=6;
    cout<<sum(a,b)<<endl;
    cout<<product(a,b,c);
    return 0;
}