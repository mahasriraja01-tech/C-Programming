#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, words = 1;

    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            words++;
        }
        i++;
    }

    printf("%d", words);

    return 0;
}
