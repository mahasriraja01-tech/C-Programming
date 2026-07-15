#include <stdio.h>

int main()
{
    char str1[100], str2[100], temp[200];
    int i = 0, j = 0, k = 0;

    scanf("%s", str1);
    scanf("%s", str2);

    while (str1[i] != '\0')
    {
        temp[k++] = str1[i];
        i++;
    }

    i = 0;
    while (str1[i] != '\0')
    {
        temp[k++] = str1[i];
        i++;
    }
    temp[k] = '\0';

    i = 0;
    while (temp[i] != '\0')
    {
        j = 0;
        while (temp[i + j] == str2[j] && str2[j] != '\0')
            j++;

        if (str2[j] == '\0')
        {
            printf("Rotation");
            return 0;
        }
        i++;
    }

    printf("Not Rotation");

    return 0;
}
