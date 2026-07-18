#include <stdio.h>

int main()
{
    int a[5], i;
    int product = 1;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        product = product * a[i];
    }

    printf("%d", product);

    return 0;
}
