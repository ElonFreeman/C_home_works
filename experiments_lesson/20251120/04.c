#include <stdio.h>
int main()
{
    double a=2.0,b=1.0,tmpa,tmpb,sum=0.0;
    int n,i=0;
    printf("请输入n的值:\n");
    scanf("%d",&n);

    while(i<n)
    {
        tmpa=a;
        tmpb=b;

        sum+=a/b;

        b=tmpa;
        a=tmpa+tmpb;

        i++;
    }

    printf("数列之和是:%.6lf\n",sum);
    
    return 0;
}