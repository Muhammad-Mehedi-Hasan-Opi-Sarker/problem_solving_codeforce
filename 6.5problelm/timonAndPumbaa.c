#include <stdio.h>

int main()
{
    int timon, pumbaa;
    scanf("%d %d", &timon, &pumbaa);

    int both = timon - pumbaa;
    if (both >= 0)
    {
        printf("%d", both);
    }
    else
    {
        printf("%d", 0);
    }
    return 0;
}