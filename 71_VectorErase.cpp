#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,a;
    vector<int>v1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    int q,w,e;
    cin>>q;
    cin>>w>>e;
    q-=1;
    w-=1;
    e-=1;
    v1.erase(v1.begin()+q);
    v1.erase(v1.begin()+w,v1.begin()+e);
    cout<<v1.size()<<endl;
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    return 0;
}