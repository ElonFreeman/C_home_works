#include <stdio.h>
#include <math.h>

float fun(int k)
    {
        int n=1;
        float s=1.0,w,p,q;

        while(n<=k)
        {
            w=2.0*n;
            p=w-1.0;
            q=w+1.0;
            s*=pow(w,2)/(p*q);
            n++;
        }

        return s;
    }

int main()
{
    printf("%f\n",fun(10));

    return 0;
}