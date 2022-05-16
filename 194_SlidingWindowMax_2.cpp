#include <bits/stdc++.h>
using namespace std;
void sliding(int arr[], int n, int k)
{
    deque<int> d(k);
    int i;
    for (i = 0; i < k; ++i)
    {
        while (!d.empty() && arr[i] >= arr[d.back()])
        {
            d.pop_back();
        }
        d.push_back(i);
    }
    for (; i < n; ++i)
    {
        cout << arr[d.front()] << " ";
        while (!d.empty() && d.front() <= i - k)
        {
            d.pop_front();
        }
        while (!d.empty() && arr[i]>=arr[d.back()])
        {
            d.pop_back();
        }
        d.push_back(i);
    }
    cout<<arr[d.front()];
}
int main()
{
    int n,k;
    cin >> n;
    cin>>k;
    int arr[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sliding(arr,n,k);
    return 0;
}