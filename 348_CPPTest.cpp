#include<iostream>
using namespace std;
class student{
    public:
    int roll;
};
class test:public student{
    public:
    int p1,p2;
};
class sports{
    public:
    int sp;
};
class result:public sports,public test{
    public:
    void input()
    {
        int r,pa,pb,st;
        cin>>r>>pa>>pb>>st;
        roll=r;
        p1=pa;
        p2=pb;
        sp=st;
    }
    void display()
    {
        cout<<"Roll No:"<<roll<<endl;
        cout<<"Marks Obtained"<<endl;
        cout<<"part1 ="<<p1<<endl;
        cout<<"part2 ="<<p2<<endl;
        cout<<"Sports wt:"<<sp<<endl;
        cout<<"Total Score:"<<p1+p2+sp<<endl;
    }
};
int main()
{
    result r;
    r.input();
    r.display();
    return 0;
}