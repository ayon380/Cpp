#include <bits/stdc++.h>
using namespace std;
int minsum(int arr[], int n, int k)
{
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        res += arr[i];
    }
    int cur = res;
    for (int i = k; i < n; i++)
    {
        cur += arr[i] - arr[i - k];
        res = min(cur, res);
    }
    return res;
}
int main()
{
    int arr[] = {1,4,45,6,10,19};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<minsum(arr,n,k);
    return 0;
}