#include <stdio.h>

int main()
{
    int a[6], i, pos, value;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    scanf("%d%d", &pos, &value);

    for(i = 5; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = value;

    for(i = 0; i < 6; i++)
        printf("%d ", a[i]);

    return 0;
}
