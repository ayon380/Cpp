#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    string c[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "Greater than 9"};
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            for (int j = 0; j < 10; j++)
            {
                if (i == (j + 1))
                {
                    cout << c[j]<<endl;
                    break;
                }
            }
        }
        else
        {
            if(i%2==0)
            {
                cout<<"even"<<endl;
            }
            else
            {
                cout<<"odd"<<endl;
            }
        }
    }
    return 0;
}