#include <stdio.h>

int main()

{
    int y,m,d;
    int M=0;
    int SUM;


    printf("Please input a date (yyyy mm dd):");
    scanf("%d%d%d",&y,&m,&d);

    if((y>0)&&(m>=1&&m<=12)&&(d>=1&&d<=31))
    {
        if(!((y%4==0&&y%100!=0)||y%400==0)&&m==2&&d==29)
        {
            printf("%d's feb do not have 29th!",y);
            return 1; 
        }
        else
        {
            switch(m)
            {
              case 12:M+=30;
              case 11:M+=31;
              case 10:M+=30;
              case 9:M+=31;
              case 8:M+=31;
              case 7:M+=30;
              case 6:M+=31;
              case 5:M+=30;
              case 4:M+=31;
              case 3:M+=28;
              case 2:M+=31;
              case 1:M+=0;
              break;
            }
        }
    
            SUM=M+d;

                if(((y%4==0&&y%100!=0)||y%400==0)&&m>2)
                    printf("It is the %d day of the year!",SUM+1);
                else
                    printf("%d",SUM); 
    }

    else 
        printf("Illegal input!");

    
    while (getchar() != '\n'); {}
    printf("\nPress any key to kill the terminal...");
    getchar(); 
    
return 0;
}