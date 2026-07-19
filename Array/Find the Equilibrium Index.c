#include <stdio.h>

int main()
{
    int a[100];
    int n,i,total=0,left=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        total+=a[i];
    }

    for(i=0;i<n;i++)
    {
        total-=a[i];

        if(left==total)
        {
            printf("%d",i);
            return 0;
        }

        left+=a[i];
    }

    printf("No Equilibrium Index");

    return 0;
}
