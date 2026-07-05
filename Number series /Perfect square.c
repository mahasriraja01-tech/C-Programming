#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        if(i * i == num)
        {
            printf("Perfect Square");
            return 0;
        }
    }

    printf("Not a Perfect Square");

    return 0;
}
