#include <stdio.h>

int main()
{
    int a[5], i;
    int smallest, second;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    smallest = second = a[0];

    for(i = 1; i < 5; i++)
    {
        if(a[i] < smallest)
        {
            second = smallest;
            smallest = a[i];
        }
        else if(a[i] < second && a[i] != smallest)
        {
            second = a[i];
        }
    }

    printf("%d", second);

    return 0;
}
