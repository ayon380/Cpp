#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void FirstReporting(vector<int> &v1)
{
    int max = 0, c = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] > max)
        {
            max = v1[i];
        }
    }
    int arr[max + 1];
    for (int i = 0; i < max + 1; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < v1.size(); i++)
    {
        arr[v1[i]]++;
    }
    for (int i = 0; i < v1.size(); i++)
    {
        if (arr[v1[i]] > 1)
            c = i;
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
    FirstReporting(v1);
    return 0;
}