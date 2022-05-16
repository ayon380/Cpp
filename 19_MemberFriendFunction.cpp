#include <iostream>
using namespace std;
class complex;
class calculator
{
    int a, b;

public:
    int add(int n1, int n2)
    {
        return (n1 + n2);
    }
    int sumReal(complex c1,complex c2);
    int sumImg(complex c1,complex c2);
};
class complex
{
    int a, b;
    // friend int calculator::sumReal
    // (complex c1, complex c2);
    // friend int calculator::sumImg(complex c1,complex c2);
    friend class calculator;

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
int calculator::sumReal(complex c1, complex c2)
{
    return (c1.a + c2.a);
}
int calculator::sumImg(complex c1,complex c2)
{
    return(c1.b+ c2.b);
}
int main()
{
    complex c1,c2;
    c1.set(4,7);
    c2.set(3,6);
    calculator cal;
    int q=cal.sumReal(c1,c2);
    cout<<q<<endl;
    cout<<cal.sumImg(c1,c2)<<endl;
    return 0;
}