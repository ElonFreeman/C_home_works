#include <stdio.h>

float aver(int nums,float *heights)
{
    float average,sum=0;

    for(int i=0;i<nums;i++)
    {
        sum+=heights[i];
    }

    average=sum/(float)nums;

    return average;
}

void diffs(int nums,float heights[],float average,float differents[])
{
    float *hei,*dif;

    hei=heights;
    dif=differents;

    for(int i=0;i<nums;i++)
    {
        dif[i]=hei[i]-average;
    }
}

int main()
{
    int nums;
    float heights[100],average,differents[100];

    scanf("%d",&nums);
    for(int i=0;i<nums;i++)
    {
        scanf("%f",&heights[i]);
    }

    average=aver(nums,heights);
    diffs(nums,heights,average,differents);

    printf("%.2f\n",average);
    for(int i=0;i<nums;i++)
    {
        if(i<nums-1)
        {
            printf("%.2f,",differents[i]);
        }

        else if(i==nums-1)
        {
            printf("%.2f",differents[i]);
        }
    }

    return 0;
}