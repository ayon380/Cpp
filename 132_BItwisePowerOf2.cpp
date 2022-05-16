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
bool check(int x)
{
    return (x && (!(x&(x-1))));
}
int main()
{
    cout<<check(8)<<endl;
    dtob(8);
    dtob(7);
    dtob(8&7);
    
    return 0;
}