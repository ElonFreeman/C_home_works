#include <stdio.h>

#define PI 3.14159



int main()

{

    int k;

    scanf("%d",&k);

   



    if(k>=1&&k<=3)

    {



        float r;

        scanf("%f",&r);



        if(k==1)

        {

            printf("%f\n",PI*r*r);

        }

        else if(k==2)

        {

            printf("%f\n",PI*r*2);

        }

        else if(k==3)

        {

            printf("%f\n%f\n",PI*r*r,PI*r*2);

        }

    }

    else

    {

        printf("Illegal option!");

    }

   

    return 0;

}

