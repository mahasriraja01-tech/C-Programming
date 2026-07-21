#include <stdio.h>

int main() {
    int a[10][10], n, i, j, flag=1;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=1;i<n;i++)
        for(j=0;j<i;j++)
            if(a[i][j]!=0)
                flag=0;

    if(flag)
        printf("Upper Triangular");
    else
        printf("Not Upper Triangular");

    return 0;
}
