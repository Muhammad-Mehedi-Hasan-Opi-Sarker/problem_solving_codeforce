#include <stdio.h>

int main()
{
    int M1, D, M2;
    scanf("%d %d %d", &M1, &D, &M2);
    int result = M1 * M2 / D;
    printf("%d", result);
    return 0;
}