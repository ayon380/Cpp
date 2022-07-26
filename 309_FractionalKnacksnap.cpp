#include <bits/stdc++.h>
using namespace std;
struct item
{
    int value;
    int weight;
    item(int value, int weight)
    {
        this->value = value;
        this->weight = weight;
    }
};
bool compare(item a1, item a2)
{
    int r1 = (double)a1.value / (double)a1.weight;
    int r2 = (double)a2.value / (double)a2.weight;
    return r1 > r2;
}
double knacksnap(item arr[], int n, int w)
{
    sort(arr, arr + n, compare);
    double final = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].weight <= w)
        {
            w -= arr[i].weight;
            final += arr[i].value;
        }
        else
        {
            final += arr[i].value * ((double)(w) / (double)arr[i].weight);
            break;
        }
    }
    return final;
}
int main()
{
    int W =30 ; //    Weight of knapsack
    item arr[] = {{60, 10}, {100, 20}, {120, 30}};

    int n = sizeof(arr) / sizeof(arr[0]);

    // Function call
    cout << "Maximum value we can obtain = " << knacksnap(arr, n, W);
    return 0;
}