#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int pos=0, neg=0, zero=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++) {
            scanf("%d",&a[i][j]);

            if(a[i][j]>0)
                pos++;
            else if(a[i][j]<0)
                neg++;
            else
                zero++;
        }

    printf("%d\n%d\n%d",pos,neg,zero);

    return 0;
}
