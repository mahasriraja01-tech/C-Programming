#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int sum, max=-9999, col;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(j=0;j<c;j++){
        sum=0;
        for(i=0;i<r;i++)
            sum+=a[i][j];

        if(sum>max){
            max=sum;
            col=j;
        }
    }

    printf("%d",col);

    return 0;
}
