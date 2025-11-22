#include <stdio.h>
int main()
{
    int a,i,prime1=0,prime2=0;
    scanf("%d",&a);
    while(prime1!=a&&prime2!=a+2)
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                a++;
                i=2;
                continue;
            }
        }
        prime1=a;

        for(i=2;i<a+2;i++)
        {
            if((a+2)%i==0)
            {
                a++;
                break;
            }
        }
        prime2=a+2;
    }

    printf("%d %d",prime1,prime2);

    return 0;
}