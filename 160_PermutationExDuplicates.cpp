#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void permute(vector<int> v1, int id)
{
    if (id == v1.size())
    {
        ans.push_back(v1);
        return;
    }
    for (int i = id; i < v1.size(); i++)
    {
        if (i != id && v1[i] == v1[id])
        {
            continue;
        }
        swap(v1[i], v1[id]);
        permute(v1, id + 1);
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element  in the index " << i << " : ";
        cin >> v1[i];
    }
    permute(v1,0);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}