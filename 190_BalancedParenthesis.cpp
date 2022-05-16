#include <bits/stdc++.h>
using namespace std;
bool balanced(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
            continue;
        }
        if (s.empty())
        {
            return false;
        }
        if(str[i]==')')
        {
            char q= s.top();
            s.pop();
            if(q=='{' || q=='[')
            {
                return false;
            }
        }
        else if (str[i] == '}')
        {
            char q= s.top();
            s.pop();
            if(q=='[' || q=='(')
            {
                return false;
            }
        }
        else if(str[i]==']')
        {
            char q=s.top();
            s.pop();
            if(q=='(' || q== '{')
            {
                return false;
            }
        }
    }
    return(s.empty());
}
int main()
{
    string str;
    cout << "Enter the string : " << endl;
    getline(std::cin, str);
    // cout<<balanced(str)<<endl;
    if (balanced(str))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}