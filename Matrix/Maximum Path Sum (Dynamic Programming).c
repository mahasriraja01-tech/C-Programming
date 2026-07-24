#include <stdio.h>

int main() {
    int a[10][10], dp[10][10];
    int r,c,i,j;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    dp[0][0]=a[0][0];

    for(i=1;i<r;i++)
        dp[i][0]=dp[i-1][0]+a[i][0];

    for(j=1;j<c;j++)
        dp[0][j]=dp[0][j-1]+a[0][j];

    for(i=1;i<r;i++)
        for(j=1;j<c;j++)
            dp[i][j]=(dp[i-1][j]>dp[i][j-1]?dp[i-1][j]:dp[i][j-1])+a[i][j];

    printf("%d",dp[r-1][c-1]);

    return 0;
}
