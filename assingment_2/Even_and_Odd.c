#include <stdio.h>

int main()
{
    int N, V, i;
    scanf("%d", &N);
    int sumEven = 0;
    int sumOdd= 0;
    for (i = 1; i <= N; i++)
    {
        scanf("%d", &V);
        if (V % 2 == 0)
        {
            sumEven = sumEven + V;
        }
        else if (V%2==1)
        {
            sumOdd = sumOdd +V;
        }
        
    }
    // hellogit
    printf("%d ", sumEven);
    printf("%d", sumOdd);
    return 0;
}