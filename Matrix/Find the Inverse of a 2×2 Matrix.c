#include <stdio.h>

int main() {
    int a[2][2];
    int i, j;
    float det;

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det==0) {
        printf("Inverse does not exist");
        return 0;
    }

    printf("%.2f %.2f\n", a[1][1]/det, -a[0][1]/det);
    printf("%.2f %.2f", -a[1][0]/det, a[0][0]/det);

    return 0;
}
