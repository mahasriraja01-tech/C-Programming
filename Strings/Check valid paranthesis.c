#include <stdio.h>

int main()
{
    char str[100], stack[100];
    int i = 0, top = -1, flag = 1;

    scanf("%s", str);

    while (str[i] != '\0')
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            top++;
            stack[top] = str[i];
        }
        else
        {
            if (top == -1)
            {
                flag = 0;
                break;
            }

            if ((str[i] == ')' && stack[top] != '(') ||
                (str[i] == ']' && stack[top] != '[') ||
                (str[i] == '}' && stack[top] != '{'))
            {
                flag = 0;
                break;
            }

            top--;
        }

        i++;
    }

    if (top != -1)
        flag = 0;

    if (flag)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
