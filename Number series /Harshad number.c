#include <stdio.h>

int main()
{
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }

    if (num % sum == 0)
        printf("Harshad Number");
    else
        printf("Not a Harshad Number");

    return 0;
}
