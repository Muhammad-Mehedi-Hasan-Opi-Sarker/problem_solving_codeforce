#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char first[101];
    char second[101];
    char third[101];
    char four[101];


    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %s %s", first, second, third, four);
    }

    if (strlen(first) <= 10)
    {
        printf("%s\n", first);
    }
    else
    {
        printf("%c%d%s \n", first[0], strlen(first) - 2, first + strlen(first) - 1);
    }

    if (strlen(second) <= 10)
    {
        printf("%s\n", second);
    }
    else
    {
        printf("%c%d%s \n", second[0], strlen(second) - 2, second + strlen(second) - 1);
    }

    if (strlen(third) <= 10)
    {
        printf("%s\n", third);
    }
    else
    {
        printf("%c%d%s \n", third[0], strlen(third) - 2, third + strlen(third) - 1);
    }

    if (strlen(four) <= 10)
    {
        printf("%s\n", four);
    }
    else
    {
        printf("%c%d%s \n", four[0], strlen(four) - 2, four + strlen(four) - 1);
    }

    return 0;
}