#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        // Print spaces before the pattern
        for (int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        // Print the pattern characters
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (i % 2 == 0)
                printf("*");
            else if(i%2 ==1)
                printf("^");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
