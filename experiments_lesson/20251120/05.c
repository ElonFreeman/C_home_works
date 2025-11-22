#include <stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);

    for(;a<=b;a++)
    {
        printf("%d:",a);

        for(i=1;i<a;i++)
        {
            if(a%i==0)
            {
                if(i>1)
                {
                    printf(" ");
                }

                printf("%d",i);
            }
        }

        printf("\n");
    }

    return 0;
}