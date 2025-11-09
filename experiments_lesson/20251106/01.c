#include <stdio.h>
#include <math.h>
int main()
{
    double x,fx;
    scanf("%lf",&x);

    fx=exp(2*x)+sin(pow(x,3.5))+log(x)-1;

    printf("%.6lf",fx);

    return 0;
}