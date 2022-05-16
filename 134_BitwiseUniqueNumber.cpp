#include <bits/stdc++.h>
using namespace std;
int unique_2(int arr[], int n)
{
    
}
int unique(int arr[], int n)
{
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        a ^= arr[i];
    }
    return a;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 2, 3, 4};
    cout << unique(arr, 7);
    return 0;
}