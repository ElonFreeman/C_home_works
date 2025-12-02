#include <stdio.h>

int fun(int x)
{
    int a=x*x;
    if(x<10)
    {
        if((a-(a%10))/10==0)
        {
            printf("yes");
        }

        else if((a-(a%10))/10!=0)
        {
            printf("no");
        }
    }

    else if(x>10)
    {
        if((a-(a%10))/100==0)
        {
            printf("yes");
        }

        else if((a-(a%10))/100!=0)
        {
            printf("no");
        }
    }

}

int main()
{
    int x=0;
    scanf("%d",&x);
    fun(x);
    return 0;
}