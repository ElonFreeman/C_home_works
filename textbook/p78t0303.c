#include <stdio.h>
int main()
{
    char c1,c2;

    for(c1='0',c2='9';c1<c2;c1++,c2--)
    {
        printf("%c%c",c1,c2);
    }

    printf("\n");

    return 0;
}