#include <stdio.h>
#include <math.h>
int main()
{
    int a=0,b=0,c=0,d=0;
    int num,sqrt_num;

    for(;a<=9;a++,b=a)
    {
        for(;c<=9;c++,d=c)
        {

            num=a*1000+b*100+c*10+d*1;            
            sqrt_num=sqrt(num);

            if((sqrt_num*10)%10==0)
            {
                printf("%d%d%d%d\n",a,b,c,d);
            }
        }
    }

    return 0;
}