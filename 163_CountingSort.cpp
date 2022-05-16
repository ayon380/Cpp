#include <bits/stdc++.h>
using namespace std;
void countsort(int arr[], int n)
{
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }
    int a[k] = {0};
    for (int i = 0; i < n; i++)
    {
        a[arr[i]]++;
    }
    for (int i = 1; i < k+1; i++)
    {
        a[i] += a[i - 1];
    }
    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[--a[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << i << " : ";
        cin >> arr[i];
    }
    countsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}