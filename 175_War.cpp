#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> v1;
        int c = 0, e = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                e++;
            }
            if (i == 0 && arr[i] == 0)
                continue;
            if (arr[i] != 0)
            {
                c++;
            }
            if (arr[i] == 0 || (i == n - 1 && arr[i] == 1))
            {
                v1.push_back(c);
                c = 0;
                continue;
            }
        }
        // cout<<e<<endl;
        if (e == n)
        {
            cout << e - 1 << endl;
        }
        else
        {
            sort(v1.begin(), v1.end());
            if (v1.size() > 1)
                cout << v1[v1.size() - 1] + v1[v1.size() - 2] << endl;
            if (v1.size() == 1)
                cout << v1[v1.size() - 1] << endl;
        }
    }
    return 0;
}