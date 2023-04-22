#include <stdio.h>

int main()
{
    char S[1000];
    scanf("%s", S);
    int vowel = 0;
    for (int i = 0; S[i]; i++)
    {
        if (S[i] == 'a')
        {
            vowel++;
        }
        if (S[i] == 'e')
        {
            vowel++;
        }
        if (S[i] == 'i')
        {
            vowel++;
        }
        if (S[i] == 'o')
        {
            vowel++;
        }
        if (S[i] == 'u')
        {
            vowel++;
        }
    }
    printf("%d", vowel);

    return 0;
}