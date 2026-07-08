#include <stdio.h>

int main()
{
    int n, i, temp, rev, rem;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        temp = i;
        rev = 0;

        while(temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        if(rev == i)
            printf("%d ", i);
    }

    return 0;
}
