#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number() {a=1;}
    number(int b) { a = b; }
    // number(number &c)
    // {
    //     a = c.a;
    //     cout << "Copy Constructor invoked";
    // }
    void display()
    {
        cout << a << endl;
    }
};
int main()
{
    number n1,n2(34);
    number n3=n1;
    n1.display();
    n2.display();
    n3.display();
    return 0;
}