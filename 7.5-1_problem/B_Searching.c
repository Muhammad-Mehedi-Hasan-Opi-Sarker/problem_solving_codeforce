#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int x;
    scanf("%d", &x);
    for(int i = 1; i<=n; i++){
        scanf("%d", &arr[i]);
        // printf("%d\n", arr[i]);
    }
    printf("%d", arr[x]);
    return 0;
}