#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];

    int nmCount = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int X;
    scanf("%d", &X);
    for (int i = 0; i < N; i++)
    {
        if (A[i] == X)
        {
            nmCount++;
        }
    }

    printf("%d", nmCount);

    return 0;
}
