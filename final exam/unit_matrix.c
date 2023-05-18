#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int is_unit_matrix = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int value;
            scanf("%d", &value);
            if (i == j && value != 1)
            {
                is_unit_matrix = 0;
            }
            if (i != j && value != 0)
            {
                is_unit_matrix = 0;
            }
        }
    }
    if (is_unit_matrix)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
