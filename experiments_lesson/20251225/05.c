#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int *p;
    p=(int*)malloc(sizeof(int));

    while(scanf("%d",p)==1)
    {
        printf("%lf\n",*p**p);
    }

    free(p);

    return 0;
}
