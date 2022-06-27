#include <stdio.h>
struct time
{
    int hr, mm, ss;
};
struct minimax
{
    int max, min;
};
struct minimax maxhr(struct time q[], int n)
{
    struct minimax w;
    w.max = q[0].hr;
    w.min = q[0].hr;
    for (int i = 1; i < n; i++)
    {
        if (q[i].hr > w.max)
        {
            w.max = q[i].hr;
        }
        else if (q[i].hr < w.min)
        {
            w.min = q[i].hr;
        }
    }
    return w;
}
struct minimax maxmm(struct time q[], int n)
{
    struct minimax w;
    w.max = q[0].mm;
    w.min = q[0].mm;
    for (int i = 1; i < n; i++)
    {
        if (q[i].mm > w.max)
        {
            w.max = q[i].mm;
        }
        else if (q[i].mm < w.min)
        {
            w.min = q[i].mm;
        }
    }
    return w;
}
struct minimax maxss(struct time q[], int n)
{
    struct minimax w;
    w.max = q[0].ss;
    w.min = q[0].ss;
    for (int i = 0; i < n; i++)
    {
        if (q[i].ss > w.max)
        {
            w.max = q[i].ss;
        }
        else if (q[i].ss < w.min)
        {
            w.min = q[i].ss;
        }
    }
    return w;
}
int indexhr(struct time q[], int n, int hr)
{
    for (int i = 0; i < n; i++)

        if (hr == q[i].hr)
        {
            return i;
        }
}
int indexmm(struct time q[], int n, int mm)
{
    for (int i = 0; i < n; i++)
    {
        if (mm == q[i].mm)
        {
            return i;
        }
    }
}
int indexss(struct time q[], int n, int ss)
{
    for (int i = 0; i < n; i++)
    {
        if (ss == q[i].ss)
        {
            return i;
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    struct time a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d:%d:%d", &a[i].hr, &a[i].mm, &a[i].ss);
    }
    struct minimax q = maxhr(a, n);
    if (q.max != q.min)
    {
        int m1 = indexhr(a, n, q.max);
        int m2 = indexhr(a, n, q.min);
        printf("%02d:%02d:%02d", a[m1].hr - a[m2].hr, a[m1].mm - a[m2].mm, a[m1].ss - a[m2].ss);
    }
    else
    {
        struct minimax w = maxmm(a, n);
        if (w.max != w.min)
        {
            int m1 = indexmm(a, n, w.max);
            int m2 = indexmm(a, n, w.min);
            printf("%02d:%02d:%02d", a[m1].hr - a[m2].hr, a[m1].mm - a[m2].mm, a[m1].ss - a[m2].mm);
        }
        else
        {
            struct minimax e = maxss(a, n);
            if (e.max != e.min)
            {

                int m1 = indexss(a, n, e.max);
                int m2 = indexss(a, n, e.min);
                printf("%02d:%02d:%02d", a[m1].hr - a[m2].hr, a[m1].mm - a[m2].mm, a[m1].ss - a[m2].ss);
            }
            else
            {
                printf("00:00:00");
            }
        }
    }
}