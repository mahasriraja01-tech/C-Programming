#include <stdio.h>

int main()
{
    char str[200], words[20][20];
    int i = 0, j, k, count, n = 0, found;

    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        j = 0;

        while (str[i] != ' ' && str[i] != '\0')
        {
            words[n][j] = str[i];
            i++;
            j++;
        }

        words[n][j] = '\0';
        n++;

        if (str[i] != '\0')
            i++;
    }

    for (i = 0; i < n; i++)
    {
        found = 0;

        for (j = 0; j < i; j++)
        {
            k = 0;

            while (words[i][k] == words[j][k] &&
                   words[i][k] != '\0')
                k++;

            if (words[i][k] == '\0' && words[j][k] == '\0')
                found = 1;
        }

        if (found)
            continue;

        count = 1;

        for (j = i + 1; j < n; j++)
        {
            k = 0;

            while (words[i][k] == words[j][k] &&
                   words[i][k] != '\0')
                k++;

            if (words[i][k] == '\0' && words[j][k] == '\0')
                count++;
        }

        printf("%s = %d\n", words[i], count);
    }

    return 0;
}
