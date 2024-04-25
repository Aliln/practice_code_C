#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100 // 顺序表的最大容量

typedef struct {
    int data[MAX_SIZE]; // 存储数据的数组
    int length;         // 当前顺序表的长度
} SequenceList;

// 初始化顺序表
void initList(SequenceList* list) {
    list->length = 0;
}

// 插入元素
bool insert(SequenceList* list, int index, int value) {
    if (index < 1 || index > list->length + 1 || list->length >= MAX_SIZE) {
        return false; // 插入位置不合法或顺序表已满
    }

    for (int i = list->length; i >= index; i--) {
        list->data[i] = list->data[i - 1]; // 向后移动元素
    }

    list->data[index - 1] = value; // 在插入位置放入新元素
    list->length++; // 更新顺序表长度
    return true;
}

// 删除元素
bool removeElement(SequenceList* list, int index) {
    if (index < 1 || index > list->length) {
        return false; // 删除位置不合法
    }

    for (int i = index; i < list->length; i++) {
        list->data[i - 1] = list->data[i]; // 向前移动元素
    }

    list->length--; // 更新顺序表长度
    return true;
}

// 修改元素
bool modify(SequenceList* list, int index, int value) {
    if (index < 1 || index > list->length) {
        return false; // 修改位置不合法
    }

    list->data[index - 1] = value; // 修改元素值
    return true;
}

// 查找元素
int search(SequenceList* list, int value) {
    for (int i = 0; i < list->length; i++) {
        if (list->data[i] == value) {
            return i + 1; // 返回元素位置（从1开始）
        }
    }
    return -1; // 没有找到元素
}

// 打印顺序表
void display(SequenceList* list) {
    for (int i = 0; i < list->length; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}

int main() {
    SequenceList seqList;
    initList(&seqList);

    // 插入元素
    insert(&seqList, 1, 10);
    insert(&seqList, 2, 20);
    insert(&seqList, 3, 30);
    display(&seqList); // 输出：10 20 30

    // 删除元素
    removeElement(&seqList, 2);
    display(&seqList); // 输出：10 30

    // 修改元素
    modify(&seqList, 2, 40);
    display(&seqList); // 输出：10 40

    // 查找元素
    int index = search(&seqList, 40);
    if (index != -1) {
        printf("元素 40 在顺序表中的位置是：%d\n", index);
    }
    else {
        printf("元素 40 不在顺序表中\n");
    }

    return 0;
}
