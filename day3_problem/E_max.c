#include<stdio.h>
#include<limits.h>

int main()
{
     int n,a, max = INT_MIN, min = INT_MAX;
     scanf("%d", &n);

     for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(a> max){
            max = a;
        }
        if(a<min){
            min = a;
        }
        
     }
     printf("%d ", max);
     printf("%d", min);
    return 0;
}