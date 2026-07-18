#include <stdio.h>

int main()
{
    int a[5], i, key, found = 0;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    for(i = 0; i < 5; i++)
    {
        if(a[i] == key)
        {
            printf("Found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Not Found");
    }

    return 0;
}
