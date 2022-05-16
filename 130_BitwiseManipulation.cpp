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
int Band(int a,int b)
{
    return (a&b);
}
int Bor(int a, int b)
{
    return (a | b);
}
int Bxor(int a, int b)
{
    return (a^b);
}

int main()
{
    dtob(2);
    dtob(3);
    int a=Band(2,3);
    int b=Bor(2,3);
    int c=Bxor(2,3);
    dtob(a);
    dtob(b);
    cout<<endl;
    dtob(10);
    dtob(10<<1);
    dtob(10>>1);
    cout<<endl;
    dtob(20);
    a=(~20);
    cout<<a;
    return 0;
}