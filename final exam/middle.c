#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int N;
    scanf("%d", &N);

    int *Ages = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Ages[i]);
    }

    qsort(Ages, N, sizeof(int), compare);

    int middle1 = N / 2;
    int middle2 = (N % 2 == 0) ? middle1 - 1 : middle1;

    if (N % 2 == 0)
    {
        printf("%d %d\n", Ages[middle2], Ages[middle1]);
    }
    else
    {
        printf("%d\n", Ages[middle1]);
    }

    free(Ages);

    return 0;
}
