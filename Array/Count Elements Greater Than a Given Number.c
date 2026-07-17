#include <stdio.h>

int main()
{
    int a[5], i, number, count = 0;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &number);

    for(i = 0; i < 5; i++)
    {
        if(a[i] > number)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
