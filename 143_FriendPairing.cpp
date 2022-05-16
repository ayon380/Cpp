#include <bits/stdc++.h>
using namespace std;
int friends(int n)
{
    if(n<=2)
    {
        return n;
    }
    // else if(n==2)
    // {
    //     return 3;
    // }
    else
    {
        return friends(n-1) + friends(n-2)*(n-1);
    }
}
int main()
{
    cout<<friends(4)<<endl;
    return 0;
}