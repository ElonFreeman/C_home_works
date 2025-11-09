#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,p,S;
    scanf("a=%f,b=%f,c=%f",&a,&b,&c);

    p=(a+b+c)/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c));

    printf("S=%.4f",S);


    return 0;
}