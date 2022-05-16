#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void InsertionSort(vector<int> &v1)
{
    int a, b;
    for (int i = 0; i < v1.size(); i++)
    {
        a = v1[i];
        b = i - 1;
        while (b >= 0 && v1[b] > a)
        {
            v1[b + 1] = v1[b];
            b-= 1;
        }
        v1[b+1]=a;
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
    InsertionSort(v1);
    cout << "After Sorting..." << endl;
    display(v1);
    return 0;
}