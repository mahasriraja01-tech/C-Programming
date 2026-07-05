#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        if(i * i * i == num)
        {
            printf("Perfect Cube");
            return 0;
        }
    }

    printf("Not a Perfect Cube");

    return 0;
}
