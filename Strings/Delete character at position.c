#include <stdio.h>

int main()
{
    char str[100];
    int pos, i = 0;

    scanf("%s", str);
    scanf("%d", &pos);

    while (str[i] != '\0')
    {
        i++;
    }

    while (pos < i)
    {
        str[pos] = str[pos + 1];
        pos++;
    }

    printf("%s", str);

    return 0;
}
