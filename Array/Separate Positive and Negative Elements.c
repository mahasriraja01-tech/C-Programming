#include <stdio.h>

int main()
{
    int a[5], i;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Positive: ");

    for(i = 0; i < 5; i++)
    {
        if(a[i] >= 0)
            printf("%d ", a[i]);
    }

    printf("\nNegative: ");

    for(i = 0; i < 5; i++)
    {
        if(a[i] < 0)
            printf("%d ", a[i]);
    }

    return 0;
}
