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
    else
    {
        return -1;
    }
}
string postfix(string str)
{
    string result;
    stack<int> s;
    str = '(' + str + ')';
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
            s.pop();
        }
        else
        {
            if (c == '^')
            {
                while (precedence(c) <= precedence(s.top()))
                {
                    result += s.top();
                    s.pop();
                }
            }
            else
            {
                while (precedence(c) < precedence(s.top()))
                {
                    result += s.top();
                    s.pop();
                }
            }
            s.push(c);
        }
    }
    while (!s.empty())
    {
        result += s.top();
        s.pop();
    }
    return result;
}
string infix(string w)
{
    reverse(w.begin(), w.end());
    for (int i = 0; i < w.length(); i++)
    {
        if (w[i] == '(')
        {
            w[i] = ')';
            i++;
        }
        else if (w[i] == ')')
        {
            w[i] = '(';
            i++;
        }
    }
    string p=postfix(w);
    reverse(p.begin(), p.end());
    return p;
}
int main()
{
    string h;
    cout << "Enter the string :";
    getline(std::cin, h);
    cout << infix(h)<<endl;
    return 0;
}