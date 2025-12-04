#include <stdio.h>
#include <math.h>

float fun(float h)
{
    float tmp,inte,floa;

    tmp=h*100;
    inte=(int)tmp;
    floa=tmp-inte;

    if(floa>=0.5)
    {
        inte+=1;
        return inte/=100;
    }

    else if(floa<0.5)
    {
        return inte/=100;
    }

    return 0;
}

int main()
{
    float fun(float h);
    float h=8.3234,cont=0;

    cont=fun(h);

    return 0;
}