// You are using GCC
  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {
      int t;
      cin>>t;
      while(t--)
      {
          int n;
          cin>>n;
          int arr[n];
          for(int i=0;i<n;i++)
          {
              cin>>arr[i];
          }
          sort(arr,arr+n,greater<int>());
          int s=0;
          for(int i=0;i<n;i++)
          {
              if(i%4<2)
              {
                  s+=arr[i];
              }
          }
          cout<<s<<endl;
      }
  }