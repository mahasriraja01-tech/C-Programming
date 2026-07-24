#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, k;
    int min, col, flag=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++) {
        min=a[i][0];
        col=0;

        for(j=1;j<c;j++)
            if(a[i][j]<min){
                min=a[i][j];
                col=j;
            }

        for(k=0;k<r;k++)
            if(a[k][col]>min)
                break;

        if(k==r){
            printf("%d",min);
            flag=1;
        }
    }

    if(!flag)
        printf("No Saddle Point");

    return 0;
}
