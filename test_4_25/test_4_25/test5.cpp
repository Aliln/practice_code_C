#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    printf("1000年到2000年之间的闰年：\n");
    for (int year = 1000; year <= 2000; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d\n", year);
        }
    }
    return 0;
}
