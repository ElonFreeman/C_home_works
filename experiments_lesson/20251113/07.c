#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,p,s;
    double sina,sinb,sinc,cosa,cosb,cosc;
    scanf("%d%d%d",&a,&b,&c);

    if(!((a+b>c)&&(a+c>b)&&(b+c>a)))
    {
        printf("Not triangle");
    }

    else
    {
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        //s=0.5*a*c*sinB=0.5*a*b*sinC=0.5*b*c*sinA

        sina=(2*s)/(b*c);
        sinb=(2*s)/(a*c);
        sinc=(2*s)/(a*b);

        cosa=(pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c);
        cosb=(pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c);
        cosc=(pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b);

        if((sina==1)||(sinb==1)||(sinc==1))
        {
            printf("Right triangle");
        }

        else if(!(sina==1)||(sinb==1)||(sinc==1))
        {
            if(((cosa<0)&&(cosa>-1))||((cosb<0)&&(cosb>-1))||((cosc<0)&&(cosc>-1)))
            {
                printf("Obtuse triangle");
            }

            else
            {
                printf("Acute triangle");
            }
        }

        else{}
    }
    return 0;
}