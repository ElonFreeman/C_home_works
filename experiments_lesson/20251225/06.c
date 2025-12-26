#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    p=(int*)malloc(sizeof(int)*10);

    for(int i=0;i<10;i++)
    {
        scanf("%d",p+i);
    }

    for(int i=9;i>=0;i--)
    {
        if(i==0)
        {
            printf("%d",*(p+i));
            break;
        }
        
        printf("%d ",*(p+i));
    }

    return 0;
}