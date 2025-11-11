#include <stdio.h>
int main()
{
    int a,b,c;
    for(a=0;a<=1;a++)  //三重循环：测试各种组合，直到找到符合条件的组合
    {
        for(b=0;b<=1;b++)
        {
            for(c=0;c<=1;c++)
            {
                if(((a&&!b)||(!a&&b))&&((b&&a==c)||(!b&&a!=c))&&((c&&!a)||!(c&&a)))  //核心逻辑式，
                {
                    printf("a=%d,b=%d,c=%d\n",a,b,c);
                }
                
            }
            
        }
    }
    return 0;
}