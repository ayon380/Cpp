#include <bits/stdc++.h>
using namespace std;
void median(double arr[], int n)
{
    priority_queue<double> p;
    priority_queue<double, vector<double>, greater<int>> g;
    double d = arr[0];
    p.push(d);
    cout << d << " ";
    for (int i = 1; i < n; i++)
    {
        double x = arr[i];
        if (p.size() > g.size())
        {
            if (x < d)
            {
                g.push(p.top());
                p.pop();
                p.push(x);
            }
            else
            {
                g.push(x);
            }
            d = (g.top() + p.top()) / 2;
        }
        else if (g.size() == p.size())
        {
            if(x<d)
            {
                p.push(x);
                d=p.top();
            }
            else
            {
                g.push(x);
                d=g.top();
            }
        }
        else
        {
            if (x > d)
            {
                p.push(g.top());
                g.pop();
                g.push(x);
            }
            else
            {
                p.push(x);
            }
            d = (g.top() + p.top()) / 2;
        }
        cout << d << " ";
    }
}
int main()
{
    // stream of integers
    double arr[] = {5, 15, 10, 20, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    median(arr, n);
    return 0;
}