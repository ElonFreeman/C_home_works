#include <stdio.h>

int func(char *str,char ch)
{
    int num=0,i;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            num+=1;
        }
    }

    return num;
}

int main()
{
    int func(char *str,char ch);
    char s[81]="ssdfgtressghnrsgefdsbdqertydss",c='s';

    printf("\ninput a string:");
    //gets(s);

    printf("\ninput a letter:");
    //c=getchar();

    printf("\nthe num of %c is:%d",c,func(s,c));

    return 0;
}