#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[5];
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    int a = 0, b =INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        a += arr[i];
        if (a < 0)
            a = 0;
        b=max(a,b);
    }
    cout<<b<<endl;
    return 0;
}