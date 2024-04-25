#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int numbers[10] = { 10, 5, 20, 15, 30, 25, 40, 35, 50, 45 }; // 10个整数的数组
    int max = numbers[0]; // 假设第一个整数是最大值

    // 遍历数组中的其他整数，寻找最大值
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i]; // 更新最大值
        }
    }

    printf("10个整数中的最大值是：%d\n", max);

    return 0;
}
