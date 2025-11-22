#include <stdio.h>
#define  N 4
int main()
{
    int x[N][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}},y[N],i,j;
   
    for (i=0;i<N;i++)
    {  
        y[i]=x[0][i];
        for(j=0;j<N;j++)
        {
            if(x[j][i]>y[i])
            {
                y[i]=x[j][i];
            }
        }
        printf("%d\n",y[i]);

    }

    /*for(i=0;i<N;i++)
    {
        printf("The max of column %d is: %d\n",i+1,y[i]);
    }*/
    return 0;
}