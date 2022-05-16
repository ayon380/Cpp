#include <iostream>
using namespace std;
class employee // Base Class
{
    float salary;

public:
    int id;
    employee() {}
    employee(int idd)
    {
        id = idd;
        salary = 10000.0;
    }
};
class programmer : employee
{
public:
    int lang = 9;
    programmer(int idp)
    {
        id = idp;
    }
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    employee harry(101), ayon(102), ranveer(103);
    programmer p1(5);
    cout << p1.lang << endl;
    p1.getdata();
    return 0;
}