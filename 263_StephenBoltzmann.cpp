#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float z;
        cin >> z;
        // float t;
        float a = 0.00521;
        float b = 0.00000072;
        float t = sqrt(a * a - 4 * b * (1 - z));
        t -= a;
        t /= (2 * b);
        cout << t << endl;
    }
    return 0;
}