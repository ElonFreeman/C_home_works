#include <stdio.h>
int main()
{
    char s[100]="sfasgth1QCRZ5FE";
    int i,j=0,k=0;
    char t1[10],t2[10];

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            t1[j]=s[i];
            j++;
        }
        
        else
        {
            t2[k++]=s[i];
        }
    }

    t1[k]=0;
    t2[j]=0;

    for(i=0;i<k;i++)
    {
        s[i]=t1[i];
    }
    
    for(i=0;i<j;i++)
    {
        s[k+i]=t2[i];
    }

    printf("%s\n",s);
    return 0;
}