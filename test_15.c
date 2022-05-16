#include <stdio.h>

int main()
{

    int m, n;

    scanf("%d", &m);
    scanf("%d", &n);
    int changes_on_i[m * n], changes_on_j[m * n];
    int matrix[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int nz = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != 0)
            {
                nz++;
                i = changes_on_i[i];
                j = changes_on_j[j];
            }
        }
    }

    printf("%d %d %d", m, n, nz);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (changes_on_i != 0)
            {
                printf("%d %d %d", changes_on_i, changes_on_j, matrix[i][j]);
            }
        }
    }

    return 0;
}