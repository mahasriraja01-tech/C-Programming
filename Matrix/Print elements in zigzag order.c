#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;

    scanf("%d %d", &r, &c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++) {
        if(i%2==0) {
            for(j=0;j<c;j++)
                printf("%d ",a[i][j]);
        } else {
            for(j=c-1;j>=0;j--)
                printf("%d ",a[i][j]);
        }
    }

    return 0;
}
