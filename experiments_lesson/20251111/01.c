#include <stdio.h>
int main()
{
    int n,count=0;
    printf("\n");

    for(n=1800;n<2001;n++)
    {
        if(((n%4==0)&&(n%100!=0))||(n%400==0))
        {
            printf("%6d",n);
            count++;
            if(count%3==0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}