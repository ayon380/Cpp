#include <iostream>
using namespace std;
template <class a=int,class b=float,class c=string>
class object
{
    protected:
    a a1;
    b a2;
    c a3;
    public:
    object(a b1,b b2,c b3)
    {
        a1=b1;
        a2=b2;
        a3=b3;
    }
    void display()
    {
        cout<<a1<<" "<<a2<<" "<<a3<<endl;
    }
};
int main()
{
    object<>obj(4,5.6,"Windows 11");
    object<float, string,int>obj1(5.6,"Windows 11",4);
    obj.display();
    obj1.display();
    return 0;
}