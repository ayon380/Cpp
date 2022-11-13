// You are using GCC
#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> a ,pair<int,int> b)
{
    return (a.second>b.second);
}
int main()
{
    int n,q;
    cin>>n>>q;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        pair<int,int> a;
        cin>>a.first;
        a.second=0;
        v.push_back(a);
    }
   vector<pair<int,int>> :: iterator r=v.begin();
   for(;r!=v.end();r++)
    {
        int e;
        cin>>e;
        (*r).second=e;
    }
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<q;i++)
    {
        int w,t=0;
        cin>>w;
        for(int i=0;i<w;i++)
        {
            t+=v[i].first;
        }
        cout<<t<<endl;
    }
}