#include <stdio.h>

int main()
{
    int a[5], i, j, count;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 5; i++)
    {
        count = 0;

        for(j = 0; j < 5; j++)
        {
            if(a[i] == a[j])
                count++;
        }

        if(count == 1)
            printf("%d ", a[i]);
    }

    return 0;
}
