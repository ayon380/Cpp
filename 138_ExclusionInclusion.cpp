#include <bits/stdc++.h>
using namespace std;
int64_t hcf(int n,int a,int b)
{
    int n1=n/a;
    int n2=n/b;
    int n3=n/(a*b);
    return n1+n2-n3;
}
int main()
{
    int a ,b,c;
    cin>>a>>b>>c;
    cout<<hcf(a,b,c)<<endl;
    return 0;
}