#include <stdio.h>
int main()
{
    double e=2,deta=0.0001;
    int n=2,tmp,n_factorial=1;


    while(1)
    {
        tmp=n;

        while(n>0)
        {
            n_factorial*=n;
            n-=1;
        }

        e+=1.0/(double)n_factorial;

        if((1/(double)n_factorial)<deta)
        {
            break;
        }

        n_factorial=1;
        n=tmp;
        n++;
    }

    printf("%.10lf",e);

    return 0;
}