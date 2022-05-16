#include <iostream>
using namespace std;
class c
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a;
    }
    void getdata()
    {
        cout << "Tha value is : " << a << endl;
    }
    c & getclass()
    {
        return *this;
    }
};
int main()
{
    c c1;
    c1.setdata(6);
    c1.getdata();
    c c2;
    // c2.setdata(6);
    c2.getclass().setdata(2);
    c2.getdata();
    return 0;
}