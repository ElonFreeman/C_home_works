#include <stdio.h>
int main()
{
    int num,sum=0;
    while(1)
    {
        if(num!=1)
        {
            break;
        }
        scanf("%d",&num);   
        sum+=num;
    }

    printf("%d",sum);
    return 0;
}