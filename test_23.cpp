#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int arr1[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        arr1[arr[i]]++;
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (arr1[i] == 0)
        {
            cout << "Missing Number : " << i << endl;
        }
        else if (arr1[i] > 1)
        {
            cout << "Repeating Number : " << i << endl;
        }
    }
    return 0;
}