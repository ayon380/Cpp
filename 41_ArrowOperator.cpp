#include <iostream>
using namespace std;
class complex
{
    int x,y;
    public:
   void setdata()
   {
       cout<<"Enter the values  : "<<endl;
       cin>>x;
       cin>>y;
   }
    void display()
    {
        cout<<"The Complex Number is : "<<x<<" + "<<y<<"i"<<endl;
    }
};
int main()
{
    complex*  c=new complex;
    // (*c).setdata();
    // (*c).display();
    c->setdata();
    c->display();
    return 0;
}