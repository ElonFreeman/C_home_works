#include <stdio.h>
int main()
{
    int scores[10]={},i,j,k,tmp;
    float sum=0;

    for(i=0;i<10;i++)
    {
        scanf("%d",&scores[i]);
    }

    for(i=0;i<9;i++)
    {
        k=i;

        for(j=i+1;j<=9;j++)
        {
            if(scores[j]<scores[k])
            {
                k=j;
            }
        }

        if(i!=k)
        {
            tmp=scores[i];
            scores[i]=scores[k];
            scores[k]=tmp;
        }
    }

    for(i=1;i<9;i++)
    {
        sum+=scores[i];
    }

    printf("%f",(sum/8.0));

    return 0;
}