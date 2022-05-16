#include <iostream>
using namespace std;
int main()
{
    int num, q, a = 1, b = 0, c = 0;
    cin >> num;
    q = num - 1;
    for (int i = 0; i < num; i++)
    {
        a = 1;
        for (int j = q; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " " << a;
            a = a * (i - j) / (j + 1);
        }
        q--;
        cout << endl;
    }
    return 0;
}