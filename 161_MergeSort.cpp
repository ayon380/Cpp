#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
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
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            k++;
            j++;
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
}
void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
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
        cout << "Enter the element " << i << " :";
        cin >> arr[i];
    }
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}