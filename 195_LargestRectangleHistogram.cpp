#include <bits/stdc++.h>
using namespace std;
int largest(int arr[], int n)
{
    int max = 0, i = 0;
    stack<int> s;
    int top, area;
    while (i < n)
    {
        if (s.empty() || arr[s.top()] <= arr[i])
        {
            s.push(i++);
        }
        else
        {
            top = s.top();
            s.pop();
            area = arr[top] * (s.empty() ? i : i - s.top() - 1);
            if (max < area)
            {
                max = area;
            }
        }
    }
    while(s.empty()==false)
    {
        top = s.top();
        s.pop();
        area=arr[top]* (s.empty() ? i : i-s.top() - 1);
        if(max<area)
        {
            max=area;
        }
    }
    return max;
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
    cout<<largest(arr,n)<<endl;
    return 0;
}