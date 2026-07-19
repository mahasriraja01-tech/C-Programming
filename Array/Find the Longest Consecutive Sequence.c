#include <stdio.h>

int main()
{
    int a[100];
    int n,i,j,temp,count,max=1;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    count=1;

    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1]+1)
            count++;
        else
            count=1;

        if(count>max)
            max=count;
    }

    printf("%d",max);

    return 0;
}
