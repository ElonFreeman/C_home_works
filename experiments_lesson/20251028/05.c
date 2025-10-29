#include <stdio.h>
int main()
{
    int a,b;
    pruntf("please input two numbers:");
    scanf("%d%d",&a,&b);

    if (a<0)
    {
        a=a*-1;

        if (b<0)
        {
            b=b*-1;
        }

        else{}

        if (a>b)
        {
            printf("%d",-a);
        
        }

        else
        {
            printf("%d",b);
        }
    }

    else
    {
        if (b<0)
        {
            b=b*-1;
        }

        else{}
        
        if (a>b)
        {
            printf("%d",a);
        
        }

        else
        {
            printf("%d",b);
        }
    }
    


    return 0;
}