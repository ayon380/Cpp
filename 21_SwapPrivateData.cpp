#include <iostream>
using namespace std;
class c2;
class c1
{
    int d;

public:
    void set(int a)
    {
        d = a;
    }
    void get()
    {
        cout << d << endl;
    }
    friend void swap(c1 &q, c2 &w);
};
class c2
{
    int d;

public:
    void set(int a)
    {
        d = a;
    }
    void get()
    {
        cout << d << endl;
    }
    friend void swap(c1 &q, c2 &w);
};
void swap(c1 &q, c2 &w)
{
    c1 f;
    f.d = q.d;
    q.d = w.d;
    w.d = f.d;
}
int main()
{
    c1 s;
    c2 r;
    s.set(5);
    r.set(9);
    s.get();
    r.get();
    swap(s, r);
    s.get();
    r.get();
    return 0;
}