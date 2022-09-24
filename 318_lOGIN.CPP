#include <bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    // fstream fio;
    // ofstream fout("password.txt");
    // fout<<"fuck youu"<<endl;
    int a;
    cout<<"Enter 1 to login , 2 to create account ";
    cin>>a;
    if(a==1)
    {
        string user,pass;
        ifstream fin("password.txt");
        fin>>user>>pass;
        fin.close();
        string user1,pass1;
        cin>>user1>>pass1;
        if(user1==user and pass==pass1)
        {
            cout<<"Login Suuccessful";
        }
        else{
            cout<<"Error";
        }
    }
    if(a==2)
    {
        ofstream fout("password.txt",ios::app);
        string user ,pass;
        cin>>user>>pass;
        fout<<"\n"<<user<<"\t"<<pass;
        fout.close();
    }
    return 0;
}