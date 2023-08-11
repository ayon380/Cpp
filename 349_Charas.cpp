#include <iostream>
using namespace std;
class Human
{
    int hands, legs;

public:
    Human()
    {
        cin >> hands >> legs;
    }
    Human(int a, int b)

    {
        hands = a;
        legs = b;
    }
    Human(Human &a)
    {
        hands = a.hands;
        legs = a.legs;
    }
    friend void display(Human);
    friend class Human1;
    ~Human()
    {
        cout << "Destructor Called" << endl;
    }
};
void display(Human h)
{
    {
        cout << "Hands are " << h.hands;
        cout << "Legs are " << h.legs;
    }
}
class Human1
{
public:
    void display(Human h)
    {
        cout << h.legs;
        cout << h.hands << endl;
    }
    ~Human1()
    {
        cout << "Destructor Called 1" << endl;
    }
};
class Human2 : public Human1
{
public:
    int c;
};
int main()
{
    // Human obj(2, 4);
    // Human obj1 = obj;
    // obj1.display();
    // obj.display();
    Human obj(4,6);
    Human1 a1;
    a1.display(obj);
    display(obj);
}