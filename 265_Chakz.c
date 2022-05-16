#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            c = 1;
        }
        for (int j = 0; j < m; j++)
        {
            printf("%d", c);
        }
        c=0;
        printf("\n");
    }
}