#include <bits/stdc++.h>
using namespace std;
template<class T>
class a{
    public:
    int x;
    mutable int y;
    a(int x, int y):x(x),y(y){}
    void print() const
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    const a<int> b(1,2);
    b.print();
    b.y = 3;
    b.print();
    return 0;
}