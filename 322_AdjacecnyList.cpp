// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> arr[n];
  int q;
  cin>>q;
  for(int i=0;i<q;i++)
  {
      int x,y;
      cin>>x>>y;
      arr[x].push_back(y);
      arr[y].push_back(x);
  }
  for(int i=0;i<n;i++)
  {
      cout<<"Adjacency list of vertex "<<i<<endl;
      cout<<"head ";
      for(auto j : arr[i])
      {
          cout<<"-> "<<j;
      }
      cout<<endl;
  }
}