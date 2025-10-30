#include <stdio.h>
int main()
{
    int h, m;
    scanf("%d:%d", &h, &m);
    int sum_m;
    int h_o, m_o;

    sum_m = h * 60 + m;
    sum_m = (sum_m - 1 + 1440) % 1440;
    m_o = (sum_m) % 60;
    h_o = (sum_m) / 60;

    printf("%d:%d", h_o, m_o);

    return 0;
}