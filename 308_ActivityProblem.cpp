#include <bits/stdc++.h>
using namespace std;
void SelectActivities(vector<int> s,vector<int> f)
{
    vector<pair<int,int>> ans;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
    for(int i=0;i< s.size();i++)
    {
        p.push(make_pair(f[i],s[i]));
    }
    auto q=p.top();
    p.pop();
    int start=q.second;
    int end=q.first;
    ans.push_back(make_pair(start,end));
    while(!p.empty())
    {
        auto w=p.top();
        p.pop();
        if(w.second >= end)
        {
            start=w.second;
            end=w.first;
            ans.push_back(make_pair(start,end));
        }
    }
    for(auto i : ans)
    {
        cout<<i.first<<" - "<<i.second<<endl;
    }
}
int main()
{
    vector<int>s = {1, 3, 0, 5, 8, 5};
    vector<int>f = {2, 4, 6, 7, 9, 9};
    SelectActivities(s,f);
    return 0;
}