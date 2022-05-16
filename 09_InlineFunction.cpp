#include <iostream>
using namespace std;
inline int product(int a ,int b)
{
    return (a*b);
}
int stat(int a ,int b)
{
    static int c=0;//This executes only once 
    c+=1;//Next time the function runs , the value is retained 
    return a*b+c;
}
int money(int current, float factor=1.08)
{
    return (current*factor);
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b : "<<endl;
    cin>>a>>b;
    cout<<product(a,b)<<endl;
    cout<<stat(a,b)<<endl;
    cout<<stat(a,b)<<endl;
    cout<<stat(a,b)<<endl;
    cout<<stat(a,b)<<endl;
    cout<<stat(a,b)<<endl;
    //default arguments
    int m=10000;
    cout<<money(m)<<endl<<money(m,1.06);
    return 0;
}