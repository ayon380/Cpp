#include <iostream>
using namespace std;
class interest
{
    int p, t;
    float r, amt;

public:
    interest(int p1, int t1, float r1)
    {
        p=p1;
        t=t1;
        r=r1;
        amt=p;
        for(int i=0;i<t;i++)
        {
            amt*=(1+r);
        }
    }
    interest(int p1, int t1, int r1)
    {
        p=p1;
        t=t1;
        r=float(r1)/100;
        // cout<<r<<endl;
        amt=p1;
        for(int i=0;i<t;i++)
        {
            amt*=(1+r);
        }
    }
    void show()
    {
        cout<<"The Amount : "<<amt<<endl; 
    }
};
int main()
{
    int a1,b1,c1,a2,b2;
    float c2;
    cout<<"Enter the values : ";
    cin>>a1>>b1>>c1;
    interest i1(a1,b1,c1);
    i1.show();
    cout<<"Enter the values : ";
    cin>>a2>>b2>>c2;
    interest i2(a2,b2,c2);
    i2.show();
    return 0;
}