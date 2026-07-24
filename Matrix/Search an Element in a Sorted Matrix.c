#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, key, found=0;

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    scanf("%d",&key);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(a[i][j]==key){
                printf("%d %d",i,j);
                found=1;
            }

    if(!found)
        printf("Not Found");

    return 0;
}
