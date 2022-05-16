#include <iostream>
using namespace std;
int main()
{
    int num, q,e=1;
    cout << "Enter number";
    cin >> num;
    q = num - 1;
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < (2 * num - 1); j++)
            {
                cout << " #";
            }
            cout << endl;
            continue;
        }
        else
        {
            for (int k = q; k > 0; k--)
            {
                cout << " #";
            }
            for (int k = 0; k < e; k++)
            {
                cout << "  ";
            }
            for (int k = q; k > 0; k--)
            {
                cout << " #";
            }
        }
        q--;
        e+=2;
        cout << endl;
    }
    q=1;
    e=2*num-3;
    for (int i = 0; i < num; i++)
    {
        if (i == num-1)
        {
            for (int j = 0; j < (2 * num - 1); j++)
            {
                cout << " #";
            }
            cout << endl;
            continue;
        }
        else
        {
            for (int k = 0; k <q; k++)
            {
                cout << " #";
            }
            for (int k =e ; k >0; k--)
            {
                cout << "  ";
            }
            for (int k = 0; k <q; k++)
            {
                cout << " #";
            }
        }
        q++;
        e-=2;
        cout << endl;
    }
    return 0;
}