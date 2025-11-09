#include <stdio.h>

int main() {

    int i, j;
    int rows = 4;  // 总行数

    for(i = 1; i <= rows; i++)
    {
        // 打印空格（居中对齐）
        for(j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        // 打印星号
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;

}

