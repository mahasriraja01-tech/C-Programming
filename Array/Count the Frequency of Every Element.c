#include <stdio.h>

int main()
{
    int a[5], i, j, count;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 5; i++)
    {
        count = 1;

        for(j = i + 1; j < 5; j++)
        {
            if(a[i] == a[j])
                count++;
        }

        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
                break;
        }

        if(j == i)
            printf("%d = %d\n", a[i], count);
    }

    return 0;
}
