#include <stdio.h>
int main()
{   
    int H1, M1, H2, M2,delta;
    scanf("%d %d %d %d", &H1, &M1,&H2, &M2);
    delta=(H2*60+M2)-(H1*60+M1);
    printf("%d\n", delta);
    return 0;
}