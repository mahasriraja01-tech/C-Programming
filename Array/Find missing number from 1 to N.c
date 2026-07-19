#include <stdio.h>

int main()
{
    int a[100];
    int n, i, sum = 0, total;

    scanf("%d", &n);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    total = n * (n + 1) / 2;

    printf("%d", total - sum);

    return 0;
}
