#include <stdio.h>

int main()
{
    char str[100], sub[100];
    int i = 0, j = 0;

    scanf("%s", str);
    scanf("%s", sub);

    while (str[i] != '\0' && sub[j] != '\0')
    {
        if (str[i] == sub[j])
            j++;

        i++;
    }

    if (sub[j] == '\0')
        printf("Subsequence");
    else
        printf("Not Subsequence");

    return 0;
}
