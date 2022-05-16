#include <bits/stdc++.h>
using namespace std;
void pan(int x[], int y[], int n)
{
    y[0] = 1;
    stack<int> s;
    s.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!s.empty() and x[s.top()] < x[i])
        {
            s.pop();
        }
        y[i] = (s.empty() ? (i + 1) : (i-s.top()));
        s.push(i);
    }
}
int main()
{
    int n;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    pan(x,y,n);
    for (int i = 0; i < n; i++)
    {
        cout<<y[i]<<" ";
    }
    return 0;
}