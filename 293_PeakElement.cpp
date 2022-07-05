#include <bits/stdc++.h>
using namespace std;
int peak(int arr[], int n)
{
    int l = 0;
    int h = n - 1;
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        {
            break;
        }
        if (mid == 0 && arr[mid - 1] > arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return mid;
}
int main()
{
    int arr[] = { 1, 3, 20, 4, 1, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Index of a peak point is " << peak(arr, n);
    return 0;
}