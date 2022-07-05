#include <bits/stdc++.h>
using namespace std;
int possible(int arr[], int m, int n, int mid)
{
    int res = 0, c = 1;
    for (int i = 0; i < n; i++)
    {
        res += arr[i];
        if (res > mid)
        {
            res = arr[i];
            c++;
        }
    }
    return c;
}
int painter(int arr[], int m, int n)
{
    int sum = 0;
    int lo = arr[0], hi = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lo)
        {
            lo = arr[i];
        }
    }
    hi = sum;
    cout << lo << " " << hi << endl;
    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (possible(arr, m, n, mid) <= m)
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return lo;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << painter(arr, k, n) << endl;
    return 0;
}