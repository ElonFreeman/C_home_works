#include <stdio.h>
int main()
{
    int a, b, c, d, m, n;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &m, &n);
    while (d % 2 != 0)
    {
        printf("reinput:");
    }

    a = a + m;
    b = b - n;
    c = c * 2;
    d = d / 2;

    printf("%d %d %d %d ", a, b, c, d);

    return 0;
}