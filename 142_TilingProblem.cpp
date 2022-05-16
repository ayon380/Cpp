#include <bits/stdc++.h>
using namespace std;
int tiling(int n)
{
    if(n<=2)
    {
        return n;
    }
    else
    {
        return tiling(n-1)+tiling(n-2);
    }
}
int main()
{
    cout<<tiling(4)<<endl;
    return 0;
}