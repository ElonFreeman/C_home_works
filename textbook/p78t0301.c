#include<stdio.h>
int main()
{
    int a=1,b=7;

    do
    {
        b=b/2;
        a+=b;
    } while (b>1);

    printf("%d\n",a);

    return 0;
}
