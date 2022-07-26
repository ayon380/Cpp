#include <bits/stdc++.h>
#define N 9
using namespace std;
bool isokay(int arr[N][N], int row, int col, int n)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i][col] == n)
        {
            return false;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[row][i] == n)
        {
            return false;
        }
    }
    int sr = row - row % 3;
    int sc = col - col % 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i + sr][j + sc] == n)
            {
                return false;
            }
        }
    }
    return true;
}
bool solve(int arr[N][N], int row, int col)
{
    if (row == N - 1 && col == N)
    {
        return true;
    }
    if (col == N)
    {
        row++;
        col = 0;
    }
    if (arr[row][col] > 0)
    {
        return solve(arr, row, col + 1);
    }
    for (int i = 1; i <= N; i++)
    {
        if (isokay(arr, row, col, i))
        {
            arr[row][col] = i;
            if (solve(arr, row, col + 1))
            {
                return true;
            }
        }
        arr[row][col] = 0;
    }
    return false;
}
void print(int arr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    int grid[N][N] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    if (solve(grid, 0, 0))
        print(grid);
    else
        cout << "no solution  exists " << endl;

    return 0;
}