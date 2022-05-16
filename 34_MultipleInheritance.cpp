#include <iostream>
using namespace std;
class base1
{
protected:
    int base1;

public:
    void setbase1()
    {
        cout << "Enter the value : " << endl;
        cin >> base1;
    }
};
class base2
{
protected:
    int base2;

public:
    void setbase2()
    {
        cout << "Enter the value : " << endl;
        cin >> base2;
    }
};
class base3
{
protected:
    int base3;

public:
    void setbase3()
    {
        cout << "Enter the value : " << endl;
        cin >> base3;
    }
};
class derived : public base1, public base2, public base3
{
public:
    void display()
    {
        cout << "The value of base1 : " << base1 << endl;
        cout << "The value of base2 : " << base2 << endl;
        cout << "The value of base3 : " << base3 << endl;
        cout << "The average is  : " << (base1 + base2 + base3) / 3 << endl;
    }
};
int main()
{
    derived d1;
    d1.setbase1();
    d1.setbase2();
    d1.setbase3();
    d1.display();
    return 0;
}