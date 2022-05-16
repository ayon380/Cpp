#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
int arr[MAX];
void prime(int n)
{
    arr[1]=1;
    for(int i=2; i<=n; i++)
    {
        arr[i]=i;
    }
    for(int i=4;i<=n;i+=2)
    {
        arr[i]=2;
    }
    for(int i=3;i*i<=n;i++)
    {
        if(arr[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(arr[j]==j)
                {
                    arr[j]=i;
                }
            }
        }
    }
}
vector<int>  vec(int n)
{
    vector<int> v1;
    while(n!=1){
        v1.push_back(arr[n]);
        n/=arr[n];
    }
    return v1;
}
int main()
{
    int n=12246;
    prime(n);
    vector<int> v1=vec(n);
    for(auto i: v1)
    {
        cout<<i<<" ";
    }
    return 0;
}