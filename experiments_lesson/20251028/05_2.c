#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int abs_a,abs_b;
    scanf("%d%d",&a,&b);

    abs_a=abs(a);
    abs_b=abs(b);


    if(abs_a>abs_b)
    {
        printf("%d",a);
    }

    else
    {
        printf("%d",b);
    }

    return 0;
}