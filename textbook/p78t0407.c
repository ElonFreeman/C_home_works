#include <stdio.h>
int main()
{
    int m=0,n,r;
    int a,b;
    int gcd=0,lcm;
    scanf("%d%d",&m,&n);

    a=m,b=n;

    while(m!=0)
    {
        r=n%m;
        n=m;
        m=r;
    }

    gcd=n;
    printf("GCD:%d",gcd);

    lcm=(a*b)/gcd;
    printf("LCM:%d",lcm);

    return 0;
}