#include <stdio.h>

int main()
{
    int a[100];
    int n,i,j;
    int max=a[0],product;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    max=a[0];

    for(i=0;i<n;i++)
    {
        product=1;

        for(j=i;j<n;j++)
        {
            product*=a[j];

            if(product>max)
                max=product;
        }
    }

    printf("%d",max);

    return 0;
}
