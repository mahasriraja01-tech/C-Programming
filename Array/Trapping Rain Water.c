#include <stdio.h>

int main()
{
    int a[100];
    int left[100],right[100];
    int n,i,water=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    left[0]=a[0];

    for(i=1;i<n;i++)
    {
        if(left[i-1]>a[i])
            left[i]=left[i-1];
        else
            left[i]=a[i];
    }

    right[n-1]=a[n-1];

    for(i=n-2;i>=0;i--)
    {
        if(right[i+1]>a[i])
            right[i]=right[i+1];
        else
            right[i]=a[i];
    }

    for(i=0;i<n;i++)
    {
        if(left[i]<right[i])
            water+=left[i]-a[i];
        else
            water+=right[i]-a[i];
    }

    printf("%d",water);

    return 0;
}
