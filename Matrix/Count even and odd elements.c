#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int even=0, odd=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++) {
            scanf("%d",&a[i][j]);

            if(a[i][j]%2==0)
                even++;
            else
                odd++;
        }

    printf("%d\n%d",even,odd);

    return 0;
}
