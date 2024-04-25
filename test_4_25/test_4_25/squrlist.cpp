#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100 // ˳�����������

typedef struct {
    int data[MAX_SIZE]; // �洢���ݵ�����
    int length;         // ��ǰ˳���ĳ���
} SequenceList;

// ��ʼ��˳���
void initList(SequenceList* list) {
    list->length = 0;
}

// ����Ԫ��
bool insert(SequenceList* list, int index, int value) {
    if (index < 1 || index > list->length + 1 || list->length >= MAX_SIZE) {
        return false; // ����λ�ò��Ϸ���˳�������
    }

    for (int i = list->length; i >= index; i--) {
        list->data[i] = list->data[i - 1]; // ����ƶ�Ԫ��
    }

    list->data[index - 1] = value; // �ڲ���λ�÷�����Ԫ��
    list->length++; // ����˳�����
    return true;
}

// ɾ��Ԫ��
bool removeElement(SequenceList* list, int index) {
    if (index < 1 || index > list->length) {
        return false; // ɾ��λ�ò��Ϸ�
    }

    for (int i = index; i < list->length; i++) {
        list->data[i - 1] = list->data[i]; // ��ǰ�ƶ�Ԫ��
    }

    list->length--; // ����˳�����
    return true;
}

// �޸�Ԫ��
bool modify(SequenceList* list, int index, int value) {
    if (index < 1 || index > list->length) {
        return false; // �޸�λ�ò��Ϸ�
    }

    list->data[index - 1] = value; // �޸�Ԫ��ֵ
    return true;
}

// ����Ԫ��
int search(SequenceList* list, int value) {
    for (int i = 0; i < list->length; i++) {
        if (list->data[i] == value) {
            return i + 1; // ����Ԫ��λ�ã���1��ʼ��
        }
    }
    return -1; // û���ҵ�Ԫ��
}

// ��ӡ˳���
void display(SequenceList* list) {
    for (int i = 0; i < list->length; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}

int main() {
    SequenceList seqList;
    initList(&seqList);

    // ����Ԫ��
    insert(&seqList, 1, 10);
    insert(&seqList, 2, 20);
    insert(&seqList, 3, 30);
    display(&seqList); // �����10 20 30

    // ɾ��Ԫ��
    removeElement(&seqList, 2);
    display(&seqList); // �����10 30

    // �޸�Ԫ��
    modify(&seqList, 2, 40);
    display(&seqList); // �����10 40

    // ����Ԫ��
    int index = search(&seqList, 40);
    if (index != -1) {
        printf("Ԫ�� 40 ��˳����е�λ���ǣ�%d\n", index);
    }
    else {
        printf("Ԫ�� 40 ����˳�����\n");
    }

    return 0;
}
