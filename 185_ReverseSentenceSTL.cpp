#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> s;
    string str, word;
    cout << "Enter the sentence : ";
    getline(std::cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' || i == str.length() - 1)
        {
            if (i == str.length() - 1)
            {
                word += str[i];
            }
            s.push(word);
            word = "";
        }
        word += str[i];
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}