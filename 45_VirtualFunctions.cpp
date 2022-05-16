#include <iostream>
using namespace std;
class base
{
    public:
    int a,c;
    virtual void display()
    {
        cout<<"The value of a  : "<<a<<endl;
    }
    virtual void print()
    {
        cout<<"The value of c : "<<c<<endl;
    }
};
class derived:public base 
{
    public:
    int b=9,d=6;
    void display()
    {
        cout<<"The value of a  : "<<a<<endl;
        cout<<"The value of  b : "<<b<<endl;
    }
    void print()
    {
        cout<<"The value of d : "<<d<<endl;
    }
};
int main()
{
    base* q=new derived;
    q->a=2;
    q->c=9;
    q->display();
    q->print();
    return 0;
}