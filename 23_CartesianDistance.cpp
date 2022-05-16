#include <iostream>
#include <cmath>
using namespace std;
class points
{
    float x, y;

public:
    friend float distance(points, points);
    points(void)
    {
        float x1,y1;
        cout<<"Enter the x-coordinate :";
        cin>>x1;
        cout<<"Enter the y-coordinate : ";
        cin>>y1;
        x = x1;
        y = y1;
    }
};
float distance(points a, points b)
{
    float q = (b.x - a.x) * (b.x - a.x);
    float w = (b.y - a.y) * (b.y - a.y);
    if (q > w)
        return (sqrtf(q - w));
    else if (w > q)
        return (sqrtf(w - q));
    else
        return 0;
}
int main()
{
    points p1;
    points p2;
    float d = distance(p1, p2);
    cout << "The Distance between Points : " << d << endl;
    return 0;
}