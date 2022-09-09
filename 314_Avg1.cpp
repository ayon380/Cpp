#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s=0;
    for (int i = 0; i < n; i++)
    {
        s=0;
        for (int j = 0; j < i; j++)
        {
            s+=arr[j];
        }
        cout<<s/(i+1)<<" ";
    }
    return 0;
}