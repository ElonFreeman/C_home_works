#include <stdio.h>
int main()
{
    float h=1000,sum=0;
    int n=5,i;
    //scanf("%f%f",&n,&h);
    sum=h;
    for(i=0;i<n-2;i++)
    {
        h/=2;
        sum+=h*2;
    }

    sum-=h;
    printf("%.2f %.2f",h/2,sum);

    return 0;
}