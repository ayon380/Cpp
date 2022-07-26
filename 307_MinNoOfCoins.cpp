#include <bits/stdc++.h>
using namespace std;
int main()
{
    int dino[]={1,2,5,10,50,100,500,2000,200};
    int n=9;
    int k ;
    cin>>k;
    sort(dino,dino+n);
    vector<int> ans;
    for(int i=n-1;i>=0;i--)
    {
        while(k>=dino[i])
        {
            k-=dino[i];
            ans.push_back(dino[i]);
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}