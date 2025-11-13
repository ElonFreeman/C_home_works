#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);

    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    {
        printf("'%c' is a Letter.",c);
    }

    else
    {
        printf("'%c' is not a Letter.",c);
    }

    return 0;
}