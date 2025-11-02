#include <stdio.h>



int main()

{

    int a=1,b=3;

    int i,j;

    for(i=5;i<=101;i=i+4)

    {

        a=a+i;

    }



    for (j=7;j<=99;j=j+4)

    {

        b=b+j;

    }

   

    printf("%d",a-b);

    return 0;

}

