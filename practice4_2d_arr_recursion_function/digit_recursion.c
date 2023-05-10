#include <stdio.h>

void showNumbers(int n)
{
    if (n == 0) return;
    int x = n % 10;
    showNumbers(n / 10);
    printf("%d ", x);
}

int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        showNumbers(n);
        if(n==0){
            printf("%d",n);
        }
        printf("\n");
    }

    return 0;
}
