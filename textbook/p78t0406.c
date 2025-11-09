#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long long i=0,j,n;

    for(n=1;n<=64;n++)
    {
        j=(unsigned long long)pow(2,n-1);
        i=i+j;
    }

    printf("%llu",i);

    return 0;
}