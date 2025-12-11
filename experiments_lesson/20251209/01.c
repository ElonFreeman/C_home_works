#include <stdio.h>
#define m 6
int main()
{
    char sub1[10] = "1234", sub2[10] = "5678";
    char *ps1 = sub1, *ps2 = sub2;

    /*
    printf("str1:");
    scanf("%s",ps1);
    printf("str2:");
    scanf("%s",ps2);
    */

    while (*ps1 != '\0')
    {
        ps1++;
    }

    while (*ps2 != '\0')
    {
        *ps1 = *ps2++;
        ps1++;
    }

    *ps1 = '\0';  //注入完毕，添加终止符

    printf("new:");
    puts(sub1);
    return 0;
}