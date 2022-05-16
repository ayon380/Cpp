#include <bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    bool prime[n + 1]={false};
    for(int i=2; i<=n; i++)
    {
        if(!prime[i])
        {
            for(int j=i*i; j<=n; j+=i)
            {
                prime[j]=true;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(!prime[i])
        {
            cout << i<<" ";
        }
    }
}
int main()
{
    sieve(100);
    return 0;
}