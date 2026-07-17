#include <stdio.h>

void subsequence(char str[], char result[], int i, int j)
{
    if (str[i] == '\0')
    {
        result[j] = '\0';
        printf("%s\n", result);
        return;
    }

    subsequence(str, result, i + 1, j);

    result[j] = str[i];

    subsequence(str, result, i + 1, j + 1);
}

int main()
{
    char str[100], result[100];

    scanf("%s", str);

    subsequence(str, result, 0, 0);

    return 0;
}
