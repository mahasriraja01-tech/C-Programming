#include <stdio.h>

int main()
{
    char str[100], word[100], shortest[100];
    int i = 0, j, min = 100, len;

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

        if (len < min)
        {
            min = len;

            for (j = 0; word[j] != '\0'; j++)
                shortest[j] = word[j];

            shortest[j] = '\0';
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("%s", shortest);

    return 0;
}
