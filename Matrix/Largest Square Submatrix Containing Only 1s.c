#include <stdio.h>

int main() {
    int a[10][10], dp[10][10];
    int r,c,i,j,max=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            if(i==0||j==0)
                dp[i][j]=a[i][j];
            else if(a[i][j]==1){
                int m=dp[i-1][j];
                if(dp[i][j-1]<m) m=dp[i][j-1];
                if(dp[i-1][j-1]<m) m=dp[i-1][j-1];
                dp[i][j]=m+1;
            }
            else
                dp[i][j]=0;

            if(dp[i][j]>max)
                max=dp[i][j];
        }

    printf("%d",max);

    return 0;
}
