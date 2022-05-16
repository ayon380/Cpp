#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Student
{
    int marks[5];

public:
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    int calculateTotalScore()
    {
        int s = 0;
        for (int i = 0; i < 5; i++)
        {
            s += marks[i];
        }
        return s;
    }
};
int main()
{
    int n;
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++)
    {
        s[i].input();
    }
    int m[n];
    for(int i=0;i<n;i++)
    {
        m[i]=s[i].calculateTotalScore();
    }
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(m[i]>m[0])
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}