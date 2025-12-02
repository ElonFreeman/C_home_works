#include <stdio.h>

int sum_square(int n)
{
    if (n <= 0) {
        return 0;
    }
    
    return n * n + sum_square(n - 1);
}

int main()
{
    int n=10,s=0;

    s=sum_square(n);

    printf("%d",s);

    return 0;
}