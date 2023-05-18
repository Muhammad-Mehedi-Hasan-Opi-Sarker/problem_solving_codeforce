#include <stdio.h>

int main()
{
    char str[1001];
    fgets(str, 1001, stdin);
    int smalls = 0, caps = 0, spaces = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            smalls++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            caps++;
        }
        else if (str[i] == ' ')
        {
            spaces++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n", caps, smalls, spaces);
    return 0;
}