#include<stdio.h>

#define N 90

int main(){

    long long int a,b,i,k,f[N+5]={0};  
    f[1]=f[2]=1;            

    for(i=3;i<=N;i++)

        f[i]=f[i-1]+f[i-2];

    scanf("%ld%ld",&a,&b);

      

    for(k=0,i=a;i<=b;i++,k++)
    {

        if(k%5>0) printf(" ");

        printf("%lld",f[i]);

        if(k%5==4&&i<b) printf("\n");

    }

    return 0;

}