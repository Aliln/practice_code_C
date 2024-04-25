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

    // �����λ������9�Ĵ���
    count += count9(100);

    // ����ʮλ������9�Ĵ���
    for (int i = 1; i <= 10; i++) {
        count += count9(i) * 10;
    }

    printf("1��100�����������г�������9�Ĵ���Ϊ��%d\n", count);

    return 0;
}
