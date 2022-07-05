#include <bits/stdc++.h>
using namespace std;
int subarray(int arr[],int n,int k)
{
    int res=0;
    for(int i=0;i<k;i++)
    {
        res+=arr[i];
    }
    int cur=res;
    for(int i=k;i<n;i++)
    {
        cur+=arr[i]-arr[i-k];
        res=max(res,cur);   
    }
    return res;
}
int main()
{
     int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << subarray(arr, n, k);
    return 0;
}