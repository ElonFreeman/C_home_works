#include <stdio.h>
#define N 20

int main()
{
    int n,arr[N][N];
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            arr[i][j]=(i+1)*100+(j+1);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==n-1)         /*最后一个的space处理的另一种方式：if(j>0) printf(" ");*/
            {
                printf("%04d",arr[i][j]);
                break;
            }

            printf("%04d ",arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}