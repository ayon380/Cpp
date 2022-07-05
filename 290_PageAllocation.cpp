#include <bits/stdc++.h>
using namespace std;
bool possible(int arr[], int m, int n, int mid)
{
    int curr = 0, stn = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if ((curr + arr[i]) > mid)
        {
            curr = arr[i];
            stn++;
            if(stn>m)
            {
                return false;
            }
        }
        else
        {
            curr += arr[i];
        }
    }
    return true;
}
int binary(int arr[], int m, int n)
{
    if (n<m)
    {
        return -1;
    }
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int start = 0, end = sum, res = INT_MAX;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (possible(arr, m,n,mid))
        {
            res=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    cout << binary(arr, m, n) << endl;
    return 0;
}