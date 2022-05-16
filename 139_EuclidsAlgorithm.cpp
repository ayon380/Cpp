#include <bits/stdc++.h>
using namespace std;
int hcf(int a, int b)
{
    while (b != 0)
    {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int main()
{
    cout << hcf(4, 18);
    return 0;
}