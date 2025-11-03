#include <stdio.h>

int main()
{
 int num;
    scanf("%d", &num);

    if (num > 9999)
    {
        printf("Illegal input!");
    }

    else
    {
        if (num < 10 && num > 0)
        {
            printf("1\n");
        }

        else if (num < 100 && num >= 10)
        {
            printf("2\n");
        }

        else if (num < 1000 && num >= 100)
        {
            printf("3\n");
        }

        else if (num < 10000 && num >= 1000)

        {

            printf("4\n");
        }

        int digit;
        while (num >= 1)
        {
            digit = num % 10;
            printf("%d", digit);
            num = num / 10;
        }
    }
    return 0;
}

