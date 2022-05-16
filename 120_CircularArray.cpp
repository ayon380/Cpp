#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int kedane(int arr[], int n)
{
    
    int a = 0, b = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        a += arr[i];
        if (a < 0)
            a = 0;
        b = max(a, b);
    }
    return b;
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    int a,b;
    b=kedane(arr,5);
    int t=0;
    for (int i = 0; i < 5; i++)
    {
        t+=arr[i];
        arr[i]=-arr[i];
    }
    a=t+kedane(arr,5);
    cout << a <<endl;
    return 0;
}