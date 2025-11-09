#include <stdio.h>
int main()
{
    int count,num;

    for (count=1;count<=5;count++)
    {
        printf("Please select your thing:\n[1]Select crisps\n[2]Select popcorn\n[3]Select chocolate\n[4]Select cola\n[0] Exit\n");
        scanf("%d",&num);
        switch(num)
        {
            case 1:printf("$3.0\n");break;
            case 2:printf("$2.5\n");break;
            case 3:printf("$4.0\n");break;
            case 4:printf("$3.5\n");break;
            case 0:break;
            default:printf("Illegal selection!\n");
        }

        if(num==0)
        {
            break;
        }
    }
    return 0;
}