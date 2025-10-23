#include <stdio.h>
#define PRICE 12.5 //定义常量

int main()

{     
    int num =3;
    float total;
    char ch1,ch2='D';  //'D'对应ASCII里的68

    total=num*PRICE;
    ch1=ch2-'A'+'a';  //'A'对应ASCII里的65，'a'对应ASCII里的97    这个式子对应ASCII表里的数值

    printf("total=%f,ch1=%c\n",total,ch1); //%f对应float，%c对应char
    
    return 0;

}
