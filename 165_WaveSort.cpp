#include <bits/stdc++.h>
using namespace std;
void wave(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i>0 && arr[i-1]>arr[i])
        {
            swap(arr[i],arr[i-1]);
        }
        if(arr[i]<arr[i+1] && i<n-1)
        {
            swap(arr[i+1],arr[i]);
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
    wave(arr,n);
    for (int i = 0; i < n;i++) cout<<arr[i] <<" ";
    return 0;
    return 0;
}