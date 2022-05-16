#include <iostream>
using namespace std;
const int row = 3;
const int column = 3;
void display(int m1[row][column])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << m1[i][j];
        }
        cout << endl;
    }
}
int main()
{

    int m1[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the value (%d,%d) : ",i,j);
            cin >> m1[i][j];
        }
    }
    display(m1);
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < column; j++)
        {
            int t = m1[i][j];
            m1[i][j] = m1[j][i];
            m1[j][i] = t;
        }
    }
    display(m1);
    return 0;
}