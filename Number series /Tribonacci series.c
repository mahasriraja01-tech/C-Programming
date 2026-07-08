#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 0, c = 1, d;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i == 1)
            printf("%d ", a);
        else if(i == 2)
            printf("%d ", b);
        else if(i == 3)
            printf("%d ", c);
        else
        {
            d = a + b + c;
            printf("%d ", d);

            a = b;
            b = c;
            c = d;
        }
    }

    return 0;
}
