#include <stdio.h>

char fun(char *s,char *p)
{
    int i,j,n,x,t;    
    n=0;

    for(i=0;s[i]!='\0';i++)
    {
        n++;
    }

    for(i=1;i<n-2;i+=2)
    {
        t=i;
        
        for(j=i+2;j<n;j+=2)
        {
            if(s[t]>s[j])
            {
                t=j;
            }
        }

        if(t!=i)
        {
            x=s[i];
            s[i]=s[t];
            s[t]=x;
        }
    }

    for(i=1,j=0;i<n;i+=2,j++)
    {
        p[j]=s[i];
    }

    p[j]='\0';

    return *p;
}


int main()
{
    char fun(char *s,char *p);
    char s[80]="baawrskjghzlicda",p[50];

    printf("origin_str:");
    puts(s);

    fun(s,p);

    printf("end:");
    puts(p);

    return 0;
}