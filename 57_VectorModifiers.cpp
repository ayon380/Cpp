#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1,v2;
    for(int i=1;i<6;i++)
    {
        v1.push_back(i);
    }
    v2.assign(10,5);
    for(auto i: v2)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    v2.pop_back();
    v2.insert(v2.begin()+2,55);
    for(auto i: v2)
    {
        cout<<i<<" ";
    }
    v2.erase(v2.begin()+1);
    cout<<"\n";
    for(auto i: v2)
    {
        cout<<i<<" ";
    }
    v2.swap(v1);
    cout<<"\n";
    for(auto i: v2)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    v1.emplace(v1.begin(),5);
    cout<<"\n";
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    return 0;
}