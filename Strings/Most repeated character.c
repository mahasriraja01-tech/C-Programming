#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count, max = 0;
    char ch;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        if(str[i] == '*')
            continue;

        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                str[j] = '*';
            }
        }

        if(count > max)
        {
            max = count;
            ch = str[i];
        }
    }

    printf("%c = %d", ch, max);

    return 0;
}
