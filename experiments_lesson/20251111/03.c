#include <stdio.h>
int main()
{
    float x,amax,amin;
    scanf("%f",&x);

    amax=x;
    amin=x;

    while(x>0)
    {
        if(x>amax)
        {
            amax=x;
        }
        if(x<amin)
        {
            amin=x;
        }
        scanf("%f",&x);
    }

    printf("\namax=%f\namin=%f",amax,amin);
    return 0;
}