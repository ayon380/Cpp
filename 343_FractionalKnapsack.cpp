#include <bits/stdc++.h>
using namespace std;
class item
{
public:
    int weight, price;
    item(int price,int weight)
    {
        this->price = price;
        this->weight = weight;
    }
};
bool compare(item a, item b)
{
    double a1 = (double)a.price / a.weight;
    double b1 = (double)b.price / b.weight;
    return (a1 > b1);
}
int knapsack(item arr[], int n, int w)
{
    sort(arr, arr + n, compare);
    double ans = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].weight <= w)
        {
            w -= arr[i].weight;
            ans += arr[i].price;
            // cout<<ans<<endl;
        }
        else
        {
            ans += (arr[i].price * ((double)w / arr[i].weight));
            // cout<<ans<<endl;
            break;
        }
        // cout<<ans<<endl;
    }
    return ans;
}
int main()
{
     int W = 50;
    item arr[] = { { 60, 10 }, { 100, 20 }, { 120, 30 } };
 
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    cout << knapsack( arr, N,W);
    return 0;
}