#include <stdio.h>

void proce(int numo,int *nums)
{
    int tmp,i,j;

    for(i=0,j=numo-1;i<j;i++,j--)
    {
        tmp=nums[i];
        nums[i]=nums[j];
        nums[j]=tmp;
    }

    for(i=0;i<numo;i++)
    {
        if(i<numo-1)
        {
            printf("%d,",nums[i]);
        }

        else if(i==numo-1)
        {
            printf("%d",nums[i]);
        }
    }
}

int main(void)
{
    int numo,nums[1000];

    scanf("%d",&numo);
    for(int i=0;i<numo;i++)
    {
        scanf("%d",&nums[i]);
    }
    

    proce(numo,nums);

    return 0;
}