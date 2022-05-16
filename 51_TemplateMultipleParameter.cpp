#include <iostream>
using namespace std;
template <class a, class b, class c>
class lsd
{
protected:
    a a1;
    b a2;
    c a3;

public:
    lsd(a b1, b b2, c b3)
    {
        a1 = b1;
        a2 = b2;
        a3 = b3;
    }
    void display()
    {
        cout << this->a1 << "  " << this->a2 << " " << this->a3 << endl;
    }
};
int main()
{
    lsd<int, float, string> obj(4, 6.2, "Windows 11");
    obj.display();
    return 0;
}