#include <stdio.h>

int main()
{
    int students[6][3] = {
        {1, 90, 100},
        {2, 55, 89},
        {
            3,
            99,
            90,
        },
        {
            4,
            99,
            90,
        },
        {
            5,
            99,
            90,
        },
        {
            6,
            99,
            90,
        },
    };

    printf("Roll\tBangla\tEnglish\n");
    float bangla = 0;
    float english = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", students[i][j]);
        }

        printf("\n");
    }
    for (int i = 0; i < 6; i++)
    {
        bangla += students[i][1];
        english += students[i][2];
    }

    printf("Total marks %.1f and average Bangla %.2f\n", bangla, bangla / 6);
    printf("Total marks %.1f and average English %.2f", english, english / 6);

    return 0;
}