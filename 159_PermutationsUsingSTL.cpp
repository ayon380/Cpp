#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    vector<int> v1(n);
    vector<vector<int> > v2;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element in  the index :"<<i<<endl;
        cin>>v1[i];
    }
    sort(v1.begin(),v1.end());
    do
    {
        v2.push_back(v1);
    }while(next_permutation(v1.begin(),v1.end()));
    for(auto i : v2)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}