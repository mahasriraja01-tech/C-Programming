#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, k;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    scanf("%d",&k);

    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]*k);
        printf("\n");
    }

    return 0;
}
