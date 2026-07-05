#include <stdio.h>

int main()
{
    int num, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    if (square % 10 == num || square % 100 == num || square % 1000 == num)
        printf("Automorphic Number");
    else
        printf("Not an Automorphic Number");

    return 0;
}
