#include <stdio.h>
#include <string.h>

int ispalindrome(char *s)
{
    int i,j,n;

    for(i=0;s[i]!='\0';i++){}  //尝试strlen函数进行char长度计数

    n=i;

    for(i=0,j=n-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            return 0;
        }

        return 1;
    }

    return 0;
}

int main()
{
    int ispalindrome(char *s);
    char ss[100];

    while(strlen(gets(ss)))
    {
        if(ispalindrome(ss))
        {
            printf("Y\n");
        }

        else
        {
            printf("N\n");
        }
    }

    return 0;
}