#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void subarray(vector<int> &v1)
{
    int cur = v1[0];
    int n;
    cout << "Enter the value  of the sum :  ";
    cin >> n;
    int start = 0;
    for (int i = 1; i <= v1.size(); i++)
    {
        while (cur > n && start < i - 1)
        {   
            cur -= v1[start];
            start++;
        }
        if (cur == n)
        {
            cout << "Sum found between indexes "
                 << start << " and " << i - 1;
        }
        if (i <n)
        {
            cur+=v1[i];
        }
    }
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