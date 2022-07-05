#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(1);
    s.insert(8);
    s.insert(3);
    s.insert(3);
    s.insert(-5);
    s.insert(2);
    for(auto i : s)
    {
        cout<<i<<" ";
    }
    int k;
    cin>>k;
    if(s.find(k)==s.end())
    {
        cout<<"Key not found"<<endl;
    }
    else
    {
        cout<<"Key found"<<endl;
    }
    return 0;
}