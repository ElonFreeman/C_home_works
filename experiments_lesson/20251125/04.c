#include <stdio.h>
int summary(int n)
{
    int sum=0;

    sum+=n*n;
    n--;
    
    if(n>=1)
    {
        sum+=summary(n);
    }

    return n*n+sum;
}

int main()
{
    printf("%d",summary(10));
}