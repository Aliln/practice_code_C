#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int numbers[10] = { 10, 5, 20, 15, 30, 25, 40, 35, 50, 45 }; // 10������������
    int max = numbers[0]; // �����һ�����������ֵ

    // ���������е�����������Ѱ�����ֵ
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i]; // �������ֵ
        }
    }

    printf("10�������е����ֵ�ǣ�%d\n", max);

    return 0;
}
