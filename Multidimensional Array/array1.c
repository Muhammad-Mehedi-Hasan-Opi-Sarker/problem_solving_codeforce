#include <stdio.h>

int main()
{
    int students[3][3] = {
        {1, 90, 100},
        {2, 55, 89},
        {
            3,
            99,
            90,
        }};

    printf("Roll Bangla English\n");

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", students[i][j]);
        }
        printf("\n");
    }

    return 0;
}