#include <stdio.h>
int main()
{
    int m, n, s; // m为待判断的数，n为循环变量（找m的因数），s为因数和

    for (m = 1; m < 1000; m++)
    {
        s = 0; // 初始化因数和

        for (n = 1; n <= m / 2; n++) // n遍历1到m/2的所有整数
        {
            if (m % n == 0) // 判断n是否为m的因数，是则累加进s
            {
                s += n;
            }
        }

        if (m == s) // 执行判断
        {
            printf("%d\n", m);
        }
    }

    return 0;
}