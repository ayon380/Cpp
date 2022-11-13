#include <iostream>
using namespace std;
class complex
{
    int a=2, b=9;

public:
complex(int l,int m)
{
    a=l;
    b=m;
}
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatabySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnumber()
    {
        cout << "Complex Number  : " << a << " + i" << b << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printnumber();
    c2.setdata(3, 4);
    c2.printnumber();
    c3.setdatabySum(c1, c2);
    c3.printnumber();
    return 0;
}