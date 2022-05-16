#include <bits/stdc++.h>
using namespace std;
int rainwater(int arr[], int n)
{
    stack<int> s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] < arr[i])
        {
            int height=(arr[s.top()]);
            s.pop();
            if(s.empty())
            {
                break;
            }
            int distance=i-s.top()-1;
            int minh=min(arr[s.top()], arr[i])-height;
            ans+=distance*minh;
        }
        s.push(i);
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the no of bars : ";
    cin >> n;
    int arr[n];
    cout << "Enter the height of the bars : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << rainwater(arr, n) << endl;
    return 0;
}