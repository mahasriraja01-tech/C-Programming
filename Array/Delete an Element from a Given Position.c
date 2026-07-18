#include <stdio.h>

int main()
{
    int a[5], i, pos;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    scanf("%d", &pos);

    for(i = pos - 1; i < 4; i++)
        a[i] = a[i + 1];

    for(i = 0; i < 4; i++)
        printf("%d ", a[i]);

    return 0;
}
