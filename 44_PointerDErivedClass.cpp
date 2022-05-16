#include <iostream>
using namespace std;
class base
{
    public:
    int a;
    void dsplay()
    {
        cout<<"The value of a  : "<<a<<endl;
    }
};
class derived:public base 
{
    public:
    int b;
    void display()
    {
        cout<<"The value of a  : "<<a<<endl;
        cout<<"The value of  b : "<<b<<endl;
    }
};
int main()
{
    base* ptr;
    derived* ptr1;

    // ptr->a=9;
    // ptr->display();

    ptr1->b=7;
    ptr1->a=4;
    ptr1->dsplay();
    return 0;
}