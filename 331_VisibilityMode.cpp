#include <bits/stdc++.h>
using namespace std;
class base{
    private:
    int b=2;
    protected:
    int c=4;
    public:
    int a=3;
};
class derived : private base{   
    public:
    void pvt(){
        cout<<c;
    }
};
// class derived1 : private 
int main()
{
    derived d;
    d.pvt();
    return 0;
}