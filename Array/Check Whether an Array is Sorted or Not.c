#include <stdio.h>

int main()
{
    int a[5], i, sorted = 1;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 4; i++)
    {
        if(a[i] > a[i + 1])
        {
            sorted = 0;
            break;
        }
    }

    if(sorted == 1)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }

    return 0;
}
