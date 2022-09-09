#include<iostream>
#include<cmath>
#include<time.h>
using namespace std;
bool isprime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    time_t begin, end;
    int n,count=2;
    cin>>n;
    time(&begin);
    int i=1;
    cout<<2<<endl<<3<<endl;
    while(i<7 && count<n)
    {
        int a,b;
        a=(6*i)+1;
        b=(6*i)-1;
        if(isprime(b)==1)
        {
            cout<<b<<endl;
            count++;
        }
        if(count>=n)
        {
            break;
        }
        if(isprime(a)==1)
        {
            cout<<a<<endl;
            count++;
        }
        i++;
    }
    int j=1;
    while(count<n)
    {
        int number=(j*j)+j+41;
        cout<<number<<endl;
        count++;
        j++;
    }
    time(&end);
    time_t elapsed = end - begin;
    cout<<"Time:"<<elapsed<<endl;
    return 0;
}