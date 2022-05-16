#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void permute(vector<int> v,int id)
{
    if(id==v.size())
    {
        ans.push_back(v);
        return;
    }
    for(int i=id;i<v.size();i++)
    {
        swap(v[i],v[id]);
        permute(v,id+1);
        swap(v[i],v[id]);
    }
}
int main()
{
    int n;
    cout<<"Enter the no of elements in the vector."<<endl;
    cin>>n;
    vector<int> v1(n);
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the element at index "<<i<<" : ";
        cin>>v1[i];
    }
    permute(v1,0);
    for( auto i: ans)
    {
        for(auto j : i)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}