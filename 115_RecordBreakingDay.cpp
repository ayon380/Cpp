#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void RecordBreaking(vector<int> &v1)
{
    int c = 0;
    vector<int> v2 = v1;
    sort(v2.begin(), v2.end());
    for (int i = 0; i < v1.size(); i++)
    {
        if (i == 0)
        {
            if (v1[0] > v1[i + 1])
                c++;
        }
        else if (i == (v1.size() - 1))
        {
            if (v1[i] > v2[i - 1])
            {
                c++;
            }
        }
        else
        {
            if (v1[i] > v1[i - 1] && v1[i] > v1[i + 1])
            {
                c++;
            }
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
    RecordBreaking(v1);
    return 0;
}