#include <iostream>
using namespace std;
class test
{
    int a, b, c;

public:
    test(int i, int j, int k) : a(i), b(j), c(k)
    {
        cout << "Constructor Called successfully\n";
    }
    void display()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
};
int main()
{
    test t(4, 8, 9);
    t.display();
    return 0;
}