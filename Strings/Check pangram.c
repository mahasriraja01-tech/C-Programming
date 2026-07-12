#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, count[26] = {0}, total = 0;

    scanf("%s", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            count[str[i] - 'a'] = 1;

        if (str[i] >= 'A' && str[i] <= 'Z')
            count[str[i] - 'A'] = 1;

        i++;
    }

    for (i = 0; i < 26; i++)
        total += count[i];

    if (total == 26)
        printf("Pangram");
    else
        printf("Not Pangram");

    return 0;
}
