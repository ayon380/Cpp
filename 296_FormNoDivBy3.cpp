#include <bits/stdc++.h>
using namespace std;
int number(int arr[], int n, int k)
{
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        res += arr[i];
    }
    int curr = res;
    for (int i = k; i < n; i++)
    {
        curr += arr[i] - arr[i - k];
        if (curr % 3 == 0)
        {
            res = max(curr, res);
        }
    }
    return res;
}
int main()
{
    int arr[]={3,5,6,2,5,8};
    cout<<number(arr,6,3);
    return 0;
}