#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, alphabets = 0;

    scanf("%s", str);

    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z'))
        {
            alphabets++;
        }
        i++;
    }

    printf("%d", alphabets);

    return 0;
}
