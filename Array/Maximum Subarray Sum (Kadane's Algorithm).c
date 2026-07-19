#include <stdio.h>

int main()
{
    int a[100];
    int n, i;
    int maxSum, currentSum;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    maxSum = currentSum = a[0];

    for(i=1;i<n;i++)
    {
        if(currentSum + a[i] > a[i])
            currentSum = currentSum + a[i];
        else
            currentSum = a[i];

        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d",maxSum);

    return 0;
}
