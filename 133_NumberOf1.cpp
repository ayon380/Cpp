#include <bits/stdc++.h>
using namespace std;
int_fast32_t func(int x)
{
    int c = 0;
    while (x)
    {
        cout << x << " " << c << endl;
        x &= (x - 1);
        c++;
    }
    return c;
}
int main()
{
    cout << func(10);
    return 0;
}