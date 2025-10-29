#include <stdio.h>
int main()
{
    int a=1,b=3,c=5,d;
    d=!(a+b)+c-1&&b+c/2;
    printf("%d",d);
    return 0;
}