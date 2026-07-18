#include <stdio.h>

int main()
{
    int a[5], i, key, count = 0;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for(i = 0; i < 5; i++)
    {
        if(a[i] == key)
            count++;
    }

    printf("%d", count);

    return 0;
}
