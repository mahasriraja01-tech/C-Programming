#include <stdio.h>

int main()
{
    char str[3][100];
    int i = 0, j, flag;

    scanf("%s", str[0]);
    scanf("%s", str[1]);
    scanf("%s", str[2]);

    while (str[0][i] != '\0')
    {
        if (str[0][i] != str[1][i] ||
            str[0][i] != str[2][i])
            break;

        i++;
    }

    for (j = 0; j < i; j++)
        printf("%c", str[0][j]);

    return 0;
}
