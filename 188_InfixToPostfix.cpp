#include <bits/stdc++.h>
using namespace std;
int precedence(char a)
{
    if (a == '^')
    {
        return 3;
    }
    else if (a == '*' || a == '/')
    {
        return 2;
    }
    else if (a == '+' || a == '-')
    {
        return 1;
    }
    return -1;
}
string postfix(string str)
{
    stack<char> s;
    string result;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            result += c;
        }
        else if (c == '(')
        {
            s.push(c);
        }
        else if (c == ')')
        {
            while (s.top() != '(')
            {
                result += s.top();
                s.pop();
            }
        }
        else
        {
            while (!s.empty() && precedence(str[i]) <= precedence(s.top()))
            {
                result += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while(!s.empty())
    {
        result += s.top();
        s.pop();
    }
    return result;
}
int main()
{
    string inf, post;
    getline(std::cin, inf);
    cout<<postfix(inf)<<endl;
    return 0;
}