#include <stdio.h>
int main()
{
    int array[10],sum=0;

    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            sum+=j;
            array[i-1]=sum;
        }

        sum=0;
    }

    for (int i = 0; i < 10; i++)
    {
       if((i+1)%5==0)
       {
            printf("%d",array[i]);
            printf("\n");
            continue;
       }

       printf("%d ",array[i]);
    }
    
    return 0;
}