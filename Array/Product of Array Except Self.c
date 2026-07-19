#include <stdio.h>

int main()
{
    int a[100];
    int n,i,j,product;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        product=1;

        for(j=0;j<n;j++)
        {
            if(i!=j)
                product*=a[j];
        }

        printf("%d ",product);
    }

    return 0;
}
