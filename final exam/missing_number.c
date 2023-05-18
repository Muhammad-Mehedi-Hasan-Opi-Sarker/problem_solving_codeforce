#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int S, A, B, C;
        scanf("%u %u %u %u", &S, &A, &B, &C);
        int D = S - A - B - C;
        printf("%u\n", D);
    }
    return 0;
}
