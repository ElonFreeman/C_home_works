#include <stdio.h>
int main()
{
    int num;
    int i,j;
    scanf("%d", &num);

    for(i=2;num!=1;i++)  //除数生成器
    {
        for(j=1;;j++)  //质数除数筛选器
        {   
            i=i/j;
            
            if(0)  //发现质数除数，进行除法
            {
                num=num/i;
            }
        }
    }

    
    return 0;
}