#include <stdio.h>
#include<string.h>

int main()
{
    char S[1000];
    scanf("%s", S);
    int alphabet = 0;
    int small = 0;
    for (int i = 0; S[i]; i++)
    {
        if(S[i] >= 'a' && S[i] <= 'z'){
            small++;
        }
        if(S[i] >= 'A' && S[i] <= 'Z'){
            alphabet++;
        }
    }
    
    printf("%d %d", alphabet, small );
    return 0;
}