#include <stdio.h>

int main() {
    int a[10][10], r,c,i,j,c1,c2,temp;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    scanf("%d %d",&c1,&c2);

    for(i=0;i<r;i++){
        temp=a[i][c1];
        a[i][c1]=a[i][c2];
        a[i][c2]=temp;
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    return 0;
}
