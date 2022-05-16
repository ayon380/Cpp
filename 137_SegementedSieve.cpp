#include <bits/stdc++.h>
using namespace std;
void sieve(int x, int y)
{
    bool prime[y + 1] = {false};
    for (int i = 2; i <= y; i++)
    {
        if (!prime[i])
        {
            for (int j = i * i; j <= y; j += i)
            {
                prime[j] = true;
            }
        }
    }
    for (int i = x; i <= y; i++)
    {
        if (!prime[i])
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int x, y;
    cout << "Enter the range : ";
    cin >> x >> y;
    sieve(x, y);
    return 0;
}