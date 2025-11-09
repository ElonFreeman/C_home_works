#include <stdio.h>
int main()
{
    int a=0,b=0;
    int i,j;

    for(i=1;i<=101;i=i+4)
    {
        a=a+i;
    }

    for(j=3;j<=99;j=j+4)
    {
        b=b+j;
    }

    printf("%d",a-b);

    return 0;
}