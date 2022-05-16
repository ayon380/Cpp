#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num,b=1;
    cin>>num;
    for (int i = 0; i <num;i++)
    { 
        for (int j = 0; j <=i;j++)
        { 
            cout <<setw(3) <<b<<" ";
            b++;
        }
        cout << endl;
    }
    return 0;
}