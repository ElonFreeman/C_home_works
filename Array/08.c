#include <stdio.h>
int main()
{
    int nums[10],i,sum=0;
    printf("Please input 10 nums:\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&nums[i]);
    }

    for(i=0;i<10;i++)
    {
        sum+=nums[i];
    }

    printf("Average is:%d\n",(sum/10));

    int count=0;
    for(i=0;i<10;i++)
    {
        if(nums[i]>(sum/10))
        {
            count++;
        }
    }

    printf("%d nums bigger than average.\n",count);

    return 0;
}