#include <stdio.h>
int main()
{
    static int a[27];  //数组用于存储不同种类邮资的值，最大容量为27
    int i,j,k,s,n=0;  //i是3'张数、j是4'张数、k是数组地址、s是邮资、n是种类计数器

    for(i=0;i<=4;i++)  //3'
    {
        for(j=0;j<=3;j++)  //5'
        {
            s=i*3+j*5;  //组合值生成器

            for(k=0;a[k];k++)  //遍历容器数组
            {
                if(s==a[k])  //发现当前邮资值已存在于容器数组中，跳出遍历
                {
                    break;
                }
            }

            if(s>0)  //将当前种类值注入容器
            {
                a[n]=s;
                n++;
            }

        }
    }

    printf("%d kind:",n);
    for(k=0;k<n;k++)
    {
        printf("%3d",a[k]);
    }

    return 0;
}