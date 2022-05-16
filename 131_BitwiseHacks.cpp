#include <bits/stdc++.h>
using namespace std;
void dtob(int n)
{
    int a;
    vector<int> v1;
    while (n > 0)
    {
        a = n % 2;
        v1.push_back(a);
        n /= 2;
    }
    reverse(v1.begin(), v1.end());
    cout << "Binary Value : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i);
    }
    cout << endl;
}
int Bset(int x, int pos)
{
    return (x |= (1 << pos));
}
int unset(int x, int pos)
{
    return (x &= (~(1 << pos)));
}
int toggle(int x, int pos)
{
    return (x ^= (1 << pos));
}
int get(int x, int pos)
{
    return(x&(1 << pos));
}
int main()
{
    // Set a BIT Operation
    cout << "Set a BIT Operation" << endl;
    dtob(100);
    dtob(Bset(100, 3));
    dtob(1 << 3);
    dtob(100 | 8);
    cout << endl;

    // Unset/clear a bit at n'th position
    cout << "Unset bit Operation" << endl;
    dtob(100);
    dtob(unset(7, 1));
    dtob(1 << 3);
    cout << endl;

    // Toggling a bit at n'th position
    cout << "Toggling a bit at n'th position" << endl;
    dtob(4);
    dtob(toggle(4, 1));
    cout<<endl;

    //Checking a bit is set or unset at n'th position
    cout << "Getting a bit at n'th position" << endl;
    dtob(100);
    dtob(get(5,0));

    return 0;
}