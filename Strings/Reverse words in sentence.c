#include <stdio.h>

int main()
{
    char str[100];
    int i, j, end;

    scanf("%s", str);

    i = 0;
    while (str[i] != '\0')
        i++;

    end = i - 1;

    while (end >= 0)
    {
        if (str[end] == ' ')
        {
            for (j = end + 1; str[j] != '\0' && str[j] != ' '; j++)
                printf("%c", str[j]);

            printf(" ");
        }
        end--;
    }

    for (j = 0; str[j] != ' ' && str[j] != '\0'; j++)
        printf("%c", str[j]);

    return 0;
}
