#include <stdio.h>

int main()
{
    int a, r, n, i;
    scanf("%d", &a);
    scanf("%d", &r);
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a * r;
    }

    return 0;
}
