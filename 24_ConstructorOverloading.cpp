#include <iostream>
using namespace std;
class complex{
    int x,y;
    public:
    complex(int a,int b)
    {
        x=a;
        y=b;
    }
    complex(int a)
    {
        x=a;
        y=0; 
    }
    complex()
    {
        x=2;
        y=7;
    }
    void print()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main()
{
    complex c1(4);
    c1.print();
    return 0;
}