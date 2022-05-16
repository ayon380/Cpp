#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    string str2;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != str[i + 1])
        {
            str2.push_back(str[i]);
        }
    }
    cout << str2;
    return 0;
}