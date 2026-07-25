#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    scanf("%d%d", &rows, &cols);

    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= cols; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
