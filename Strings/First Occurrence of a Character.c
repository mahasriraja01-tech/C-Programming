#include <stdio.h>

int main()
{
    char str[100], ch;
    int i = 0;

    scanf("%s", str);
    scanf(" %c", &ch);

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            printf("%d", i);
            return 0;
        }
        i++;
    }

    printf("-1");

    return 0;
}
