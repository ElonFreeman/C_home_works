#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float x1,x2;
    int delta;
    scanf("%d%d%d",&a,&b,&c);

    delta=b*b-4*a*c;
    if(delta<=0)
    {
        printf("no root!");
    }
    else
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("X1=%.3f\nX2=%.3f",x1,x2);
    }
    return 0;
}