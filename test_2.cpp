#include <iostream>
using namespace std;
int main()
{
    int raw, col;
    cin >> raw >> col;
    for (int i = 1; i <= raw; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == raw || j == 1 || j == raw)
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}