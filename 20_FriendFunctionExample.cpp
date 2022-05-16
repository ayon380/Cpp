#include <iostream>
using namespace std;
class y ;
class x
{
    int a;
    public:
    friend void add (x ,y);
    void set(int n)
    {
        a=n;
    }
};
class y
{
    int b;
    public:
    friend void add (x ,y);
    void set(int n)
    {
        b=n;
    }
};
void add(x x1,y y1)
{
    cout<<"The sum is  : "<<x1.a+y1.b<<endl;
}
int main()
{
    x x1;
    y y1;
    x1.set(4);
    y1.set(9);
    add(x1,y1);
    return 0;
}