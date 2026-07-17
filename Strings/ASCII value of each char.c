#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    scanf("%s", str);

    while (str[i] != '\0')
    {
        printf("%c = %d\n", str[i], str[i]);
        i++;
    }

    return 0;
}
