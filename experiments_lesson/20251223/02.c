#include <stdio.h>

union data
{
    int x[2];
    float a;
    float b;
    char c[4];
};

int main()
{
    union data u;
    u.x[0]=10000;
    printf("%d",u.x[0]);
    u.x[0]=20000;
    printf("%d",u.x[0]);

    //printf("x[0]=%d,x[1]=%d\na=%f,b=%f\n",u.x[0],u.x[1],u.a,u.b);
    //printf("c[0]=%d,c[1]=%d,c[2]=%d,c[3]=%d",u.c[0],u.c[1],u.c[2],u.c[3]);
    return 0;
}