#include <stdio.h>
#define M 10
int main()
{
    float a[M+1]={0,1,2,3,4,5,6,7,8,9};  //有序数列，升序
    int i;
    float *p,*q;
    float n=4.5;

    //a[M]=n;  //插入数放在末尾

    for(p=a,i=0;i<=M;i++)
    {
        if(n<=*(p+i))
        {
            p=p+i;
            break;
        }
    }

    for(q=a+M-1;q>=p;q--)
    {
        *(q+1)=*q;
    }

    *p=n;

    for(p=a,i=0;i<M+1;i++)
    {
        printf("%f  ",*(p+i));
    }

    return 0;
}