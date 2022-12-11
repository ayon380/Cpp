#include <bits/stdc++.h>
using namespace std;
class alpha{
    public:
    int a;
    alpha(int a){
        this->a=a;
    }
};
class beta{
    public:
    int b;
    beta(int b)
    {
        this->b=b;
    }
};
class gamma : public alpha,public beta{
    public:
    int c;
    gamma(int c):alpha(6),beta(5)
    {
        this->c=c;
    }
    void display()
    {
        cout<<a<<" "<<b<<" "<<c;
    }
};
int main()
{
    gamma g(5);
    g.display();
    return 0;
}