#include <stdio.h>
int main()
{
    double nums[10]={},max,min;
    int i;
    max=min=0;
    for(i=0;i<10;i++)
    {
        scanf("%lf",&nums[i]);
        if(nums[i]>max)
        {
            max=nums[i];
        }

        else if(nums[i]<min)
        {
            min=nums[i];
        }
    }

    printf("maximum:%lf,minimum:%lf",max,min);

    return 0;
}
