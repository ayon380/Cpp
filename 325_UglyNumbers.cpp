#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> s;
    s.insert(1);
    n--;
    while (n)
    {
        int a=*(s.begin());
        s.erase(a);
        s.insert(2*a);
        s.insert(3*a);
        s.insert(5*a);
        n--;
    }
    cout<<*s.begin();
    return 0;
}