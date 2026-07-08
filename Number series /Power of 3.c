#include <stdio.h>

int main()
{
    int n, i, power = 3;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", power);
        power = power * 3;
    }

    return 0;
}
