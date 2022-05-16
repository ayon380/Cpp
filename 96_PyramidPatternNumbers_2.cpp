#include <iostream>
using namespace std;
int main()
{
    int num,q;
    cin >> num;
    q=num-1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < q; j++)
        { 
            cout << " ";
        }
        for(int j = 0; j <i+1;j++)
        {
            cout << j+1<<" ";
        }
        q--;
        cout << endl;
    }
    return 0;
}