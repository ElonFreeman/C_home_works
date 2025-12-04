#include <stdio.h>

double fun(int n)
{
    int i=2,j;
    double sn=2;
    double n_factorial=1;

    for(;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            n_factorial*=j;
        }

        sn+=1/n_factorial;
        n_factorial=1;
    }

    return sn;
}

int main()
{
    printf("%lf",fun(15));
    return 0;
}