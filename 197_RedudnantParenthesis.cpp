#include <bits/stdc++.h>
using namespace std;
bool check(string str)
{
    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ')')
        {
            char t = s.top();
            s.pop();
            bool found = true;
            while (!s.empty() and t != '(')
            {
                if (t == '+' || t == '-' ||
                    t == '*' || t == '/')
                {
                    found = false;
                }
                t = s.top();
                s.pop();
            }
            if(found==true)
            {
                return true;
            }
        }
        else
        {
            s.push(str[i]);
        }
    }
    return false;
}
int main()
{
    string str;
    getline(std::cin, str);
    cout << check(str) << endl;
    return 0;
}