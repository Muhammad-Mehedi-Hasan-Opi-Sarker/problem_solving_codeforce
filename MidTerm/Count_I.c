#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    int countEven = 0;
    int countOdd = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        // printf("%d ", A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            countEven++;
        }
        else if (A[i] % 2 == 1)
        {
            countOdd++;
        }
    }
    printf("%d %d", countEven, countOdd);

    return 0;
}