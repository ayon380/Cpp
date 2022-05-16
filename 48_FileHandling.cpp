#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    string s1="Windows 11",s2;
    ofstream file("48_Sample.txt");
    ifstream file1("48_Sample_2.txt");
    file<<s1;
    getline(file1,s2);
    cout<<s2;
    return 0;
}