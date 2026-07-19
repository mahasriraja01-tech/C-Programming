#include <stdio.h>

int main()
{
    int a[100];
    int n,sum,i,j,current;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&sum);

    for(i=0;i<n;i++)
    {
        current=0;

        for(j=i;j<n;j++)
        {
            current+=a[j];

            if(current==sum)
            {
                printf("Subarray found from index %d to %d",i,j);
                return 0;
            }
        }
    }

    printf("Not Found");

    return 0;
}
