#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void subarray(vector<int> &v1)
{
    const int n = 1e6 + 2;
    bool check[n];
    for (int i = 0; i < n; i++)
    {
        check[i] = false;
    }
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] >= 0)
        {
            check[v1[i]] = true;
        }
    }
    int a = -1;
    for (int i = 0; i < n; i++)
    {
        if (check[i] == false)
        {
            a = i;
            break;
        }
    }
    cout<<a<<endl;
}
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v1;
    int i = 0;
    int c;
    cout << "Enter ~ to stop entering values..." << endl;
    while (1)
    {
        cout << "enter the value  for position " << i + 1 << endl;
        cin >> c;
        if (c == 99)
        {
            break;
        }
        else
        {
            v1.push_back(c);
            i++;
        }
    }
    subarray(v1);
    return 0;
}