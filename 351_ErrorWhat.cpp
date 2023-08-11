#include <bits/stdc++.h>
using namespace std;
class error
{
public:
    const char* what() const noexcept
    {
        return "Fuckkk ee";
    }
};
int main()
{
    try
    {
        throw error();
    }
    catch (error e)
    {
        cout << e.what() << endl;
    }
    return 0;
}