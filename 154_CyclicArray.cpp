// { Driver Code Starts
#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], i;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}
// } Driver Code Ends

void rotate(int arr[], int n)
{
    int a=arr[n-1];
    int arr1[n];
    for (int i = 1; i < n; i++)
    {
            arr1[i]=arr[i-1];
    }
    arr[0]=a;
    for(int i = 1; i < n; i++)
    {
        arr[i]=arr1[i];
    }
}