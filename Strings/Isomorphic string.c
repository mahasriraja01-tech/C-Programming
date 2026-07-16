#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int map1[256] = {0}, map2[256] = {0};
    int i = 0, flag = 1;

    scanf("%s", str1);
    scanf("%s", str2);

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (map1[(unsigned char)str1[i]] == 0 &&
            map2[(unsigned char)str2[i]] == 0)
        {
            map1[(unsigned char)str1[i]] = str2[i];
            map2[(unsigned char)str2[i]] = str1[i];
        }
        else if (map1[(unsigned char)str1[i]] != str2[i] ||
                 map2[(unsigned char)str2[i]] != str1[i])
        {
            flag = 0;
            break;
        }

        i++;
    }

    if (str1[i] != '\0' || str2[i] != '\0')
        flag = 0;

    if (flag)
        printf("Isomorphic");
    else
        printf("Not Isomorphic");

    return 0;
}
