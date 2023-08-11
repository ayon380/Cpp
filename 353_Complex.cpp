#include <bits/stdc++.h>
using namespace std;
// template<class x,class y>
class variables
{
    int r, i;

public:
    variables(int r, int i) : r(r), i(i) {}
    friend class com;
};
class com
{
    int x, y;

public:
    com() {}
    com(variables &a)
    {
        x = a.r;
        y = a.i;
    }
    com operator+(const com &a)
    {
        com c;
        c.x=x+a.x;
        c.y=y+a.y;
        return c;
    }
    void display()
    {
        cout<<x<<"+i"<<y;
    }
};
int main()
{
    variables v(4, 5);
    variables v1(8,9);
    com c(v1);
    com c1(v);
    com c2=c+c1;
    c2.display();
    return 0;
}