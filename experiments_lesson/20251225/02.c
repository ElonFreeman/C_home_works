#include <stdio.h>

void str_copy(char *a,char *b)
{
    for(int i=0;i<80;i++)
    {
        b[i]=a[i];
    }
}

int main()
{
    char pa[81],pb[81];

    fgets(pa,81,stdin);
    str_copy(pa,pb);
    printf("%s",pb);
    return 0;
}