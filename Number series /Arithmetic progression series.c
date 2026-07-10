#include <stdio.h>

int main()
{
    int a, d, n, i;
    scanf("%d", &a);
    scanf("%d", &d);
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a + d;
    }

    return 0;
}
