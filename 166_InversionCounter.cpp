#include <bits/stdc++.h>
using namespace std;
long long merge(int arr[], int l, int mid, int r)
{

    int n1 = mid - l + 1, n2 = (r - mid);
    int arr1[n1], arr2[n2];
    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        arr2[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = l;
    long long inv = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
            k++;
            inv += (n1 - i);
        }
    }
    while (i < n1)
    {
        arr[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = arr2[j];
        k++;
        j++;
    }
    return inv;
}
long long mergesort(int arr[], int l, int r)
{
    long long inv=0;
    if (l < r)
    {
        int mid = (r + l) / 2;
        inv += mergesort(arr, l, mid);
        inv += mergesort(arr, mid + 1, r);
        inv += merge(arr, l, mid, r);
    }
    return inv;
}
int main()
{
    int n;
    cout << "Enter the no fo elements  :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long inv = mergesort(arr, 0, n - 1);
    cout << inv << endl;
    return 0;
    return 0;
}