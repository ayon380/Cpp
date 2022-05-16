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
    sort(v1.begin(),v1.end());
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    return 0;
}