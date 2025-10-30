#include <stdio.h>
int main()
{
    double a, b, c, d, s;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

    a = a - c;
    b = b + d;
    s = a + b;

    printf("大米:%.2lf,小米:%.2lf,总库存:%.2lf",a,b,s);

    return 0;
}