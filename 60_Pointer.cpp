#include <iostream>
using namespace std;
void sum(int* a,int* b)
{
    int c=*a;
    *a+=*b;
    *b-=c;
    if(*b<0)
    {
        *b*=(-1);
    }
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    sum(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}