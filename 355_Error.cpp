#include <bits/stdc++.h>
using namespace std;
class errorr
{
public:
    errorr()
    {
        try
        {
            throw("fuck");
        }
        catch (const char *msg)
        {
            throw("teri ma kaa");
        }
    }
};
int main()
{
    try
    {
        errorr();
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }
    return 0;
}