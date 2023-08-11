#include <bits/stdc++.h>
using namespace std;
class a1
{
public:
    a1()
    {
        cout << "A1 constructor" << endl;
    }
    void dis()
    {
        cout << "A1 dis" << endl;
    }
    ~a1()
    {
        cout << "A1 Destructor" << endl;
    }
};
class b1 :virtual public a1
{
public:
    b1()
    {
        cout << "B1 constructor" << endl;
    }
    virtual void bis()
    {
        cout << "B1 bis" << endl;
    }
    ~b1()
    {
        cout << "B1 Destructor" << endl;
    }
};
class b2 :virtual public a1
{
public:
    b2()
    {
        cout << "B2 constructor" << endl;
    }
    virtual void bis()
    {
        cout << "B2 bis" << endl;
    }
    ~b2()
    {
        cout << "B2 Destructor" << endl;
    }
};
class c1 : public b1, public b2
{
public:
    c1()
    {
        cout << "C1 constructor" << endl;
    }
    // void dis()
    // {
    //     cout << "C1 dis" << endl;
    // }
    ~c1()
    {
        cout << "C1 Destructor" << endl;
    }
};
int main()
{
    a1* a=new a1();
    (*a).dis();
    delete a;
    b1* prt;
    

    c1 c;
    prt=&c;
    prt->bis();
    return 0;
}