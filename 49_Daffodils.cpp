#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file;
    ofstream file1;
    string str;
    file1.open("49_Sample.txt");
    file.open("49_Daffodils.txt");
    while(file.eof()==0)
    {
        getline(file,str);
        file1<<str<<endl;
        cout<<str<<endl;
    }
    return 0;
}