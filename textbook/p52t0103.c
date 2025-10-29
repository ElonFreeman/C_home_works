#include <stdio.h>

int main()
{
    int x,y;

    scanf("%d%d",&x,&y);
    
    if(x>y)
        x=y;
    y=x;
    
    else
        x++;
    y++;
        
        
    printf("%d%d",x,y);
    
    return 0;

}