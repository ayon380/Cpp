#include <bits/stdc++.h>
using namespace std;
class Matrix
{
public:
    int m[2][2];
    Matrix();
    Matrix(int a,int b,int c,int d)
    {
        m[0][0] =a;
        m[1][0] =b;
        m[0][1]=c;
        m[1][1] =d;
    }
    Matrix inverse(Matrix);
    int det(Matrix);
    bool isSingular(Matrix);
    void print(Matrix);
    void swap(Matrix *a);
};
Matrix::Matrix()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            m[i][j] = 1;
        }
    }
}
int Matrix::det(Matrix a)
{
    int d = a.m[0][0] * a.m[1][1] - a.m[0][1] * a.m[1][0];
    return d;
}
Matrix Matrix::inverse(Matrix a)
{
    Matrix C;
    int d;
    d = det(a);
    C.m[0][0] = a.m[1][1] / d;
    C.m[1][1] = a.m[0][0] / d;
    C.m[0][1] = -a.m[0][1] / d;
    C.m[1][0] = -a.m[1][0] / d;
    return C;
}
bool Matrix::isSingular(Matrix a)
{
    int d = det(a);
    if (d == 0)
        return true;
    else
        return false;
}
void Matrix::print(Matrix a)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << a.m[i][j] << " ";
        }
        cout << endl;
    }
}
void Matrix::swap(Matrix *a)
{
    int t=(*a).m[1][0];
    (*a).m[1][0]=(*a).m[0][1];
    (*a).m[0][1]=t;
}
int main()
{
    Matrix m(1,2,3,4),m1;
    cout << "Determinant  : " << m.det(m) << endl;
    int c = m.isSingular(m);
    if (c == 1)
        cout << "Singular" << endl;
    else
        cout << "Not Singular" << endl;
    m.print(m);
    m1=m.inverse(m);
    m.print(m1);
    m.swap(&m);
    m.print(m);
    return 0;
}