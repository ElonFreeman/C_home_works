#include <stdio.h>

char *sort(char *str)
{
    int i,j,n,t;
    char tmp;

    for(i=0;str[i]!='\0';i++){}  //尝试strlen函数进行char长度计数

    n=i;

    for(i=0;i<n-1;i++)
    {
        t=i;

        for(j=i+1;j<n;j++)
        {
            if(str[t]>str[j])
            {
                t=j;
            }
        }

        if(t!=i)
        {
            tmp=str[i];
            str[i]=str[t];
            str[t]=tmp;
        }
    }

    return str;
}

int main()
{
    char *sort(char str[]);
    char str[100]="gfdsaqwetrtiy";

    printf("%s",sort(str));

    return 0;
}