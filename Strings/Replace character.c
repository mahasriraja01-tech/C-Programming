#include <stdio.h>

int main()
{
    char str[100], old, new;
    int i = 0;

    scanf("%s", str);
    scanf(" %c", &old);
    scanf(" %c", &new);

    while (str[i] != '\0')
    {
        if (str[i] == old)
        {
            str[i] = new;
        }
        i++;
    }

    printf("%s", str);

    return 0;
}
