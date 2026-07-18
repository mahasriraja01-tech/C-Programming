#include <stdio.h>

int main()
{
    int a[5], i;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Even Index Elements:\n");

    for(i = 0; i < 5; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }

    printf("\nOdd Index Elements:\n");

    for(i = 0; i < 5; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
