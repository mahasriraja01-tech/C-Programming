#include <stdio.h>

int main()
{
    int a[5], i;
    int even = 0, odd = 0;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}
