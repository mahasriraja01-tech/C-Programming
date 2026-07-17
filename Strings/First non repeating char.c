#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count, found = 0;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        count = 0;

        for (j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
                count++;
        }

        if (count == 1)
        {
            printf("%c", str[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("No Non-Repeating Character");

    return 0;
}
