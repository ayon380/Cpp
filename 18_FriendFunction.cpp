#include <iostream>
using namespace std;
class complex
{
    int a, b;
    friend complex sum(complex c1, complex c2);

public:
    void set(int n1, int n2);
    void print();
};
void complex::print()
{
    cout << "The Complex Number is : " << a << " + " << b << "i" << endl;
}
void complex::set(int n1, int n2)
{
    a = n1;
    b = n2;
}
complex sum(complex c1, complex c2)
{
    complex c3;
    c3.set((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}
int main()
{
    complex c1, c2, c5;
    c1.set(5, 1);
    c2.set(1, 2);
    c1.print();
    c2.print();
    c5 = sum(c1, c2);
    c5.print();
    return 0;
}