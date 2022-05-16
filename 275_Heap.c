#include <stdio.h>
int n;
void heap(int arr[], int i)
{
    int s = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] < arr[s])
    {
        s = l;
    }
    if (r < n && arr[r] < arr[s])
    {
        s = r;
    }
    if (s != i)
    {
        int temp = arr[i];
        arr[i] = arr[s];
        arr[s] = temp;

        heap(arr, s);
    }
}
void buildheap(int arr[])
{
    for (int i = n; i >= 0; i--)
    {
        heap(arr, i);
    }
}
int main()
{
    int arr[] = {12,34,23,56,32,21,20,19};
    n = sizeof(arr) / sizeof(arr[0]);
    buildheap(arr);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}