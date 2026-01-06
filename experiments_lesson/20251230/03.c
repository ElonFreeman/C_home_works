#include<stdio.h>
#include<stdlib.h>

struct chengji
{
    char xuehao[3];
    char name[15];
    struct scores
    {
        char sub1[3],sub2[3],sub3[3];
    }subs;
    
};

int main(void)
{
    FILE *fp=fopen("chengji.txt","r");
    struct chengji stuinfo[4];

    if(fp==NULL)
    {
        printf("??");
        return 1;
    }

    for(int i=0;i<4;i++)
    {
        char a;

        for(int j=0;(a=fgetc(fp))!=' ';j++)  //xuehao
        {
            stuinfo[i].xuehao[j]=a;
        }

        int tmp=0;                           //name
        for(int j=0;(a=fgetc(fp))!=' ';j++)
        {
            stuinfo[i].name[j]=a;
            tmp=j;
        }
        stuinfo[i].name[tmp+1]='\0';

        tmp=0;
        for(int j=0;(a=fgetc(fp))!=' ';j++)  //sub1
        {
            stuinfo[i].subs.sub1[j]=a;
            tmp=j;
        }
        if(tmp<=2)
        {
            stuinfo[i].subs.sub1[tmp+1]='\0';
        }
        

        tmp=0;
        for(int j=0;(a=fgetc(fp))!=' ';j++)  //sub2
        {
            stuinfo[i].subs.sub2[j]=a;
            tmp=j;
        }
        if(tmp<=2)
        {
            stuinfo[i].subs.sub2[tmp+1]='\0';
        }

        tmp=0;
        for(int j=0;(a=fgetc(fp))!=' '&&a!='\n';j++)  //sub3
        {
            stuinfo[i].subs.sub3[j]=a;
            tmp=j;
        }
        if(tmp<=2)
        {
            stuinfo[i].subs.sub3[tmp+1]='\0';
        }

        if((a=fgetc(fp))!='\n')
        {
            
            continue;
        }
    }



    return 0;
}