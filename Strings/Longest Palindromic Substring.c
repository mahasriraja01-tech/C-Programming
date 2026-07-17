#include <stdio.h>

int main()
{
    char str[100], longest[100];
    int i, j, k, len, max = 0, flag;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i; str[j] != '\0'; j++)
        {
            flag = 1;

            for (k = i; k <= (i + j) / 2; k++)
            {
                if (str[k] != str[i + j - k])
                {
                    flag = 0;
                    break;
                }
            }

            if (flag)
            {
                len = j - i + 1;

                if (len > max)
                {
                    max = len;

                    for (k = 0; k < len; k++)
                        longest[k] = str[i + k];

                    longest[len] = '\0';
                }
            }
        }
    }

    printf("%s", longest);

    return 0;
}
