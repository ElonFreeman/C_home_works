#include <stdio.h>
int main()
{
    int array[10]={1,3,6,10,15,21,28,36,45,55};
    for (int i = 0; i < 10; i++)
    {
       if((i+1)%5==0)
       {
            printf("%d",array[i]);
            printf("\n");
            continue;
       }

       printf("%d ",array[i]);
    }
    
    return 0;
}