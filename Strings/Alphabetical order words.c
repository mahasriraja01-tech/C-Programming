#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char words[50][50];
    char temp[50];

    printf("Enter the number of words: ");
    scanf("%d", &n);

    printf("Enter %d words:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }

    // Sorting words alphabetically
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(words[i], words[j]) > 0)
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nWords in alphabetical order:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s ", words[i]);
    }

    return 0;
}
