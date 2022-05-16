#include <bits/stdc++.h>
using namespace std;
int reverse(string s)
{
    if (s.length() == 0)
    {
        return 0;
    }
    else
    {
        string a = s.substr(1);
        reverse(a);
        cout << s[0] << endl;
    }
}
int main()
{
    string a;
    cin >> a;
    reverse(a);
    return 0;
}