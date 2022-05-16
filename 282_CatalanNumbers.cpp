#include <bits/stdc++.h>
using namespace std;
unsigned long long int catalan(int n, int k)
{
    unsigned long long int res = 1;
    if (k > n - k)
        k = n - k;
    for(int i=0; i<k; i++)
    {
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
unsigned long long int calculate(int n)
{
    unsigned long long int c = catalan(2 * n, n);
    return c / (n + 1);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout<<calculate(i)<<" "<<endl;
    }
    return 0;
}