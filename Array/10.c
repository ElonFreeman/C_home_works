#include <stdio.h>
int main()
{
    int nums[3][3]={},i,j,sum1=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&nums[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",nums[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)  //主对角线
    {
        sum1+=nums[i][i];
    }
    for(i=0;i<3;i++)  //副对角线
    {
        sum1+=nums[i][3-1-i];
    }
    printf("%d\n",sum1-nums[1][1]);

    sum1=0;
    for(i=0;i<3;i++)
    {
        sum1+=nums[1][i];
    }
    printf("%d\n",sum1);

    sum1=0;
    for(i=0;i<3;i++)
    {
        sum1+=nums[i][2];
    }
    printf("%d\n",sum1/3);

    return 0;
}