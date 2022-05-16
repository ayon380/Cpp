#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void setid()
    {
        cout << "Enter the id of the employee : " << endl; 
        cin >> id;
    }
    void getid()
    {
        cout << "The id of the employee  : " << id << endl;
    }
};
int main()
{
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    return 0;
}