#include <stdio.h>

int main()
{
    int num, temp, rem;
    int sum = 0, count = 0;
    float avg;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        count++;
        temp = temp / 10;
    }

    avg = (float)sum / count;

    printf("Average = %.2f", avg);

    return 0;
}
