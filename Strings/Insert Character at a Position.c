#include <stdio.h>

int main()
{
    char str[100], ch;
    int pos, i = 0;

    scanf("%s", str);
    scanf(" %c", &ch);
    scanf("%d", &pos);

    while (str[i] != '\0')
    {
        i++;
    }

    while (i >= pos)
    {
        str[i + 1] = str[i];
        i--;
    }

    str[pos] = ch;

    printf("%s", str);

    return 0;
}
