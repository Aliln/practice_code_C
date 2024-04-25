#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 交换两个整数的值
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 冒泡排序
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

    // 读取三个整数
    printf("请输入三个整数：");
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

    // 对整数进行排序
    bubbleSort(nums, 3);

    // 输出排序后的结果
    printf("从大到小排序后的结果是：");
    for (int i = 0; i < 3; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
