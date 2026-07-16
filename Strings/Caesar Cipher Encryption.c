#include <stdio.h>

int main()
{
    char str[100];
    int key, i = 0;

    scanf("%s", str);
    scanf("%d", &key);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (str[i] - 'a' + key) % 26 + 'a';

        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = (str[i] - 'A' + key) % 26 + 'A';

        i++;
    }

    printf("%s", str);

    return 0;
}
