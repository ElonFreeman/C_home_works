#include <stdio.h>

char *deleter(char str[],char ch)
{
    int w=0,r;

    for(r=0;str[r]!='\0';r++)
    {
        if(ch!=str[r])
        {
            str[w]=str[r];
            w++;
        }
    }

    str[w]='\0';
    return str;
}

int main()
{
    char str[]={},ch;

    fgets(str,100,stdin);
    char c=getchar();
    ch=getchar();

    printf("%s",deleter(str,ch));

    return 0;
}