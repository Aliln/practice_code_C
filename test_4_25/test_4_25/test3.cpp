#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    double sum = 0.0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 1) {
            sum += 1.0 / i;  // ������
        }
        else {
            sum -= 1.0 / i;  // ż����
        }
    }

    printf("���Ϊ��%lf\n", sum);

    return 0;
}
