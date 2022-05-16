#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> maxtill(vector<int> v1)
{
    int a, b;
    vector<int> v2;
    for (int i = 0; i < v1.size(); i++)
    {
        if (i == 0)
        {
            v2.push_back(v1[i]);
        }
        else
        {
            if (v1[i] > v1[i -1])
            {
                v2.push_back(v1[i]);
            }
            else if (v1[i] < v1[i -1])
            {
                v1.push_back(v1[i -1]);
            }
            else
            {
                v2.push_back(v1[i]);
            }
        }
    }
    return v2;
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
    vector<int> v1,v2;
    int i = 0;
    char c;
    cout << "Enter ~ to stop entering values..." << endl;
    while (1)
    {
        cout << "enter the value  for position " << i + 1 << endl;
        cin >> c;
        if (c == '~')
        {
            break;
        }
        else
        {
            int a = c - '0';
            v1.push_back(a);
            i++;
        }
    }
    cout << "Before Sorting..." << endl;
    display(v1);
    v2=maxtill(v1);
    cout << "After Sorting..." << endl;
    display(v2);
    return 0;
}