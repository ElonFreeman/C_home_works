#include <stdio.h>
int main()
{
    int elements[10]={0,1,2,3,4,5,6,7,8,9},tmp,i;
    /*for(i=0;i<10;i++)
    {
        scanf("%d",&elements[i]);
    }*/

    for(i=0;i<4;i++)
    {
        tmp=elements[i];
        elements[i]=elements[9-i];
        elements[9-i]=tmp;
    }

    for(i=0;i<10;i++)
    {
        printf("%d  ",elements[i]);
    }

    return 0;
}