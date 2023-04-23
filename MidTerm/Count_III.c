#include <stdio.h>

int main()
{
    char S;
    int cnt[26] = {0};
    while (scanf("%c", &S) != EOF)
    {
        cnt[S - 'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        printf("%c - %d\n", i, cnt[i - 'a']);
    }

    return 0;
}