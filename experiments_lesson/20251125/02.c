#include <stdio.h>
#include <math.h>

double fun(double a,double x0)
{
    double x1;

    x1=0.5*(x0+(a/x0));

    if(fabs(x1-x0)>=0.00001)
    {
        return fun(a,x1);
    }

    else
    {
        return x1;
    }
}

int main()
{
    double x=2;
    printf("%lf %lf",x,fun(x,10));

    return 0;
}