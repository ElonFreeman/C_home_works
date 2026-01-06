#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    FILE *pf=fopen("data2.txt","r");
    if(pf==NULL)
    {
        printf("???\n");
    }
    int numbers=0,upper=0,lower=0;
    char fc='.';//=fgetc(pf);

    while(fc!=EOF)
    {
        fc=fgetc(pf);

        if(fc>='0'&&fc<='9')
        {
            numbers++;
        }

        else if(fc>='A'&&fc<='Z')
        {
            upper++;
        }

        else if(fc>='a'&&fc<='z')
        {
            lower++;
        }
    }

    fclose(pf);
    printf("%d\n%d\n%d\n",numbers,upper,lower);

    return 0;
}