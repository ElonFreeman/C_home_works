#include <stdio.h>
int main()
{
    int n, i, j;     // n为项数，i,j为计数器
    double a, b, PI; // 分组求和，PI值
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        for (i = 1; i <= (2 * n - 3); i += 4) // 正数部分
        {
            a += 1.0 / i;
        }

        for (j = 3; j <= (2 * n - 1); j += 4) // 负数部分
        {
            b += 1.0 / j;
        }

        PI = (a - b)*4;
    }

    if (n % 2 != 0)
    {
        for (i = 1; i <= (2 * n - 5); i += 4)
        {
            a += 1.0 / i;
        }

        for (j = 3; j <= (2 * n - 3); j += 4)
        {
            b += 1.0 / j;
        }

        PI = ((a - b) - (1.0 / (2 * n - 1)))*4;
    }

    printf("%lf", PI);

    return 0;
}