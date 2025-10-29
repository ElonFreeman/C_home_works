#include <stdio.h>
int main()
{
    int x=1,y=1,z=1;
    y=y+z;
    x=x+y;

    printf("%d",x<y?x++:y++);
    printf("%d",x);
    printf("%d",y);
    
    return 0;
}