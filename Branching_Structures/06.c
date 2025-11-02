#include <stdio.h>

#include <math.h>



int main()




{

    float a,b,c;

    printf("Please enter three number:");

    scanf("%f%f%f",&a,&b,&c);



    float S,p;

    p=(a+b+c)/2;



    if(a+b>c&&a+c>b&&b+c>a)

    {

        S=sqrt(p*(p-a)*(p-b)*(p-c));

        printf("triangle S:%f",S);

    }



    else

        printf("It can not be a triangle!");  



    return 0;

}



