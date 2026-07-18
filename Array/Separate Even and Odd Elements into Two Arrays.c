#include <stdio.h>

int main()
{
    int a[5], even[5], odd[5];
    int i, e = 0, o = 0;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 == 0)
            even[e++] = a[i];
        else
            odd[o++] = a[i];
    }

    printf("Even: ");

    for(i = 0; i < e; i++)
        printf("%d ", even[i]);

    printf("\nOdd: ");

    for(i = 0; i < o; i++)
        printf("%d ", odd[i]);

    return 0;
}
