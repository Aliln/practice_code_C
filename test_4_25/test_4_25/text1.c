#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ��������������ֵ
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// ð������
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int nums[3];

    // ��ȡ��������
    printf("����������������");
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

    // ��������������
    bubbleSort(nums, 3);

    // ��������Ľ��
    printf("�Ӵ�С�����Ľ���ǣ�");
    for (int i = 0; i < 3; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
