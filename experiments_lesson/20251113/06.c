#include <stdio.h>
#include <math.h>
int main()
{
    double x, y;
    scanf("%lf", &x);

    if (x < 1 || x >= 5)
    {
        printf("No define!");
    }

    else
    {
        if (x >= 1 && x < 2)
        {
            y = 3 * x + 5;
        }

        else if (x >= 2 && x < 3)
        {
            y = 2 * sin(x) - 1;
        }

        else if (x >= 3 && x < 4)
        {
            y = sqrt(1 + pow(x, 2));
        }

        else if (x >= 4 && x < 5)
        {
            y = pow(x, 2) - 2 * x + 5;
        }

        else
        {
        }

        printf("%.6lf\n", y);
    }

    return 0;
}