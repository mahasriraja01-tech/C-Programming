#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '*')
            continue;

        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                printf("%c ", str[i]);
                str[j] = '*';
                break;
            }
        }
    }

    return 0;
}
