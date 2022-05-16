#include <bits/stdc++.h>
using namespace std;
void DNF(int arr[], int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the no fo elements  :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    DNF(arr,n);
    for (int i = 0; i < n;i++) cout<<arr[i] <<" ";
    return 0;
}