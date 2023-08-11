#include <bits/stdc++.h>
using namespace std;
void func(int a) noexcept(false)
{
    if (a == 0)
        throw 1;
    else
        throw "fuck";
}
int main()
{
    try
    {
        func(1);
    }
    catch (int a)
    {
        cout << a << endl;
    }
    catch(const char* b)
    {
        cerr<<b<<endl;
    }
    return 0;
}