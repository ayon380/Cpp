#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    if (p2.second == p1.second)
    {
        return p1.first > p2.first;
    }
    return p1.second > p2.second;
}
void printarr(int arr[], int n,int k )
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    vector<pair<int, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), compare);
    for(int i=0;i<k;i++)
    {
        cout<<v[i].first<<" ";
    }
}
int main()
{
    int arr[] = {3, 1, 4, 4, 5, 2, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    printarr(arr, n, k);
    return 0;
}