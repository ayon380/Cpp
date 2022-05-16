#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cout << "Enter the string :";
    getline(cin, s1);
    int n;
    cout << "Enter 1 to convert to lowercaase , 2 to convert to uppercase : ";
    cin >> n;
    if (n == 1)
    {

        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] >= 'A' && s1[i] <= 'Z')
            {
                s1[i] += 32;
            }
        }
    }
    if (n == 2)
    {
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] >= 'a' && s1[i] <= 'z')
            {
                s1[i] -= 32;
            }
        }
    }
    cout << s1;
    return 0;
}