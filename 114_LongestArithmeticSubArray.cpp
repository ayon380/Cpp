#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void function(vector<int> &v1)
{
    vector<int> v2;
    for (int i = 0; i < v1.size() - 1; i++)
    {
        v2.push_back(v1[i + 1] - v1[i]);
    }
    sort(v2.begin(), v2.end());
    int c = 1;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i + 1] - v1[i] == v2[v2.size() - 1])
        {
            c++;
        }
    }
    cout << c << endl;
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
        if (c == 00)
        {
            break;
        }
        else
        {
            v1.push_back(c);
            i++;
        }
    }
    function(v1);
    return 0;
}