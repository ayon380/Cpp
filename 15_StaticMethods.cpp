#include <iostream>
using namespace std;
class employee
{
    int id;

public:
    static int count;
    void setdata()
    {
        cout << "Enter the id :";
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "ID : " << id << endl;
        cout << "SL.no :" << count << endl;
    }
    static void getcount()
    {
        cout << "The value of  count is  : " << count << endl;
    }
};
int employee::count = 1000;
int main()
{
    employee ayon;
    ayon.setdata();
    ayon.getdata();
    employee::getcount();
    employee rahul;
    rahul.setdata();
    rahul.getdata();
    employee::getcount();
    employee rohan;
    rohan.setdata();
    rohan.getdata();
    cout<<ayon.count<<endl;
    employee::getcount();
    return 0;
}