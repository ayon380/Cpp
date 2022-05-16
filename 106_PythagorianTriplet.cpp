#include <iostream>
using namespace std;
bool check(int a,int b,int c)
{
    c*=c;
    if(c==((a*a) + (b*b)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter the base : ";
    cin>>a;
    cout<<"Enter the height";
    cin>>b;
    cout<<"Enter the hypotenuse : ";
    cin>>c;
    cout<<check(a,b,c);
    return 0;
}