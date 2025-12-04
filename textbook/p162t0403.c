#include <stdio.h>

int fun(int x)
{
    int a=x*x;
    if(x<10)
    {
        if((a-x)%10==0)
        {
            printf("yes");
        }

        else if((a-x)%10!=0)
        {
            printf("no");
        }
    }

    else if(x>10)
    {
        if((a-x)%100==0)
        {
            printf("yes");
        }

        else if((a-x)%100!=0)
        {
            printf("no");
        }
    }

    return 0;
}

int main()
{
    int x=0;
    scanf("%d",&x);
    fun(x);
    return 0;
}