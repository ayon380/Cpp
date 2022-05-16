#include <iostream>
using namespace std;
class base1
{
protected:
    int a, b;

public:
    base1(int a1, int b1)
    {
        cout << "Base1 Constructor Called Successfully \n";
    }
};
class base2
{
protected:
    int c, d;

public:
    base2(int c1, int d1)
    {
        cout << "Base2 Constructor Called Successfully \n";
    }
};
class derived : public base1, public base2
{
    int e, f;

public:
    derived(int a, int b, int c, int d, int e1, int f1) : base1(a, b), base2(c, d)
    {
        e = e1;
        f = f1;
    }
};
int main()
{
    derived d1(4,5,8,6,3,1);
    return 0;
}