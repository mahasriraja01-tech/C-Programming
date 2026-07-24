#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int sum, max=-9999, row;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++){
        sum=0;
        for(j=0;j<c;j++)
            sum+=a[i][j];

        if(sum>max){
            max=sum;
            row=i;
        }
    }

    printf("%d",row);

    return 0;
}
