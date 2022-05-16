#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> input(int a, int b)
{
    vector<vector<int>> v1;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << "Enter the element  (" << i << " , " << j << ")";
            int a;
            cin>>a;
            v1[i].push_back(a);
        }
    }
    return v1;
}
void display(vector<vector<int>> v1, int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << v1[i][j] << " ";
        }
        cout << endl;
    }
}
vector<vector<int>> multiply(vector<vector<int>> v1, vector<vector<int>> v2, int a, int b)
{
    vector<vector<int>> v3;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            for (int k = 0; k < a; k++)
            {
                v3[i][j]+=v1[i][k]*v2[k][j];
            }
        }
    }
    return v3;
}
int main()
{
    int a, b;
    vector<vector<int>> v1, v2, v3;
    cout << "Enter the no of rows : ";
    cin >> a;
    cout << "Enter the number of columns : ";
    cin >> b;
    v1 = input(a, b);
    v2 = input(a, b);
    cout << "\n\n First Matrix \n\n";
    display(v1, a, b);
    display(multiply(v1,v2,a,b),a,b);
    return 0;
}