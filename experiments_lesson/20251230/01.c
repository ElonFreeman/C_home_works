#include<stdio.h>
#include<stdlib.h>

void writechar(char c)
{
    FILE *pf=fopen("data1.txt","a");

    if(pf==NULL)
    {
        exit(1);
    }

    fputc(c,pf);
}

int main()
{
    for(int i=0;i<10;i++)
    {
        writechar('F');
    }

    return 0;
}