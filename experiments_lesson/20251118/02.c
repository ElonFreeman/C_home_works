#include <stdio.h>
int main()
{
    int i,num=0,word=0;
    char c=0;
    char string[100]={};
    scanf("%s",string);
    for(i=0;(c=string[i])!='\0';i++)
    {
        if(c==' '||c==',')
        {
            word++;
        }

        /*else if(word==0)
        {
            word=1;
            num++;
        }*/
    }

    printf("The number of words is: %d\n",word);
    
    return 0;
}