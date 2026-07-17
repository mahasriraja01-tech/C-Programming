#include <stdio.h>

int main()
{
    char str[100], temp;
    int i = 0, j;

    scanf("%s", str);

    while (str[i] != '\0')
        i++;

    j = i - 1;

    temp = str[0];
    str[0] = str[j];
    str[j] = temp;

    printf("%s", str);

    return 0;
}
