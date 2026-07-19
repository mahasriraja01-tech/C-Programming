#include <stdio.h>

int main()
{
    int a[100],b[100],c[200];
    int n1,n2,i,j,temp,k=0;

    scanf("%d",&n1);

    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    scanf("%d",&n2);

    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

    for(i=0;i<n1;i++)
        c[k++]=a[i];

    for(i=0;i<n2;i++)
        c[k++]=b[i];

    for(i=0;i<k-1;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }

    if(k%2==0)
        printf("%.1f",(c[k/2-1]+c[k/2])/2.0);
    else
        printf("%d",c[k/2]);

    return 0;
}
