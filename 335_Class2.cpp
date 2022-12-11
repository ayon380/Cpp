#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    int roll;
};
class test:public student{
    public:
    int math,phy,che;
};
class sport:public student{
    public:
    int marks;
};
class result:public test,public sport{
    public:
    result()
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        math=a;
        phy=b;
        che=c;
        marks=d;
    }
    void res()
    {
        cout<<(math+phy+che+marks)/4<<endl;
    }
};
int main()
{
    result r;
    r.res();
    return 0;
}