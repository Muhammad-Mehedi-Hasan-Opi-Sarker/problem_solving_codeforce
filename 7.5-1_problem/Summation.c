#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        sum = sum + a[i];
    }
    if (sum < 0)
    {
        sum = - sum;
        printf("%lld", sum);
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}