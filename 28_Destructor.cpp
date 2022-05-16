#include <iostream>
using namespace std;
int c = 0;
class num
{
public:
    num()
    {
        c++;
        cout << "Constructor called" << c << endl;
    }
    ~num()
    {
        cout << "This is the time when destructor is called " << c << endl;
        c--;
    }
};
int main()
{
    cout << "We are in main function " << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}