#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void subarray(vector<int> &v1)
{
    int n, a = 0, b = 0;
    cout << "Enter the number  : ";
    cin >> n;
    sort(v1.begin(), v1.end());
    int i = 0, j = v1.size() - 1;
    while (i < j)
    {
        if ((v1[i] + v1[j]) == n)
        {
            a = v1[i];
            b = v1[j];
            break;
        }
        else if ((v1[i] + v1[j]) > n)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << a << " " << b << endl;
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