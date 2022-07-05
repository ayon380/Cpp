#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(6);
    s.insert(1);
    s.insert(8);
    s.insert(3);
    s.insert(-5);
    s.insert(2);
    for(auto i: s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<*s.upper_bound(3)<<endl;
    cout<<*s.lower_bound(0)<<endl;
    return 0;
}