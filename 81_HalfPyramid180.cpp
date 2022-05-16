#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number";
    cin >> num;
    for (int i = 1; i < num+1; i++)
    {
        for (int j = 1; j < num+1; j++)
        {
            if (j <= (num - i))
                cout << "  ";
            else
                cout << " X";
        }
        cout << "\n";
    }
    return 0;
}