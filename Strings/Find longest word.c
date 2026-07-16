#include <stdio.h>

int main()
{
    char str[100], word[100], longest[100];
    int i = 0, j = 0, max = 0, len;

    scanf("%[^\n]", str);

    while (1)
    {
        j = 0;

        while (str[i] != ' ' && str[i] != '\0')
        {
            word[j] = str[i];
            i++;
            j++;
        }

        word[j] = '\0';
        len = j;

        if (len > max)
        {
            max = len;
            j = 0;

            while (word[j] != '\0')
            {
                longest[j] = word[j];
                j++;
            }

            longest[j] = '\0';
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("%s", longest);

    return 0;
}
