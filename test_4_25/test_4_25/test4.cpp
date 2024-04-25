#include <stdio.h>

int count9(int n) {
    int count = 0;

    while (n > 0) {
        if (n % 10 == 9) {
            count++;
        }
        n /= 10;
    }

    return count;
}

int main() {
    int count = 0;

    // 计算个位上数字9的次数
    count += count9(100);

    // 计算十位上数字9的次数
    for (int i = 1; i <= 10; i++) {
        count += count9(i) * 10;
    }

    printf("1到100的所有整数中出现数字9的次数为：%d\n", count);

    return 0;
}
