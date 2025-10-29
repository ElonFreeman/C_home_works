#include <stdio.h>
int main()
{   
    int i=10;

    switch(i)
    {
        case 9:i+=1;
        case 10:i+=1;
        case 11:i+=1;
        default:i+1;  //case常量未匹配到时才会执行default语句
    }

    printf("%d",i);

    return 0;
}