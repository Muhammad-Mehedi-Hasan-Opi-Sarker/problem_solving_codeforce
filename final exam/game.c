#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int tiger = 0, pathan = 0;
    for (int i = 0; i < N; i++)
    {
        int X1, X2;
        scanf("%d %d", &X1, &X2);
        if (X1 > X2)
        {
            tiger++;
        }
        else if (X1 < X2)
        {
            pathan++;
        }
    }
    if (tiger > pathan)
    {
        printf("Tiger");
    }
    else if (pathan > tiger)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }

    return 0;
}