#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum+ a[i];
    }
    if(sum<0){
        sum = -1*sum;
        printf("%d", sum);
    }
    return 0;
}