#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("output:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = n-1; j >= 0; j--)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}