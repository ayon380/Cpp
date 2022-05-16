#include <bits/stdc++.h>
using namespace std;
vector<int> MaxWindow(vector<int> v1, int k) // Time Complexity : O(n)
{
    vector<int> v3, v2;
    int c = 0;
    while (k <= v1.size())
    {
        v3.push_back(*max_element(v1.begin() + c, v1.begin() + k));
        c++;
        k++;
    }
    return v3;
}
int main()
{
    vector<int> v1, v2;
    int n;
    cout << "Enter the no of elements : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v1.push_back(q);
    }
    int k;
    cout << "Enter the value of window  : ";
    cin >> k;
    v2 = MaxWindow(v1, k);
    for (auto i : v2)
    {
        cout << i << " " << endl;
    }
    return 0;
}