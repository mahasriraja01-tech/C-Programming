#include <stdio.h>

int main()
{
    int a[5], i;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("First = %d\n", a[0]);
    printf("Last = %d", a[4]);

    return 0;
}
