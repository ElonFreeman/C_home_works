#include <stdio.h>

// 函数声明
void prime_factorization(int n);

int main() {
    int num;
    
    // 循环读取输入，直到文件结束
    while (scanf("%d", &num) != EOF) {
        if (num > 1) {
            printf("%d=", num);
            prime_factorization(num);
            printf("\n");
        }
    }
    
    return 0;
}

// 输出正整数n的素分解式
void prime_factorization(int n) {
    int factor = 2;  // 从最小的素数开始
    int first = 1;   // 标记是否是第一个因子
    
    while (n > 1) {
        if (n % factor == 0) {  // factor是n的因子
            if (!first) {
                printf("*");    // 不是第一个因子，输出乘号
            }
            printf("%d", factor);
            first = 0;          // 标记已输出过因子
            n /= factor;        // 除以因子
        } else {
            factor++;           // 尝试下一个数
        }
    }
}