#include <iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex(void){
        a=10;
        b=5;
    }
    void display()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    complex c1;
    c1.display();
    return 0;
}