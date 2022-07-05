#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(int a)
{
    int q = a;
    int d, e;
    while (a > 0)
    {
        d = a % 10;
        e=e*10+ d;
        a /= 10;
    }
    if (q == e)
    {
        return true;
    }
    return false;
}
int number(int arr[], int n, int k)
{
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        res += arr[i];
    }
    int s=0;
    int curr = res;
    // cout<<res<<endl;
    for (int i = k; i < n; i++)
    {
        curr += arr[i] - arr[i - k];
        if (ispalindrome(curr))
        {
            s=curr;
        }
        // cout<<curr<<endl;
    }
    return s;
}
int main()
{
    int arr[] = {2,3,9,8,8,2,1};
    cout << number(arr, 7, 3);
    return 0;
}