#include <stdio.h>
int main()
{
    char t_type;
    printf("please input your car type:");
    scanf("%c",&t_type);

    switch(t_type)
    {
        case 'A':printf("RMB60");break;
        case 'B':printf("RMB50");break;
        case 'C':printf("RMB40");break;
        case 'D':printf("RMB20");break;
        default:printf("RMB10");break;
    }
    return 0;
}