#include <stdio.h>

int main()
{
    int alpha;
    scanf("%c", &alpha);

    if (alpha == 'z')
    {
        char nextAlpha = alpha - 25;
        printf("%c\n", nextAlpha);
    }

    if (alpha < 'z')
    {
        char nextAlpha = alpha + 1;
        printf("%c", alpha + 1);
    }

    return 0;
}