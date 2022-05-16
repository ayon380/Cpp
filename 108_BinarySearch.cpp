#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int BinarySearch(vector<int> v1, int n, int l, int r)
{
    if (l > r)
        return -1;
    int m = (l + r) / 2;
    if (n == v1[m])
        return m;
    if (n > v1[m])
        return BinarySearch(v1, n, m + 1, r);
    else
        return BinarySearch(v1, n, l, m - 1);
}
int main()
{
    vector<int> v1;
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
    sort(v1.begin(), v1.end());
    int w;
    cout << "Enter the no to be searched" << endl;
    cin >> w;
    int q = BinarySearch(v1, w, 0, v1.size() - 1);
    if (q < 0)
    {
        cout << "Number not in the array";
    }
    else
    {
        cout << "Number found in the array at position : " << q + 1 << endl;
    }
    return 0;
}