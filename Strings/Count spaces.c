#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, spaces = 0;

    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            spaces++;
        }
        i++;
    }

    printf("%d", spaces);

    return 0;
}
