#include <stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=9;i++)  //行
    {
        for(j=1;j<=i;j++)  //列
        {
            printf("%d*%d=%d",j,i,i*j);

            if(j<i)                    //控制每一项后面空格的输出 
            {
                if((i*j)<10)  //积小于10输出2个空格 
                {
                    printf("  ");
                }

                else
                {
                    printf(" "); 
                }
            }
        }

        printf("\n");
    }
    return 0;
}