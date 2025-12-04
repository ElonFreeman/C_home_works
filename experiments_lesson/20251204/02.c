#include<stdio.h>
int main()
{
    int num[]={},sum=0,i=0,count=0;

    do
    {
        scanf("%d",&num[count]);
        count++;
    }while((num[count-1]==1));  

    for(;i<count;i++)
    {
        while(num[i]>0)
        {
            sum+=num[i]%10;
            num[i]/=10;
        }

        if(sum==num[i])
        {
            printf("YES");
        }
        else if(sum!=num[i])
        {
            printf("NO");
        }
    }
    
    return 0;
}