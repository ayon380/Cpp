#include <bits/stdc++.h>
using namespace std;
bool threesome(int arr[], int n,int s)
{
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        int lo=i+1;
        int hi=n-1;
        while(lo<hi)
        {
            int c=arr[i]+arr[lo]+arr[hi];
            if(c==s)
            {
                return true;
            }
            else if(c<s)
            {
                lo++;
            }
            else
            {
                hi++;
            }
        }
    }
    return false;
}
int main()
{
    int n,s;
    cin >> n;
    cin >> s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (threesome(arr, n,s))
    {
        cout << "Threesome present!!!!!!!!!!!!!" << endl;
    }
    else
    {
        cout << "No Threesome Present"<< endl;
    }
    return 0;
}