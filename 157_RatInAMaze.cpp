#include <bits/stdc++.h>
using namespace std;
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}
bool maze(int **arr, int x, int y, int n, int **sol)
{
    if(x==(n-1) && y==(n-1))
    {
        sol[x][y] = 1;
        return true;
    }
    if (isSafe(arr, x, y, n))
    {
        sol[x][y] = 1;
        if(maze(arr,x+1,y,n,sol))
        {
            return true;
        }
        if(maze(arr,x,y+1,n,sol))
        {
            return true;
        }
        sol[x][y] = 0;
        return false;
    }
}
void display(int **arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout <<arr[i][j] <<" ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the values  ( " << i << " , " << j << " ) :";
            cin >> arr[i][j];
        }
    }
    int **sol = new int *[n];
    for (int i = 0; i < n; i++)
    {
        sol[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            sol[i][j] = 0;
        }
    }
    if(maze(arr,0,0,n,sol))
    {
        cout<<"The Maze .. .....\n\n";
        display(arr,n);
        cout<<endl;
        cout<<"The Solution ...\n\n";
        display(sol,n);
    }
    else
    {
        cout<<"Solution not found";
    }
    return 0;
}