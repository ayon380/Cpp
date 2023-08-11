#include <bits/stdc++.h>
using namespace std;
int compare(int x)
{
    return x * x;
}
void comp(int x)
{
    x = sqrt(x);
    cout << x;
}
int main()
{
    list<int> l;
    l.push_back(5);
    l.push_back(6);
    l.push_back(5);
    l.push_back(2);
    auto it = find(l.begin(), l.end(), 0);
    auto it1 = count(l.begin(), l.end(), 5);
    cout << *it << " " << it1;
    vector<int> v{1, 2, 3, 4, 5, 6};
    transform(v.begin(), v.end(), v.begin(), compare);
    for (auto i : v)
        cout << i << " ";
    for_each(v.begin(), v.end(), comp);
    cout
        << " ";
    return 0;
}