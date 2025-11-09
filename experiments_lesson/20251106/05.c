#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d;
    double average,s2;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

    average=(a+b+c+d)/4;
    s2=(pow(a-average,2)+pow(b-average,2)+pow(c-average,2)+pow(d-average,2))/4;

    printf("%.4lf",s2);
    return 0;
}