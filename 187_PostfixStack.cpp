#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    string str;
    cout<<"Enter the string : ";
    getline(std::cin, str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            int a=str[i]-'0';
            s.push(a);
        } 
        else
        {
            int op1=s.top();
            s.pop();
            int op2=s.top();
            s.pop();
            // cout<<" "<<op1<<" "<<op2<<endl;
            // int op3=0;
            char opp=str[i];
            if(opp=='+')
            {
                s.push(op1+op2);
            }
            else if(opp=='-')
            {
                s.push(op1-op2);
            }
            else if(opp=='*')
            {
                s.push(op1*op2);
            }
            else if(opp='/')
            {
                s.push(op1/op2);
            }
            else if(opp='%')
            {
                s.push(op1%op2);
            }
            else if(opp='^')
            {
                s.push(pow(op1,op2));
            }
            // cout<<s.top()<<endl;
        }
    }
    cout<<"The Value is : "<<s.top()<<endl;
    return 0;
}