#include <stdio.h>
int main()
{
    int i, j;
    int rows = 4;

    for (i=1;i<=rows;i++)
    {
        for (j=1;j<=rows-i;j++)
        {
            printf(" ");
        }

        for (j=1;;)
        {
            printf("*");
        }
    }
    return 0;
}