#include <stdio.h>

int str_cat(char *d,char *s,int *t)
{
    int i,j;

    for(i=*t,j=0;s[j]!='\n'&&s[j]!='\0';i++,j++)
    {
        d[i]=s[j];
    }
    *t=i;
    d[i]='\0';

    return 0;
}

int main()
{
    char pa[81]="",pb[81]="",pc[81]="";
    int t=0;

    fgets(pa,81,stdin);
    //getchar();
    fgets(pb,81,stdin);
    //getchar();

    str_cat(pc,pa,&t);
    //printf("%d\n",t);
    str_cat(pc,pb,&t);


    printf("%s",pc);

    return 0;
}