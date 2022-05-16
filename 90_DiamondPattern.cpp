#include <iostream>
using namespace std;
int main()
{
    int num, a, q = 1, w = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 1; j < num - i; j++)
        {
            cout << "  ";
        }
        a = 2 * num;
        for (int j = 0; j < q; j++)
        {
            cout << " #";
        }
        q += 2;
        cout << endl;
    }
    q = 2 * num - 1;
    for (int i = num; i > 0; i--)
    {
        for (int j = 0; j < (num - i); j++)
        {
            cout << "  ";
        }
        a = 2 * num;
        for (int j = q; j > 0; j--)
        {
            cout << " #";
        }
        q -= 2;
        cout << endl;
    }
    return 0;
}