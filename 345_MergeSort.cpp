#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int mid,int r)
{
    int a1=mid-l+1;
    int a2=r-mid;
    int arr1[a1],arr2[a2];
    for(int i=0;i<a1;i++)
    {
        arr1[i]=arr[l+i];
    }
    for(int j=0;j<a2;j++)
    {
        arr2[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=l;
    while(i<a1 and j<a2)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[k]=arr1[i];
            i++;
        }
        else{
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<a1)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<a2)
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int l,int r)
{
    if(l>=r)
    return;
    int mid=l+(r-l)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
}
 
// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    auto arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    printArray(arr, arr_size);
 
    mergesort(arr, 0, arr_size - 1);
 
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}