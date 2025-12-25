#include <stdio.h>

typedef struct 
{
    int num;
    char name[10];
}person;

void fun(person std[])
{
    person temp;

    for(int i=0;i<3;i++)
    {
        if(std[i].num>std[i+1].num)
        {
            temp=std[i];
            std[i]=std[i+1];
            std[i+1]=temp;
        }
    }
    
}


//main
int main()
{
    person std[]={{5,"dick"},{2,"fuck"},{6,"bitch"}};

    fun(std);

    for(int i=0;i<3;i++)
    {
        printf("%d,%s\n",std[i].num,std[i].name);
    }

    return 0;
}