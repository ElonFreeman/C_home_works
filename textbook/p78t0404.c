#include <stdio.h>
int main()
{
    int peach,i;

    for(peach=1,i=1;i<=9;i++)
    {
        peach=(peach+1)*2;
    }

    printf("%d",peach);

    return 0;
}