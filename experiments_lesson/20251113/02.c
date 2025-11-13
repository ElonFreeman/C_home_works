#include <stdio.h>
int main()
{
    int weight,price;
    char fast;
    scanf("%d %c",&weight,&fast);

    if(weight<1000)
    {
        price=8;
    }

    else if(weight>1000)
    {
        price=8+((weight-1000)/500)*4;

        if((weight-1000)%500!=0)
        {
            price+=4;
        }
    }

    else
    {
        
    }

    if(fast=='Y'||fast=='y')
    {
        price+=5;
    }

    printf("%d",price);

    return 0;
}