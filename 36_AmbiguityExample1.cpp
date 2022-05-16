#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "Good Morning";
    }
};
class base2
{
public:
    void greet()
    {
        cout << "Good Evening";
    }
};
class base3 : public base1, public base2
{
    public:
    void greet()
    {
        base2::greet();
    }
};
int main()
{
    base3 b1;
    b1.greet();
    return 0;
}
