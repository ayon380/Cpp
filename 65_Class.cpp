#include <iostream>
using namespace std;
class student
{
private:
    int age, s;
    string s1, s2;

public:
    void set_age(int a)
    {
        age = a;
    }
    int get_age()
    {
        return age;
    }
    void set_first_name(string b)
    {
        s1 = b;
    }
    string get_first_name()
    {
        return s1;
    }
    string set_last_name(string s2)
    {
        this->s2 = s2;
    }
    void set_standard(int s)
    {
        this->s = s;
    }
    string get_last_name()
    {
        return s2;
    }
    int get_standard()
    {
        return s;
    }
};
int main()
{
    int a,b;
    string c,d;
    cin>>a;
    cin>>c;
    cin>>d;
    cin>>b;
    student s1;
    s1.set_age(a);
    s1.set_first_name(c);
    s1.set_last_name(d);
    s1.set_standard(b);
    cout<<s1.get_age()<<endl;
    cout<<s1.get_last_name()<<", "<<s1.get_first_name();
    cout<<s1.get_age()<<","<<s1.get_first_name()<<","<<s1.get_last_name()<<","<<s1.get_standard();
    return 0;
}