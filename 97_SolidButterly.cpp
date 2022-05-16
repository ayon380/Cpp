#include <iostream>
using namespace std;
int main()
{
    int num, e = 1, d;
    cin >> num;
    d = 2 * num - 2;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cout << " #";
        }
        for (int j = d; j > 0; j--)
        {
            cout << "  ";
        }
        for (int j = 0; j < e; j++)
        {
            cout << " #";
        }
        cout << endl;
        e++;
        d -= 2;
    }
    e=num;
    d=0;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cout << " #";
        }
        for (int j = 0; j <d; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < e; j++)
        {
            cout << " #";
        }
        cout << endl;
        e--;
        d += 2;
    }
    return 0;
}