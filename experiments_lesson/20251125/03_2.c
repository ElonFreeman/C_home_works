#include <stdio.h>

double fun(int n)
{
    double count=1,sn=1;
    for(int i=1;i<=n;i++)
    {
        sn*=1.0/(double)i;
        count+=sn;
    }
    return count;
}

int main()
{
    printf("%lf",fun(15));
    return 0;
}