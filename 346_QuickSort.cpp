#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high)
{
    int l = low - 1, h = high + 1;
    int pivot = arr[low];
    while (true)
    {
        do
        {
            l++;
        } while (arr[l] < pivot);
        do
        {
            h--;
        } while (arr[h] > pivot);
        if (l >= h)
        {
            return h;
        }
        swap(arr[l], arr[h]);
    }
}
void sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int p=partition(arr,l,r);
        sort(arr,l,p);
        sort(arr,p+1,r);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver Code
int main()
{
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, 0, n - 1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
